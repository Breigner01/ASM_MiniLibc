BITS 64

SECTION .text

%ifdef UNIT_TEST

EXTERN my_strchr
GLOBAL my_strcspn
my_strcspn:

%else

EXTERN strchr
GLOBAL strcspn
strcspn:

%endif

    xor rax, rax
    xor rcx, rcx
    mov r8, rdi
    mov r9, rsi

loop:

    mov rdi, r9
    movsx rsi, BYTE [r8]
    cmp rsi, 0
    je return
    %ifdef UNIT_TEST
    call my_strchr
    %else
    call strchr wrt ..plt
    %endif
    cmp rax, 0
    jne return
    inc rcx
    inc r8
    jmp loop

return:
    mov rax, rcx
    ret
