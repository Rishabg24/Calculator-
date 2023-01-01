
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Function prototypes
double Add(double a, double b);
double Subtract(double a, double b);
double Multiply(double a, double b);
double Divide(double a, double b);
double Exponent(double a, double b);


int main()
{
     // Declare variables 
    double  operand1, operand2, result, valid;
    char operation;

    // Prompt the user for the operands
    printf("Enter the first operand: ");
    scanf("%lf", &operand1);
    printf("Enter the second operand: ");
    scanf("%lf", &operand2);
    
    // Prompt the user for the operation
    printf("Enter the operation (+, -, *, /, ^): ");
    scanf(" %c", &operation);

    
    // Perform the operation and store the result
    switch (operation)
    {
        case '+':
            result = Add(operand1, operand2);
            break;
        case '-':
            result = Subtract(operand1, operand2);
            break;
        case '*':
            result = Multiply(operand1, operand2);
            break;
        case '/':
            result = Divide(operand1, operand2);
            break;
        case '^':
            result = Exponent(operand1, operand2);
            break;
        default:
            printf("Invalid operation.\n");
            return 1;
            break;
    }
    
    // Print the result
    printf("The result is: %lf\n", result);
    
}


// Function definitions
double Add(double a, double b)
{
    return a + b;
}

double Subtract(double a, double b)
{
    return a - b;
}

double Multiply(double a, double b)
{
    return a * b;
}

double Divide(double a, double b)
{
    return a / b;
}

double Exponent(double a, double b)
{
    return pow(a,b);
}
