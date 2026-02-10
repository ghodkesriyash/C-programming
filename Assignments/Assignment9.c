#include <stdio.h>

//An armstrong number is a number where the sum of cubes of its individual digits is equal to the number itself

void main () {
    // Program to check armstrong number
    int num, temp, sum;

    printf("Enter a number: \n ");
    scanf("%d", &num);//taking input from user

    temp = num;
    sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
}