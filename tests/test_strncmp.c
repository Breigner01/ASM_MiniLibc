/*
** EPITECH PROJECT, 2021
** B-ASM-400-PAR-4-1-asmminilibc-benjamin.reigner
** File description:
** strncmp.c
*/

#include <string.h>
#include <criterion/criterion.h>
#include "tests.h"

Test(strncmp, normal_strings)
{
    char *s1 = "Hello World!";
    char *s2 = "Hello World!";
    int res = strncmp(s1, s2, 12);
    int my_res = my_strncmp(s1, s2, 12);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strncmp, partially_different_strings_but_same_up_to_n)
{
    char *s1 = "Hello Blyat!";
    char *s2 = "Hello World!";
    int res = strncmp(s1, s2, 6);
    int my_res = my_strncmp(s1, s2, 6);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strncmp, partially_different_strings)
{
    char *s1 = "Hello Blyat!";
    char *s2 = "Hello World!";
    int res = strncmp(s1, s2, 12);
    int my_res = my_strncmp(s1, s2, 12);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strncmp, different_strings)
{
    char *s1 = "Bande Organisée";
    char *s2 = "Hello World!";
    int res = strncmp(s1, s2, 12);
    int my_res = my_strncmp(s1, s2, 12);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strncmp, n_is_zero)
{
    char *s1 = "Hello World!";
    char *s2 = "Hello World!";
    int res = strncmp(s1, s2, 0);
    int my_res = my_strncmp(s1, s2, 0);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strncmp, bigger_n_than_string_length)
{
    char *s1 = "Hello World!";
    char *s2 = "Hello World!";
    int res = strncmp(s1, s2, 42);
    int my_res = my_strncmp(s1, s2, 42);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strncmp, empty_s1)
{
    char *s1 = "";
    char *s2 = "Hello World!";
    int res = strncmp(s1, s2, 12);
    int my_res = my_strncmp(s1, s2, 12);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strncmp, empty_s2)
{
    char *s1 = "Hello World!";
    char *s2 = "";
    int res = strncmp(s1, s2, 12);
    int my_res = my_strncmp(s1, s2, 12);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strncmp, empty_strings)
{
    char *s1 = "";
    char *s2 = "";
    int res = strncmp(s1, s2, 12);
    int my_res = my_strncmp(s1, s2, 12);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}