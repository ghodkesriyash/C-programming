#include <stdio.h>

// Using arrays in c launguage 
/*void main()
{
int a[10],i;
printf("enter 10 elements \n");
for (i = 0;i <= 9;i++)
{
    scanf("%d",&a[i]);
}
for (int i = 0; i <= 9; i++) {
        printf("%d ", a[i]);
    }
}*/

void main()
{
int a[3],b[3],c[3],i;
printf("enter the array a \n");
for (i = 0;i <=2;i++)
{
scanf("%d",&a[i]);
}
printf("enter the array b \n");
for (i = 0;i <=2;i++)
{
scanf("%d",&b[i]);
}
for (i =0;i <= 3;i++)
{
c[i] = a[i] + b[i];
}
printf("the final array is \n");
for (i =0;i <= 2;i++)
{
printf("%d \n",c[i]);
}
}
