/*
** EPITECH PROJECT, 2021
** B-ASM-400-PAR-4-1-asmminilibc-benjamin.reigner
** File description:
** test_rindex.c
*/

#include <strings.h>
#include <criterion/criterion.h>
#include "tests.h"

Test(rindex, normal_string)
{
    char *str = "Hello World!";
    char c = 'r';
    char *ptr = rindex(str, c);
    char *my_ptr = my_rindex(str, c);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}

Test(rindex, character_twice_in_string)
{
    char *str = "Hello World!";
    char c = 'o';
    char *ptr = rindex(str, c);
    char *my_ptr = my_rindex(str, c);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}

Test(rindex, character_not_in_string)
{
    char *str = "Hello World!";
    char c = 'z';
    char *ptr = rindex(str, c);
    char *my_ptr = my_rindex(str, c);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}

Test(rindex, terminating_byte)
{
    char *str = "Hello World!";
    char c = '\0';
    char *ptr = rindex(str, c);
    char *my_ptr = my_rindex(str, c);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}

Test(rindex, empty_string)
{
    char *str = "";
    char c = 'o';
    char *ptr = rindex(str, c);
    char *my_ptr = my_rindex(str, c);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}

Test(rindex, empty_string_and_terminating_byte)
{
    char *str = "";
    char c = '\0';
    char *ptr = rindex(str, c);
    char *my_ptr = my_rindex(str, c);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}