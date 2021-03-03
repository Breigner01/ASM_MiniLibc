/*
** EPITECH PROJECT, 2021
** B-ASM-400-PAR-4-1-asmminilibc-benjamin.reigner
** File description:
** tests.h
*/

#ifndef B_ASM_400_PAR_4_1_ASMMINILIBC_BENJAMIN_REIGNER_TESTS_H
#define B_ASM_400_PAR_4_1_ASMMINILIBC_BENJAMIN_REIGNER_TESTS_H

#include <stddef.h>

void *my_memcpy(void *dest, const void *src, size_t n);
void *my_memmove(void *dest, const void *src, size_t n);
void *my_memset(void *s, int c, size_t n);
char *my_rindex(const char *s, int c);
size_t my_strlen(char *str);
char *my_strchr(char *str, char c);

#endif /* !B_ASM_400_PAR_4_1_ASMMINILIBC_BENJAMIN_REIGNER_TESTS_H */
