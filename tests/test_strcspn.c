/*
** EPITECH PROJECT, 2021
** B-ASM-400-PAR-4-1-asmminilibc-benjamin.reigner
** File description:
** test_strcspn.c
*/

#include <string.h>
#include <criterion/criterion.h>
#include "tests.h"

Test(strcspn, normal_strings)
{
    char *s = "Hello World!";
    char *reject = "o";
    size_t res = strcspn(s, reject);
    size_t my_res = my_strcspn(s, reject);

    cr_assert_eq(my_res, res, "Got [%zu]\nBut Expected [%zu]\n", my_res, res);
}

Test(strcspn, reject_empty)
{
    char *s = "Hello World!";
    char *reject = "";
    size_t res = strcspn(s, reject);
    size_t my_res = my_strcspn(s, reject);

    cr_assert_eq(my_res, res, "Got [%zu]\nBut Expected [%zu]\n", my_res, res);
}

Test(strcspn, s_empty)
{
    char *s = "";
    char *reject = "Hello World!";
    size_t res = strcspn(s, reject);
    size_t my_res = my_strcspn(s, reject);

    cr_assert_eq(my_res, res, "Got [%zu]\nBut Expected [%zu]\n", my_res, res);
}

Test(strcspn, empty_strings)
{
    char *s = "";
    char *reject = "";
    size_t res = strcspn(s, reject);
    size_t my_res = my_strcspn(s, reject);

    cr_assert_eq(my_res, res, "Got [%zu]\nBut Expected [%zu]\n", my_res, res);
}

Test(strcspn, reject_same_as_s)
{
    char *s = "Hello World!";
    char *reject = "Hello World!";
    size_t res = strcspn(s, reject);
    size_t my_res = my_strcspn(s, reject);

    cr_assert_eq(my_res, res, "Got [%zu]\nBut Expected [%zu]\n", my_res, res);
}