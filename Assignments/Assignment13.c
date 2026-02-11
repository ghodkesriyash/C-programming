#include <stdio.h>

void main () {
    // Program to rpint reverse of the given number
    int num, temp;

    printf("Enter a number: \n ");
    scanf("%d", &num); // taking number as input from user

    while (num > 0) { // iterating thrugh the number 
        int digit = num % 10;
        printf("%d",digit);//printing the result 
        num /= 10;

    }
}