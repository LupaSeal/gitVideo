#include <stdio.h>

//calculate circumference of a circle and the area also
int main(void)
{
    //first we declare the variables
    const double PI = 3.14159; //so nobody will be able to change this
    double radius;
    double circumference;
    double area;

    //prompt the user to enter a radius
    printf("\nEnter the radius of a circle: ");fflush(stdout);//\n is new line
    //use scanf to accept some user input
    scanf("%lf", &radius);//list in the '' the format specifier of double which is ls then the address of the operator

    //add the formula to our variable circumference
    circumference = 2 * PI * radius;
    //add the formula to calculate the area of the circle
    area = PI * radius * radius;

    //display our circumference with printf
    printf("\ncircumference: %lf", circumference);fflush(stdout);
    printf("\narea: %lf", area);

    return 0;
}
