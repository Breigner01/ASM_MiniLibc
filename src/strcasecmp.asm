BITS 64

SECTION .text

%ifdef UNIT_TEST

GLOBAL my_strcasecmp
my_strcasecmp:

%else

GLOBAL strcasecmp
strcasecmp:

%endif

    xor rcx, rcx

loop:

    mov al, BYTE [rdi + rcx]
    cmp al, 'A'
    jge is_first_upper
    jmp check_second_char

is_first_upper:
    cmp al, 'Z'
    jg check_second_char
    add al, 32
    jmp check_second_char

check_second_char:
    mov dl, BYTE [rsi + rcx]
    cmp dl, 'A'
    jge is_second_upper
    jmp compare

is_second_upper:
    cmp dl, 'Z'
    jg compare
    add dl, 32
    jmp compare

compare:
    inc rcx
    sub al, dl
    cmp al, 0
    je check_end_str
    jmp return

check_end_str:
    cmp dl, 0
    je return
    jmp loop

return:
    movsx rax, al
    ret
