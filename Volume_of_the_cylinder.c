#include <stdio.h>
int main()
{
    int height, radius;
    float volume, pi;

    printf("Enter the value of radius\n");
    scanf("%d", &radius);

    printf("Enter the value of height\n");
    scanf("%d", &height);

    printf("Enter the value of pi\n");
    scanf("%f", &pi);

    printf("The volume of the cylinder is %f\n", pi * radius * radius * height);

    return 0;
}
