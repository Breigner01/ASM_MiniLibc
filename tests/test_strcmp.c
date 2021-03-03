/*
** EPITECH PROJECT, 2021
** B-ASM-400-PAR-4-1-asmminilibc-benjamin.reigner
** File description:
** test_strcmp.c
*/

#include <string.h>
#include <criterion/criterion.h>
#include "tests.h"

Test(strcmp, normal_strings)
{
    char *s1 = "Hello World!";
    char *s2 = "Hello World!";
    int res = strcmp(s1, s2);
    int my_res = my_strcmp(s1, s2);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strcmp, partially_different_strings)
{
    char *s1 = "Hello tests!";
    char *s2 = "Hello World!";
    int res = strcmp(s1, s2);
    int my_res = my_strcmp(s1, s2);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strcmp, different_strings)
{
    char *s1 = "Bande Organisée";
    char *s2 = "Hello World!";
    int res = strcmp(s1, s2);
    int my_res = my_strcmp(s1, s2);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strcmp, empty_s1)
{
    char *s1 = "";
    char *s2 = "Hello World!";
    int res = strcmp(s1, s2);
    int my_res = my_strcmp(s1, s2);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strcmp, empty_s2)
{
    char *s1 = "Hello World!";
    char *s2 = "";
    int res = strcmp(s1, s2);
    int my_res = my_strcmp(s1, s2);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strcmp, empty_strings)
{
    char *s1 = "";
    char *s2 = "";
    int res = strcmp(s1, s2);
    int my_res = my_strcmp(s1, s2);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}