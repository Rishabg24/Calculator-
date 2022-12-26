
#include <stdio.h>

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main()
{
    // Declare variables for the operands and the result
    double operand1, operand2, result;
    
    // Prompt the user for the operands
    printf("Enter the first operand: ");
    scanf("%lf", &operand1);
    
    printf("Enter the second operand: ");
    scanf("%lf", &operand2);
    
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
    
    // Prdouble the result
    printf("The result is: %lf\n", result);
    
    return 0;
}

// Function definitions
double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}
