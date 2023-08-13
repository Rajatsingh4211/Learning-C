#include<stdio.h>
int main ()
{ 
    int length, breadth;
    printf("Enter the Length of the rectangle\n");
    scanf("%d", &length);


     printf("Enter the breadth of the rectangle\n");
    scanf("%d", &breadth);
   
    printf("The value of the rectangle is %d", length*breadth);
return 0;
}