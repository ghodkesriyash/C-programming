#include <stdio.h>

void main()
{
// Initialising variables and taking input from user
int num1, num2, choice, i, lcd, gcd;
printf("please enter two numbers \n");
scanf("%d",&num1);
scanf("%d",&num2);
printf("select a operation: \n 1 = greatest common divisor  \n 2 = lowest common divisor \n");
scanf("%d",&choice);

//Switch case
switch (choice)
{
case 1:
    gcd = 1;
        for (i= 2;i <= num1;i++){
            if ((num1 % i == 0 ) && (num2 % i == 0)){
                gcd = i;
            }
       
    }
    printf("the gcd for the two numbers is %d",gcd);
    break;

    case 2:
        lcd = 1;
            for (i= 2;i <= num1;i++){
                if ((num1 % i == 0 ) && (num2 % i == 0)){
                    lcd = i;
                    break;
                }
    }
    printf("the lcd for the two numbers is %d",lcd);     
    break;

default:
    printf("invalid choice");
    break;
}
}