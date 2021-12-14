//
// Created by Daniil on 24.11.2021.
//

#ifndef LAB3_FILE_UTIL_H
#define LAB3_FILE_UTIL_H

#include <stdbool.h>
#include <stdio.h>

bool open_file(FILE **file, const char *name, const char *mode);

bool close_file(FILE **file);


#endif //LAB3_FILE_UTIL_H
