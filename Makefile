##
## EPITECH PROJECT, 2021
## B-ASM-400-PAR-4-1-asmminilibc-benjamin.reigner
## File description:
## Makefile
##

MAKEFLAGS	=	--no-print-directory

AS			=	nasm

CC			?=	gcc

RM			?=	rm -f

ASFLAGS		=	-f elf64

CFLAGS		=	-std=gnu11 -Wall -Wextra -O0

CPPFLAGS	=	-iquote include

NAME		=	libasm.so

SRC			+=	src/strlen.asm
SRC			+=	src/strchr.asm
SRC			+=	src/rindex.asm
SRC			+=	src/strcmp.asm
SRC			+=	src/strncmp.asm
SRC			+=	src/memset.asm
SRC			+=	src/memcpy.asm
SRC			+=	src/strcspn.asm
SRC			+=	src/strpbrk.asm
SRC			+=	src/strstr.asm
SRC			+=	src/strcasecmp.asm
SRC			+=	src/memmove.asm

OBJ			=	$(SRC:.asm=.o)

TSRC		+=

TOBJ		=	$(TSRC:.c=.o)

ifdef DEBUG
	CFLAGS	+=	-ggdb3
	ASFLAGS	+=	-g
endif

%.o: %.asm
	$(AS) $(ASFLAGS) $<

all:	$(NAME)

$(NAME):	$(OBJ)
	ld -shared -fPIC $(OBJ) -o $(NAME)

tests_run:	LDLIBS	+=	-lcriterion
tests_run: 	ASFLAGS	+=	-D UNIT_TEST=1
tests_run:	$(OBJ) $(TOBJ)
	$(CC) -o unit_test $(OBJ) $(TOBJ) $(LDLIBS)

clean:
	$(RM) $(OBJ)
	$(RM) $(TOBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) unit_test

re: fclean all

.PHONY: all tests_run clean fclean re
