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
int my_strcasecmp(const char *s1, const char *s2);
char *my_strchr(const char *str, char c);
int my_strcmp(const char *s1, const char *s2);
size_t my_strcspn(const char *s, const char *reject);
size_t my_strlen(const char *str);
int my_strncmp(const char *s1, const char *s2, size_t n);
char *my_strpbrk(const char *s, const char *accept);
char *my_strstr(const char *haystack, const char *needle);

#endif /* !B_ASM_400_PAR_4_1_ASMMINILIBC_BENJAMIN_REIGNER_TESTS_H */
