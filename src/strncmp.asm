BITS 64

%ifdef UNIT_TEST

GLOBAL my_strncmp
my_strncmp:

%else

GLOBAL strncmp
strncmp:

%endif

xor rax, rax
xor rcx, rcx

loop:

    cmp rcx, rdx
    je return
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
