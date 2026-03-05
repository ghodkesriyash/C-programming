#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float physics;
    float maths;
    float chemistry;
    float percentage;
};

int main() {
    struct Student s[3];
    int i;

    // Accept data for 3 students
    for (i = 0; i < 3; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);

        printf("Name       : ");
        scanf(" %[^\n]", s[i].name);

        printf("Roll No    : ");
        scanf("%d", &s[i].rollNo);

        printf("Physics    : ");
        scanf("%f", &s[i].physics);

        printf("Maths      : ");
        scanf("%f", &s[i].maths);

        printf("Chemistry  : ");
        scanf("%f", &s[i].chemistry);

        // Calculate percentage out of 300
        s[i].percentage = (s[i].physics + s[i].maths + s[i].chemistry) / 300.0 * 100;
    }

    // Display results
    printf("\n\n========================================");
    printf("  STUDENT RESULTS");
    printf("========================================\n");

    for (i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("  Name        : %s\n", s[i].name);
        printf("  Roll No     : %d\n", s[i].rollNo);
        printf("  Physics     : %.2f\n", s[i].physics);
        printf("  Maths       : %.2f\n", s[i].maths);
        printf("  Chemistry   : %.2f\n", s[i].chemistry);
        printf("  Percentage  : %.2f%%\n", s[i].percentage);
    }

    return 0;
}