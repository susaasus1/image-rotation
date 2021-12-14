//
// Created by Daniil on 24.11.2021.
//

#ifndef LAB3_IMAGE_H
#define LAB3_IMAGE_H

#include <stdbool.h>
#include <stdint.h>

struct image {
    uint64_t width, height;
    struct pixel *data;
};

struct pixel {
    uint8_t b, g, r;
};

bool image_malloc_data(struct image *img);

void image_destroy(struct image *img);

#endif //LAB3_IMAGE_H
