/*
** EPITECH PROJECT, 2021
** B-ASM-400-PAR-4-1-asmminilibc-benjamin.reigner
** File description:
** test_strlen.c
*/

#include <string.h>
#include <criterion/criterion.h>
#include "tests.h"

Test(strlen, normal_string)
{
    char *str = "Hello World!";
    size_t nb = strlen(str);
    size_t my_nb = my_strlen(str);

    cr_assert_eq(my_nb, nb, "Got [%d]\nBut Expected [%d]\n", my_nb, nb);
}

Test(strlen, empty_string)
{
    char *str = "";
    size_t nb = strlen(str);
    size_t my_nb = my_strlen(str);

    cr_assert_eq(my_nb, nb, "Got [%d]\nBut Expected [%d]\n", my_nb, nb);
}