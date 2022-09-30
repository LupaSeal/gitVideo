#include <stdio.h>

int main(void)
{

    // Prompt user for the first number
    double first_number;
    printf("first_number: ");fflush(stdout);
    scanf("%lf", &first_number);
    
    //Prompt user for the 2nd number
    double second_number;
    printf("second_number: ");fflush(stdout);
    scanf("%lf", &second_number);

    int sum;
    sum = first_number + second_number;
    printf("the sum amount of first and second number is %4.1lf", first_number + second_number);

}