BITS 64

SECTION .text

%ifdef UNIT_TEST

GLOBAL my_strstr
my_strstr:

%else

GLOBAL strstr
strstr:

%endif

    xor rax, rax
    xor rcx, rcx

loop:

    cmp BYTE [rsi + rcx], 0
    je return
    cmp BYTE [rdi + rcx], 0
    je not_found
    mov dl, BYTE [rdi + rcx]
    cmp dl, BYTE [rsi + rcx]
    je inc_rcx
    xor rcx, rcx
    inc rdi
    jmp loop

inc_rcx:
    inc rcx
    jmp loop

not_found:
    mov rax, 0
    ret

return:
    mov rax, rdi
    ret
