#include <stdio.h>
#include <math.h>
// math.h is used for the math functions like sin, cos, tan, etc.

// listing out the functions for arithmatic operations
void calcAddition()
{
    printf("Enter two numbers: ");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a + b;
    printf("The sum is %d\n", result);
}

void calcSubtraction()
{
    printf("Enter two numbers: ");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a - b;
    printf("The difference is %d\n", result);
}

void calcMultiplication()
{
    printf("Enter two numbers: ");
    int a, b;
    scanf("%d%d", &a, &b);
    int ans = a * b;
    printf("The product is %d\n", ans);
}

void calcDivision()
{
    int a, b;
    printf("Enter the two numbers Dividend then Divisor: ");
    scanf("%d %d", &a, &b);
    printf("The Quotient is %d", (a / b));
}
void calcExpo()
{
    float num, result;
    int exp;
    printf("Enter the number and its exponent: ");
    scanf("%f %d", &num, &exp);
    result = pow(num, exp);
    printf("%f raised to %d power is %f", num, exp, result);
}
void calcSine()
{
    printf("Enter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);
    // degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = sin(radians);
    printf("The sine value is %f", answer);
}

void calcCos()
{
    printf("Enter the angle in degrees: ");
    float angle;
    scanf("%d", &angle);
    //  degrees to radian
    double radian = angle / 180.0 * 3.14;
    double answer = cos(radian);

    printf("The cos value is %f", answer);
}

void calcTangent()
{
    double tangentValue, inputValue;
    printf("Please enter the value to calculate tangent value: ");
    scanf("%lf", &inputValue);
    tangentValue = tan(inputValue);
    printf("tangent value is %lf\n", inputValue, tangentValue);
}
void calcfloor()
{
    float num;
    printf("Enter the number: ");
    scanf("%f", &num);
    printf("Floor Value: %d", (int)floor(num));
}

void calcCeil()
{
    float num;
    printf("Enter the number: ");
    scanf("%f", &num);
    printf("Ceil Value: %d", (int)ceil(num));
}

void calcRound()
{
    float num;
    printf("Enter the number: ");
    scanf("%f", &num);
    printf("Round Value: %d", (int)round(num));
}

void AbsoluteValue()
{
    printf("Enter an integer to find Absolute Value: ");
    int n;
    scanf("%d", &n);
    if (n < 0)
    {
        n *= (-1);
    }
    printf("The Absolute Value of the given integer is: %d", n);
}

// main program
int main()
{
    int choice;
    printf(
        "Made by Soham Datta RA2111031010089\n"
        "This calculator is cool\n\n"
        "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n"
        "5. Exponentiation\n6. Sine\n7. Cosine\n8. Tangent\n9. Floor\n"
        "10. Ceiling\n11. Round\n12. Absolute value\n\n"
        "Enter your choice: ");

    scanf("%d", &choice);
    // calling the functions according to the choice
    switch (choice)
    {
    case 1:
        calcAddition();
        break;
    case 2:
        calcSubtraction();
        break;
    case 3:
        calcMultiplication();
        break;
    case 4:
        calcDivision();
        break;
    case 5:
        calcExpo();
        break;
    case 6:
        calcSine();
        break;
    case 7:
        calcCos();
        break;
    case 8:
        calcTangent();
        break;
    case 9:
        calcfloor();
        break;
    case 10:
        calcCeil();
        break;
    case 11:
        calcRound();
        break;
    case 12:
        AbsoluteValue();
        break;
    default:
        // for invalid input
        printf("Enter a valid choice!");
    }
    return 0;
}