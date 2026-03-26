#include <stdio.h>

int main() {
    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    int even_count = 0, odd_count = 0;

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even[even_count++] = arr[i];
        else
            odd[odd_count++] = arr[i];
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < even_count; i++)
        printf("%d ", even[i]);

    printf("\nOdd numbers:  ");
    for (int i = 0; i < odd_count; i++)
        printf("%d ", odd[i]);

    printf("\n");
    return 0;
}


