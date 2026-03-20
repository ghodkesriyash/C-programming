#include <stdio.h>
#include <math.h>

void main()
{
    int bnum, dnum = 0;
    printf("enter a binary no. \n");
    scanf("%d", &bnum);
    int count = 0;
    while(bnum > 0)
    {
        int digit = bnum % 10;
        dnum += digit * pow(2,count);
        bnum /= 10;
        count += 1;
    }
    printf("the decimal form of no. is %d",dnum);
}