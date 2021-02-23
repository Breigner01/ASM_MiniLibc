BITS 64

SECTION .text

%ifdef UNIT_TEST

GLOBAL my_strchr
my_strchr:

%else

GLOBAL strchr
strchr:

%endif

loop:

    cmp BYTE [rdi], sil
    je return
    cmp BYTE [rdi], 0
    je not_found
    inc rdi
    jmp loop

return:
    mov rax, rdi
    ret

not_found:
    mov rax, 0
    ret
