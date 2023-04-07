#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// function declarations
void addition();
void subtraction();
void multiplication();
void division();
void sq();
void squareroot();
void exit();
double calcAvg();

int main()
{
    double avg;
    int opt;
    do
    {
        printf (" Select an operation to perform the calculation in C Calculator: ");
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Square Root \n 7 CalcAvg \t \t 8 Exit \n");

        scanf ("%d", &opt);

        switch (opt)
        {
            case 1:
                addition();
                break;

            case 2:
                subtraction();
                break;

            case 3:
                multiplication();
                break;

            case 4:
                division();
                break;

            case 5:
                sq();
                break;

            case 6:
                squareroot();
                break;

            case 7:
                avg=calcAvg();
                printf("Average is: %.3lf", avg);

            case 8:
                exit(0);
                break;

            default:
                printf(" Please try again!! ");
                break;
        }
        printf (" \n \n --------------------- \n ");
    } while (opt != 7);

    return 0;
}

void addition()
{
    int num1, num2, result;
    printf (" The first number is: ");
    scanf ("  %d", &num1);
    printf (" The second number is: ");
    scanf ("  %d", &num2);
    result = num1 + num2;
    printf (" The addition of %d + %d is: %d", num1, num2, result);
}

void subtraction()
{
    int num1, num2, result;
    printf (" The first number is: ");
    scanf ("  %d", &num1);
    printf (" The second number is: ");
    scanf ("  %d", &num2);
    result = num1 - num2;
    printf (" The subtraction of %d - %d is: %d", num1, num2, result);
}

void multiplication()
{
    int num1, num2, result;
    printf (" The first number is: ");
    scanf ("  %d", &num1);
    printf (" The second number is: ");
    scanf ("  %d", &num2);
    result = num1 * num2;
    printf (" The multiply of %d * %d is: %d", num1, num2, result);
}

void division()
{
    int num1, num2, result;
    printf (" The first number is: ");
    scanf ("  %d", &num1);
    printf (" The second number is: ");
    scanf ("  %d", &num2);

    if (num2 == 0)
    {
        printf (" \n You cannot divide by zero. Please enter another value ");
        scanf ("%d", &num2);
    }
    result = num1 / num2;
    printf (" \n The division of %d / %d is: %d", num1, num2, result);
}

void sq()
{
    int num1, result;
    printf (" Enter a number to get the Square: ");
    scanf ("  %d", &num1);

    result = num1 * num1;
    printf (" \n The Square of %d is: %d", num1, result);
}

void squareroot()
{
    float result;
    int num1;
    printf (" Enter a number to get the Square Root: ");
    scanf ("  %d", &num1);

    result = sqrt(num1);
    printf (" \n The Square Root of %d is: %f", num1, result);
}

double calcAvg()
{
    double avg;
    int cnt=0;
    char num;
    int sum=0;
    for(int i=1; 1; i++){
        printf("\n");
        printf("Enter the %d number(enter 's' to stop): ", cnt);
        scanf("%c", &num);
        scanf("%c", &num);
        if(num == 's'){
            break;
        }
        int number = (int)num-48;
        sum += number;
        cnt++;
    }
    return (double)sum/cnt;
}
