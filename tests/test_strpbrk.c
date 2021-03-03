/*
** EPITECH PROJECT, 2021
** B-ASM-400-PAR-4-1-asmminilibc-benjamin.reigner
** File description:
** test_strpbrk.c
*/

#include <string.h>
#include <criterion/criterion.h>
#include "tests.h"

Test(strpbrk, normal_string)
{
    char *s = "Hello World!";
    char *accept = "Wo";
    char *res = strpbrk(s, accept);
    char *my_res = my_strpbrk(s, accept);

    cr_assert_eq(my_res, res, "Got [%p]\nBut Expected [%p]\n", my_res ,res);
}

Test(strpbrk, accept_bytes_not_in_s)
{
    char *s = "Hello World!";
    char *accept = "az";
    char *res = strpbrk(s, accept);
    char *my_res = my_strpbrk(s, accept);

    cr_assert_eq(my_res, res, "Got [%p]\nBut Expected [%p]\n", my_res ,res);
}

Test(strpbrk, empty_accept)
{
    char *s = "Hello World!";
    char *accept = "";
    char *res = strpbrk(s, accept);
    char *my_res = my_strpbrk(s, accept);

    cr_assert_eq(my_res, res, "Got [%p]\nBut Expected [%p]\n", my_res ,res);
}

Test(strpbrk, empty_s)
{
    char *s = "";
    char *accept = "zw";
    char *res = strpbrk(s, accept);
    char *my_res = my_strpbrk(s, accept);

    cr_assert_eq(my_res, res, "Got [%p]\nBut Expected [%p]\n", my_res ,res);
}

Test(strpbrk, empty_strings)
{
    char *s = "";
    char *accept = "";
    char *res = strpbrk(s, accept);
    char *my_res = my_strpbrk(s, accept);

    cr_assert_eq(my_res, res, "Got [%p]\nBut Expected [%p]\n", my_res ,res);
}

Test(strpbrk, similar_strings)
{
    char *s = "Hello World!";
    char *accept = "Hello World!";
    char *res = strpbrk(s, accept);
    char *my_res = my_strpbrk(s, accept);

    cr_assert_eq(my_res, res, "Got [%p]\nBut Expected [%p]\n", my_res ,res);
}