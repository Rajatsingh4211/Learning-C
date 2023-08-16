#include<stdio.h>
int main()
{
  int age; 
  printf("Enter your age\n");
  scanf("%d", &age);

  if (age <=80  && age >= 18)
  {
    printf("You are below 80 and above 18, you can drive\n"); 

  }
  else {

    printf ("You cannot drive\n");
  }
    return 0;
}