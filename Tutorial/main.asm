.section .data

user_name:
    .space 15   # Allocate space for user_name (15 bytes)
user_age:
    .long 0     # Allocate space for user_age (4 bytes), initialized to 0
is_admin:
    .byte 0     # Allocate space for is_admin (1 byte), initialized to 0 (false)
admin_name:
    .asciz "Sanjarbek"  # Null-terminated string for comparison

prompt_name:
    .asciz "Ismingizni kiriting: "
prompt_age:
    .asciz "Yoshingizni kiriting: "
welcome_admin:
    .asciz "Salom, admin\n"
welcome_user:
    .asciz "Salom, Xush kelibsiz %s\n"
age_error:
    .asciz "Kechirasiz, sizning yoshingiz yetarli emas!\n"

.section .text
.globl _start

_start:
    # Print prompt for user_name
    mov $prompt_name, %edi
    call printf

    # Read user_name
    mov $0, %eax  # Clear eax (zero out for safe scanf call)
    lea user_name, %rax  # Load address of user_name into rax
    mov $0, %esi  # Clear esi (no format arguments)
    call scanf

    # Print prompt for user_age
    mov $prompt_age, %edi
    call printf

    # Read user_age
    mov $0, %eax  # Clear eax again
    lea user_age, %rax  # Load address of user_age into rax
    mov $1, %esi  # Set esi to 1 (format argument)
    call scanf

    # Compare user_name with "Sanjarbek"
    lea admin_name, %rdi  # Load address of admin_name (constant "Sanjarbek") into rdi
    lea user_name, %rsi   # Load address of user_name into rsi
    call strcmp

    # Check if strcmp returned 0 (strings are equal)
    test %rax, %rax  # Test result of strcmp (rax should be 0 if equal)
    jnz not_admin    # Jump to not_admin if strings are not equal

    # Set is_admin to true (1)
    mov $1, is_admin

not_admin:
    # Compare user_age with 18
    mov user_age, %eax
    cmp $18, %eax
    jl underage    # Jump to underage if user_age < 18

    # Check if is_admin is true (1)
    cmp $1, is_admin
    jne print_user

    # Print welcome message for admin
    mov $welcome_admin, %edi
    call printf
    jmp end_program

print_user:
    # Print welcome message for user
    lea user_name, %rsi   # Load address of user_name for printing
    mov $welcome_user, %edi
    call printf
    jmp end_program

underage:
    # Print age error message
    mov $age_error, %edi
    call printf

end_program:
    # Exit the program
    mov $0, %edi
    call exit
