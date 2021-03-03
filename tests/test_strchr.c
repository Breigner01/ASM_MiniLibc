/*
** EPITECH PROJECT, 2021
** B-ASM-400-PAR-4-1-asmminilibc-benjamin.reigner
** File description:
** test_strchr.c
*/

#include <string.h>
#include <criterion/criterion.h>
#include "tests.h"

Test(strchr, normal_string)
{
    char *str = "Hello World!";
    char c = 'o';
    void *ptr = strchr(str, c);
    void *my_ptr = my_strchr(str, c);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}

Test(strchr, char_not_in_string)
{
    char *str = "Hello World!";
    char c = 'a';
    void *ptr = strchr(str, c);
    void *my_ptr = my_strchr(str, c);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}

Test(strchr, empty_string)
{
    char *str = "";
    char c = 'o';
    void *ptr = strchr(str, c);
    void *my_ptr = my_strchr(str, c);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}

Test(strchr, terminating_byte)
{
    char *str = "Hello World!";
    char c = '\0';
    void *ptr = strchr(str, c);
    void *my_ptr = my_strchr(str, c);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}

Test(strchr, terminating_byte_empty_string)
{
    char *str = "";
    char c = '\0';
    void *ptr = strchr(str, c);
    void *my_ptr = my_strchr(str, c);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}