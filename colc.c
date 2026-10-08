#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 0;
    char opcode = '+';

    printf("Welcome to the calculator program\n");
    printf("Please enter first number: ");
    scanf("%d", &a);

    printf("Please enter the second number: ");
    scanf("%d", &b);

    printf("Please enter the operation code (+, -, *, /): ");
    scanf(" %c", &opcode);

    if (opcode == '+') {
        printf("Result = %d\n", a + b);
    } else if (opcode == '-') {
        printf("Result = %d\n", a - b);
    } else if (opcode == '*') {
        printf("Result = %d\n", a * b);
    } else if (opcode == '/') {
        if (b != 0) {
            printf("Result = %d\n", a / b);
        } else {
            printf("Cannot divide by zero\n");
        }
    } else {
        printf("Invalid operation\n");
    }

    return 0;
}

