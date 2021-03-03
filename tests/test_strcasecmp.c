/*
** EPITECH PROJECT, 2021
** B-ASM-400-PAR-4-1-asmminilibc-benjamin.reigner
** File description:
** test_strcasecmp.c
*/

#include <strings.h>
#include <criterion/criterion.h>
#include "tests.h"

Test(strcasecmp, normal_string)
{
    char *s1 = "Hello World!";
    char *s2 = "Hello World!";
    int res = strcasecmp(s1, s2);
    int my_res = my_strcasecmp(s1, s2);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strcasecmp, s1_uppercase)
{
    char *s1 = "HELLO WORLD!";
    char *s2 = "Hello World!";
    int res = strcasecmp(s1, s2);
    int my_res = my_strcasecmp(s1, s2);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strcasecmp, s1_uppercase_s2_lowercase)
{
    char *s1 = "HELLO WORLD!";
    char *s2 = "hello world!";
    int res = strcasecmp(s1, s2);
    int my_res = my_strcasecmp(s1, s2);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strcasecmp, s1_lowerrcase)
{
    char *s1 = "hello world!";
    char *s2 = "Hello World!";
    int res = strcasecmp(s1, s2);
    int my_res = my_strcasecmp(s1, s2);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strcasecmp, partially_different_strings)
{
    char *s1 = "Hello Epitech";
    char *s2 = "Hello World!";
    int res = strcasecmp(s1, s2);
    int my_res = my_strcasecmp(s1, s2);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strcasecmp, different_strings)
{
    char *s1 = "Bande Organisée";
    char *s2 = "Hello World!";
    int res = strcasecmp(s1, s2);
    int my_res = my_strcasecmp(s1, s2);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strcasecmp, emtpy_s1)
{
    char *s1 = "";
    char *s2 = "Hello World!";
    int res = strcasecmp(s1, s2);
    int my_res = my_strcasecmp(s1, s2);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strcasecmp, emtpy_s2)
{
    char *s1 = "Hello World!";
    char *s2 = "";
    int res = strcasecmp(s1, s2);
    int my_res = my_strcasecmp(s1, s2);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}

Test(strcasecmp, emtpy_strings)
{
    char *s1 = "";
    char *s2 = "";
    int res = strcasecmp(s1, s2);
    int my_res = my_strcasecmp(s1, s2);

    cr_assert_eq(my_res, res, "Got [%d]\nBut Expected [%d]\n", my_res, res);
}