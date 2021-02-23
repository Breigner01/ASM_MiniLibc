BITS 64

SECTION .text

%ifdef UNIT_TEST

GLOBAL my_rindex
my_rindex:

%else

GLOBAL rindex
rindex:

%endif

    xor rax, rax

loop:

    cmp BYTE [rdi], sil
    je equal
    cmp BYTE[rdi], 0
    je return
    inc rdi
    jmp loop

equal:
    mov rax, rdi
    inc rdi
    jmp loop

return:
    ret
