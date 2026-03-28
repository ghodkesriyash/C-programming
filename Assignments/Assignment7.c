#include <stdio.h>

struct Student {
    char name[50];
    int roll_number;
    int Math_marks;
    int english_marks;
    int science_marks;
};

int main() {
    struct Student students[50];
    int n, i;

    printf("Enter the no. of students: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Name          : ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll Number   : ");
        scanf("%d", &students[i].roll_number);
        printf("Math Marks    : ");
        scanf("%d", &students[i].Math_marks);
        printf("English Marks : ");
        scanf("%d", &students[i].english_marks);
        printf("Science Marks : ");
        scanf("%d", &students[i].science_marks);
    }

    printf("\n========== STUDENT RECORDS ==========\n");
    for (i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Name          : %s\n", students[i].name);
        printf("Roll Number   : %d\n", students[i].roll_number);
        printf("Math Marks    : %d\n", students[i].Math_marks);
        printf("English Marks : %d\n", students[i].english_marks);
        printf("Science Marks : %d\n", students[i].science_marks);
    }

    return 0;
}