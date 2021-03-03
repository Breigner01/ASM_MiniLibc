/*
** EPITECH PROJECT, 2021
** B-ASM-400-PAR-4-1-asmminilibc-benjamin.reigner
** File description:
** test_strstr.c
*/

#include <string.h>
#include <criterion/criterion.h>
#include "tests.h"

Test(strstr, normal_strings)
{
    char *haystack = "Hello World!";
    char *needle = "lo Wo";
    char *ptr = strstr(haystack, needle);
    char *my_ptr = my_strstr(haystack, needle);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}

Test(strstr, needle_not_in_haystack)
{
    char *haystack = "Hello World!";
    char *needle = "Hallo";
    char *ptr = strstr(haystack, needle);
    char *my_ptr = my_strstr(haystack, needle);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}

Test(strstr, needle_partially_in_haystack)
{
    char *haystack = "Hello World!";
    char *needle = "World! Hello";
    char *ptr = strstr(haystack, needle);
    char *my_ptr = my_strstr(haystack, needle);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}

Test(strstr, empty_needle)
{
    char *haystack = "Hello World!";
    char *needle = "";
    char *ptr = strstr(haystack, needle);
    char *my_ptr = my_strstr(haystack, needle);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}

Test(strstr, empty_haystack)
{
    char *haystack = "";
    char *needle = "Hello World!";
    char *ptr = strstr(haystack, needle);
    char *my_ptr = my_strstr(haystack, needle);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}

Test(strstr, empty_strings)
{
    char *haystack = "";
    char *needle = "";
    char *ptr = strstr(haystack, needle);
    char *my_ptr = my_strstr(haystack, needle);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}

Test(strstr, identical_strings)
{
    char *haystack = "Hello World!";
    char *needle = "Hello World!";
    char *ptr = strstr(haystack, needle);
    char *my_ptr = my_strstr(haystack, needle);

    cr_assert_eq(my_ptr, ptr, "Got [%p]\nBut Expected [%p]\n", my_ptr, ptr);
}