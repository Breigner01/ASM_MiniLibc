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

Test(strcspn, normal_strings2)
{
    char *s = "Hello World!";
    char *reject = "Wo";
    size_t res = strcspn(s, reject);
    size_t my_res = my_strcspn(s, reject);

    cr_assert_eq(my_res, res, "Got [%zu]\nBut Expected [%zu]\n", my_res, res);
}

Test(strcspn, reject_in_begining_of_s)
{
    char *s = "Hello World!";
    char *reject = "H";
    size_t res = strcspn(s, reject);
    size_t my_res = my_strcspn(s, reject);

    cr_assert_eq(my_res, res, "Got [%zu]\nBut Expected [%zu]\n", my_res, res);
}

Test(strcspn, reject_in_end_of_s)
{
    char *s = "Hello World!";
    char *reject = "!";
    size_t res = strcspn(s, reject);
    size_t my_res = my_strcspn(s, reject);

    cr_assert_eq(my_res, res, "Got [%zu]\nBut Expected [%zu]\n", my_res, res);
}

Test(strcspn, reject_not_in_s)
{
    char *s = "Hello World!";
    char *reject = "abc";
    size_t res = strcspn(s, reject);
    size_t my_res = my_strcspn(s, reject);

    cr_assert_eq(my_res, res, "Got [%zu]\nBut Expected [%zu]\n", my_res, res);
}

Test(strcspn, reject_partially_in_s)
{
    char *s = "Hello World!";
    char *reject = "dabc";
    size_t res = strcspn(s, reject);
    size_t my_res = my_strcspn(s, reject);

    cr_assert_eq(my_res, res, "Got [%zu]\nBut Expected [%zu]\n", my_res, res);
}

Test(strcspn, reject_partially_in_s2)
{
    char *s = "Hello World!";
    char *reject = "abcd";
    size_t res = strcspn(s, reject);
    size_t my_res = my_strcspn(s, reject);

    cr_assert_eq(my_res, res, "Got [%zu]\nBut Expected [%zu]\n", my_res, res);
}

Test(strcspn, reject_partially_in_s3)
{
    char *s = "Hello World!";
    char *reject = "abdc";
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