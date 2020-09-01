.section .text
.global factorial
factorial:
    push %ebp
    mov %esp, %ebp
    mov 8(%ebp), %eax
    or %eax, %eax
    jnz recurse
    mov $1, %eax
    jmp out

recurse:
    dec %eax
    push %eax
    call factorial
    add $4, %esp
    mov 8(%ebp), %edx
    imul %edx, %eax

out:
    mov %ebp, %esp
    pop %ebp
    ret