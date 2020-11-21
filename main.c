//1.WAP to calculate simple interest
//2.formula: SI = P * R * T 
#include <stdio.h>

int main()
{
    //3.declare vaiables
    float P, R, T, SI;
    
    //4.think about variable meomery locations
    //5.user input values to variable
    printf("********************************\n");
    printf("calculate Simple interest\n");
    printf("enter the principal amount: ");
    scanf("%f",&P);
    printf("enter interest rate : ");
    scanf("%f",&R);
    printf("enter the year's: ");
    scanf("%f",&T);
    printf("*********************************\n");
    
    //6.calculate the simple interest
    
    SI = (P * R * T)/100;
    //7. dispaly output
    printf("simple interest is %f",SI);
    printf("\n**********************************");
    
}
