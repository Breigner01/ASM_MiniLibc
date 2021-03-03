/*
** EPITECH PROJECT, 2021
** B-ASM-400-PAR-4-1-asmminilibc-benjamin.reigner
** File description:
** test_memmove.c
*/

#include <string.h>
#include <criterion/criterion.h>
#include "tests.h"

Test(memmove, normal_mem)
{
    char dest[] = "Hello World!";
    char my_dest[] = "Hello World!";
    char *src = "tests";
    void *ptr = memmove(dest, src, 5);
    void *my_ptr = my_memmove(my_dest, src, 5);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}

Test(memmove, src_before_dest_overlap)
{
    char src[] = "Hello World!";
    char my_src[] = "Hello World!";
    char *dest = src + 2;
    char *my_dest = my_src + 2;
    void *ptr = memmove(dest, src, 10);
    void *my_ptr = my_memmove(my_dest, my_src, 10);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}

Test(memmove, different_dest)
{
    char *src = "Hello World!";
    char dest[] = "aaaaaaaaaa";
    char my_dest[] = "aaaaaaaaaa";
    void *ptr = memmove(dest, src, 10);
    void *my_ptr = my_memmove(my_dest, src, 10);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}

Test(memmove, src_after_dest_overlap)
{
    char dest[] = "Hello World!";
    char my_dest[] = "Hello World!";
    char *src = dest + 2;
    char *my_src = my_dest + 2;
    void *ptr = memmove(dest, src, 10);
    void *my_ptr = my_memmove(my_dest, my_src, 10);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}

Test(memmove, same_src_and_dest)
{
    char dest[] = "Hello World!";
    char my_dest[] = "Hello World!";
    char *src = dest;
    char *my_src = my_dest;
    void *ptr = memmove(dest, src, 12);
    void *my_ptr = my_memmove(my_dest, my_src, 12);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}

Test(memmove, no_move)
{
    char dest[] = "Hello World!";
    char my_dest[] = "Hello World!";
    char *src = "tests";
    void *ptr = memmove(dest, src, 0);
    void *my_ptr = my_memmove(my_dest, src, 0);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}

Test(memmove, empty_src_no_move)
{
    char dest[] = "Hello World!";
    char my_dest[] = "Hello World!";
    char *src = "";
    void *ptr = memmove(dest, src, 0);
    void *my_ptr = my_memmove(my_dest, src, 0);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}

Test(memmove, empty_src_dest_no_move)
{
    char dest[] = "";
    char my_dest[] = "";
    char *src = "";
    void *ptr = memmove(dest, src, 0);
    void *my_ptr = my_memmove(my_dest, src, 0);

    cr_assert_str_eq(my_ptr, ptr, "Got [%s]\nBut Expected [%s]\n", my_ptr, ptr);
}