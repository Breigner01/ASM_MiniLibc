BITS 64

SECTION .text

%ifdef UNIT_TEST

GLOBAL my_memset
my_memset:

%else

GLOBAL memset
memset:

%endif

loop:

    cmp rdx, 0
    je return
    dec rdx
    mov BYTE [rdi + rdx], sil
    jmp loop

return:
    mov rax, rdi
    ret
