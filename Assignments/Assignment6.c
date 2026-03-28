#include <stdio.h>

// 1) factorial with recursion
int factorial(int x){
    if(x == 0 || x == 1){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}

// 2) factorial without recursion
int main(){
int i, num, fact = 1;
printf("enter a number to calculate the factorial: \n");
scanf("%d", &num);

//calculate the factorial using while loop
for(i =1; i <= num;i++){
    fact *= i;
}

printf("the factorial of %d is %d \n",num, fact);
printf("the factorial of %d is %d \n",num, factorial(num));
}

