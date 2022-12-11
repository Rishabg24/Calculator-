#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main()
{
    // Declare variables for the operands and the result
    int operand1, operand2, result;
    
    // Prompt the user for the operands
    printf("Enter the first operand: ");
    scanf("%d", &operand1);
    
    printf("Enter the second operand: ");
    scanf("%d", &operand2);
    
    // Prompt the user for the operation
    printf("Enter the operation (+, -, *, /): ");
    char operation;
    scanf(" %c", &operation);
    
    // Perform the operation and store the result
    switch (operation)
    {
        case '+':
            result = add(operand1, operand2);
            break;
        case '-':
            result = subtract(operand1, operand2);
            break;
        case '*':
            result = multiply(operand1, operand2);
            break;
        case '/':
            result = divide(operand1, operand2);
            break;
        default:
            printf("Invalid operation.\n");
            return 1;
    }
    
    // Print the result
    printf("The result is: %d\n", result);
    
    return 0;
}

// Function definitions
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}