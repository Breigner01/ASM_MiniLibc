/*
** EPITECH PROJECT, 2021
** B-ASM-400-PAR-4-1-asmminilibc-benjamin.reigner
** File description:
** test_memcpy.c
*/

#include <string.h>
#include <criterion/criterion.h>
#include "tests.h"

Test(memcpy, normal_mem)
{
    char dest[42] = {0};
    char *src = "Hello World!";
    char my_dest[42] = {0};
    char *ptr = memcpy(dest, src, 12);
    char *my_ptr = my_memcpy(my_dest, src, 12);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}

Test(memcpy, no_copy)
{
    char dest[42] = {0};
    char *src = "Hello World!";
    char my_dest[42] = {0};
    char *ptr = memcpy(dest, src, 0);
    char *my_ptr = my_memcpy(my_dest, src, 0);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}

Test(memcpy, empty_src)
{
    char dest[42] = {0};
    char *src = "";
    char my_dest[42] = {0};
    char *ptr = memcpy(dest, src, 42);
    char *my_ptr = my_memcpy(my_dest, src, 42);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}

Test(memcpy, src_emtpy_no_copy)
{
    char dest[42] = {0};
    char *src = "";
    char my_dest[42] = {0};
    char *ptr = memcpy(dest, src, 0);
    char *my_ptr = my_memcpy(my_dest, src, 0);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}

Test(memcpy, dest_empty_src_emtpy_no_copy)
{
    char dest[] = "";
    char *src = "";
    char my_dest[] = "";
    char *ptr = memcpy(dest, src, 0);
    char *my_ptr = my_memcpy(my_dest, src, 0);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}