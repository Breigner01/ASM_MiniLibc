BITS 64

SECTION .text

%ifdef UNIT_TEST

GLOBAL my_strlen
my_strlen:

%else

GLOBAL strlen
strlen:

%endif

    xor rax, rax

loop:

    cmp BYTE [rdi + rax], 0
    je  return
    inc rax
    jmp loop

return:
    ret
