BITS 64

SECTION .text

%ifdef UNIT_TEST

GLOBAL my_strcmp
my_strcmp:

%else

GLOBAL strcmp
strcmp:

%endif

    xor rax, rax
    xor rcx, rcx

loop:

    mov al, BYTE [rdi + rcx]
    sub al, BYTE [rsi + rcx]
    cmp al, 0
    jne return
    cmp BYTE [rdi + rcx], 0
    je return
    inc rcx
    jmp loop

return:
    movsx rax, al
    ret
