#pragma once

#include <stdio.h>
#include <stdlib.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef struct {
    char *str;
    unsigned int length;
    unsigned int size;
} dyn_str;

/**
 * @brief Initialiazion of string, allocating memory
 * @param string dynamic string
 */
int init_str(dyn_str *string);

/**
 * @brief Free memory of given string
 * @param string dynamic string
 */
void free_str(dyn_str *string);

/**
 * @brief Adds char to the end of the string
 * @param string dynamic string
 * @param letter character
 * @return 0 if success, else 1
 */
int add_char(dyn_str *string, char letter);

#ifdef __cplusplus
}
#endif