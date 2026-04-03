#include <stdio.h>

// swap WITHOUT pointers (call by value) - original values won't change
void swap_without_pointers(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping without pointers:\n");
    printf("a = %d b = %d\n", a, b);
}

// swap WITH pointers (call by reference) - original values will change
void swap_with_pointers(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("\nAfter swapping with pointers:\n");
    printf("x = %d y = %d\n", *x, *y);
}

int main() {
    int a, b, x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;  // copy values for pointer version
    y = b;

    swap_without_pointers(a, b);  // call by value
    swap_with_pointers(&x, &y);   // call by reference

    return 0;
}