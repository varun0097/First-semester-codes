#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (op)
    {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (num2 != 0.0f)
            {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            }
            else
            {
                printf("Error: Division by zero is not possible.\n");
            }
            break;

        case '%':
            if (num2 != 0.0f)
            {
                result = num1 - ((int)(num1 / num2) * num2);
                printf("Remainder = %.2f\n", result);
            }
            else
            {
                printf("Error: Modulus by zero is not possible.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
