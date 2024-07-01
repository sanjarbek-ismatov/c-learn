section .data
    hello db 'Hello, World!',0

section .text
    global _start

_start:
    ; Write "Hello, World!" to stdout
    mov rax, 1          ; sys_write
    mov rdi, 1          ; file descriptor (stdout)
    mov rsi, hello      ; address of string to output
    mov rdx, 13         ; number of bytes
    syscall

    ; Exit program
    mov rax, 60         ; sys_exit
    xor rdi, rdi        ; exit code 0
    syscall
