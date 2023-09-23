section .data
    hello db "Hello, Holberton",0   ; Null-terminated string to be printed

section .text
    global main

extern printf
main:
    push rbp
    mov rdi, hello                 ; Format string for printf
    call printf                    ; Call the printf function
    add rsp, 8                     ; Adjust the stack pointer
    pop rbp

    ret                            ; Return from main
