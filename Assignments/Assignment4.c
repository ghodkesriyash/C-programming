#include <stdio.h>
/*
We take the salary as input from the user
HRA is given that is 10% of basic pay
TA is also given that is 5% of basic pay
Professional tax is 2% of basic pay
*/
void main()
{
int BP,HRA,TA,PT,net_salary ;
//take basic pay as input
printf("Please enter basic salary: \n");
scanf("%d",&BP);
// calculate HRA
HRA = BP * .1;
//calcualte TA
TA = BP * 0.05;
//calculate PT
PT = BP * 0.02;
//finally display net salary
net_salary = BP + HRA + TA - PT;
printf("The net salary is: %d",net_salary);
}