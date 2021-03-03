/*
** EPITECH PROJECT, 2021
** B-ASM-400-PAR-4-1-asmminilibc-benjamin.reigner
** File description:
** test_memset.c
*/

#include <string.h>
#include <criterion/criterion.h>
#include "tests.h"

Test(memset, normal_mem)
{
    char s[42] = {' '};
    void *ptr = memset(s, 42, 42);
    void *my_ptr = my_memset(s, 42, 42);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}

Test(memset, fill_part_of_s)
{
    char s[42] = {' '};
    void *ptr = memset(s, 42, 21);
    void *my_ptr = my_memset(s, 42, 21);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}

Test(memset, no_fill)
{
    char s[42] = {' '};
    void *ptr = memset(s, 42, (0));
    void *my_ptr = my_memset(s, 42, 0);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}

Test(memset, empty_s_and_no_fill)
{
    char *s = "";
    void *ptr = memset(s, 42, (0));
    void *my_ptr = my_memset(s, 42, 0);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}