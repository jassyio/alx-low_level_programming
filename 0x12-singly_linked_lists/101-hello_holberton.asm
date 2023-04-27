section .data
    hello: db 'Hello, Holberton', 10, 0 ; null-terminated string with newline

section .text
    global main
    extern printf

main:
    push hello  ; push the address of the string onto the stack
    mov rdi, format ; move the format string to rdi
    xor eax, eax   ; zero out eax (return value of printf)
    call printf    ; call printf with the address of the string as argument
    xor eax, eax   ; zero out eax (return value of main)
    ret

section .data
    format: db '%s', 10, 0 ; printf format string with newline

