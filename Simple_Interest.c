#include<stdio.h>
int main()
{
 int principal, rate, years;
 int SimpleInterest; 



 printf("Enter the value of principal\n");
 scanf("%d", &principal);

printf("Enter the value of rate\n");
 scanf("%d", &rate); 

printf("Enter the number of year\n");
 scanf("%d", &years); 

SimpleInterest = (principal * rate * years)/100;

printf ("The value of SI is %d", SimpleInterest);
    return 0;
}
