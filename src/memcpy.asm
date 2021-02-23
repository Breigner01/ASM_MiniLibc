BITS 64

SECTION .text

%ifdef UNIT_TEST

GLOBAL my_memcpy
my_memcpy:

%else

GLOBAL memcpy
memcpy:

%endif

loop:

    cmp rdx, 0
    je return
    dec rdx
    mov cl, BYTE [rsi + rdx]
    mov BYTE [rdi + rdx], cl
    jmp loop

return:
    mov rax, rdi
    ret
