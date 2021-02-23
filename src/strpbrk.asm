BITS 64

SECTION .text

%ifdef UNIT_TEST

EXTERN my_strchr
GLOBAL my_strpbrk
my_strpbrk:

%else

EXTERN strchr
GLOBAL strpbrk
strpbrk:

%endif

    xor rax, rax
    xor rcx, rcx
    mov r8, rdi
    mov r9, rsi

loop:

    mov rdi, r9
    mov sil, BYTE [r8]
    cmp sil, 0
    je not_found
    %ifdef UNIT_TEST
    call my_strchr
    %else
    call strchr wrt ..plt
    %endif
    cmp rax, 0
    jne return
    inc r8
    jmp loop

not_found:
    mov rax, 0
    ret

return:
    mov rax, r8
    ret
