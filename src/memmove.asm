BITS 64

SECTION .text

%ifdef UNIT_TEST

EXTERN my_memcpy
GLOBAL my_memmove
my_memmove:

%else

EXTERN memcpy
GLOBAL memmove
memmove:

%endif

xor rcx, rcx

loop:
    cmp rdi, rsi
    je return
    cmp rdi, rsi
    jg cp_from_end
    jmp cp_from_start

cp_from_start:
    cmp rcx, rdx
    je return
    mov r8b, BYTE [rsi + rcx]
    mov BYTE [rdi + rcx], r8b
    inc rcx
    jmp cp_from_start

cp_from_end:
    %ifdef UNIT_TEST
    call my_memcpy
    %else
    call memcpy wrt ..plt
    %endif
    ret

return:
    mov rdi, rax
    ret
