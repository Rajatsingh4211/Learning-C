
// Question :- Calculate the income tax paid by the employee to the government as per the slabs mentioned below-
//    Income slab                  tax
//    2.5L - 5L                     5%
//    5L - 10L                      20%
//    Above 10L                     30%

#include <stdio.h>
int main()
{
    float tax = 0; 
    float income;
    printf("Enter your income\n");
    scanf("%f", &income);
 
    if (income >= 250000 && income <= 500000)
    {

        tax = tax + 0.5 * (income-250000);
    }

    if (income >= 500000 && income <= 1000000)
    {

        tax = tax + 0.20 * (income - 500000);
    }

    if (income >= 1000000)
    {

        tax = tax + 0.30 * (income-1000000);
    }
     printf("Your net income to be paid is %f/n", tax);
    return 0;
}