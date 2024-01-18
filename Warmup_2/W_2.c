#include <stdio.h>

double main(void){
    double num1;
    double num2;
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    double sum = (num1 + num2);
    double diff = (num1 - num2);
    double pro = (num1 * num2);
    double quo = (num1/num2);
    printf("Sum: %lf\n", sum);
    printf("Difference: %lf\n", diff);
    printf("Product: %lf\n", pro);
    printf("Quotient: %lf\n", quo);
}

//Guidence for this Warmup came from the C Programming Handbook from FreeCodeCamp
// Link to Handbook: https://www.freecodecamp.org/news/the-c-programming-handbook-for-beginners/