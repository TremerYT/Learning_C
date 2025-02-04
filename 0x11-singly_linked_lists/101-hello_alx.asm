section .data
    message db "Hello, ALX", 10, 0  ; Define the message with a newline and null terminator

section .text
    global main                  ; Entry point for the linker
    extern printf                ; Declare printf from the C standard library

main:
    ; Call printf
    mov rdi, message             ; First argument: pointer to format string
    call printf                  ; Call printf function

    ; Exit program
    mov eax, 0                   ; Return 0 (success)
    ret                          ; Return from main
