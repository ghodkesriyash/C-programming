#include <stdio.h>
#define MAX 10

int main() {
    int choice;
    printf("Matrix Operations:\n1. Addition\n2. Saddle Point\n3. Inverse (2x2)\n4. Magic Square\nEnter choice: ");
    scanf("%d", &choice);

    // 1. ADDITION
    if (choice == 1) {
        int a[MAX][MAX], b[MAX][MAX], r, c;
        printf("Enter rows and cols: ");
        scanf("%d %d", &r, &c);
        printf("Enter Matrix A:\n");
        for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
        printf("Enter Matrix B:\n");
        for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &b[i][j]);
        printf("Result:\n");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) printf("%d ", a[i][j] + b[i][j]);
            printf("\n");
        }
    }

    // 2. SADDLE POINT
    else if (choice == 2) {
        int a[MAX][MAX], r, c;
        printf("Enter rows and cols: ");
        scanf("%d %d", &r, &c);
        printf("Enter Matrix:\n");
        for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
        int found = 0;
        for (int i = 0; i < r; i++) {
            int minVal = a[i][0], minCol = 0;
            for (int j = 1; j < c; j++)
                if (a[i][j] < minVal) { minVal = a[i][j]; minCol = j; }
            int isMax = 1;
            for (int k = 0; k < r; k++)
                if (a[k][minCol] > minVal) { isMax = 0; break; }
            if (isMax) { printf("Saddle Point: %d at (%d, %d)\n", minVal, i, minCol); found = 1; }
        }
        if (!found) printf("No Saddle Point found.\n");
    }

    // 3. INVERSE (2x2)
    else if (choice == 3) {
        float a[2][2];
        printf("Enter 2x2 matrix:\n");
        for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) scanf("%f", &a[i][j]);
        float det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
        if (det == 0) printf("Singular matrix, inverse doesn't exist.\n");
        else {
            printf("Inverse:\n");
            printf("%.2f %.2f\n",  a[1][1]/det, -a[0][1]/det);
            printf("%.2f %.2f\n", -a[1][0]/det,  a[0][0]/det);
        }
    }

    // 4. MAGIC SQUARE
    else if (choice == 4) {
        int m[MAX][MAX] = {0}, n;
        printf("Enter odd order: ");
        scanf("%d", &n);
        if (n % 2 == 0) printf("Only odd order supported.\n");
        else {
            int i = 0, j = n / 2;
            for (int num = 1; num <= n * n; num++) {
                m[i][j] = num;
                int ni = (i - 1 + n) % n, nj = (j + 1) % n;
                if (m[ni][nj]) { ni = (i + 1) % n; nj = j; }
                i = ni; j = nj;
            }
            printf("Magic Square:\n");
            for (int r = 0; r < n; r++) {
                for (int c = 0; c < n; c++) printf("%4d", m[r][c]);
                printf("\n");
            }
        }
    }

    return 0;
}