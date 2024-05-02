section .data
    hello db 'Hello, World!', 10 ; 10 is the newline character

section .text
    global _start

_start:
    ; write the string to stdout
    mov rax, 1         ; syscall number for sys_write
    mov rdi, 1         ; file descriptor 1 (stdout)
    mov rsi, hello     ; pointer to the string
    mov rdx, 14        ; length of the string
    syscall            ; call kernel

    ; exit the program
    mov rax, 60        ; syscall number for sys_exit
    xor rdi, rdi       ; exit code 0
    syscall            ; call kernel
