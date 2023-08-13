#include <stdio.h>
int main()
{
    int radius;
    float pi;

    printf("What is the value of radius of your circle\n");
    scanf("%d", &radius); 

    printf("What is the value of pi of your circle\n");
    scanf("%f", &pi);

    printf("The value of your circle is %f", pi * radius * radius);

    return 0;
}