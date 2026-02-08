#include <stdio.h>

int main()
{
int num,i ;
//intialised variables for loop and preferred no.
printf("enter the prefered number: \n");
scanf("%d",&num);//taking input for the preferred no.
printf("the table for %d is : \n",num);
for (i=1;i <= 10;i++)
//iterative loop for printing the table 
{
    printf("%d x %d = %d \n",num,i,num*i);//multiple addressing
}
return 0;
}