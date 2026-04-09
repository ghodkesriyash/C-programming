#include <stdio.h>

struct student
{
    char name[50];
    int roll_number;
    int Math_marks;
    int Science_marks;
    int English_marks;
};

int main(){
    printf("enter the no. of students \n");
    int n;
    scanf("%d", &n);
    
    //Creating structure array for n students
    struct student students[n];

    //Taking input for each student
    int i;
    for (i = 0; i < n; i++) {
        printf("\n=== Student %d ===\n", i + 1);
        printf("Name          : ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll Number   : ");
        scanf("%d", &students[i].roll_number);
        printf("Math Marks    : ");
        scanf("%d", &students[i].Math_marks);
        printf("English Marks : ");
        scanf("%d", &students[i].English_marks);
        printf("Science Marks : ");
        scanf("%d", &students[i].Science_marks);
    }

    
        //displaying student records along with percentage
    printf("\n---------- STUDENT RECORDS ----------\n");
    for (i = 0; i < n; i++) {
        printf("\n=== Student %d ===\n", i + 1);
        printf("Name          : %s\n", students[i].name);
        printf("Roll Number   : %d\n", students[i].roll_number);
        printf("Math Marks    : %d\n", students[i].Math_marks);
        printf("English Marks : %d\n", students[i].English_marks);
        printf("Science Marks : %d\n", students[i].Science_marks);
        int total_marks = students[i].Math_marks + students[i].English_marks + students[i].Science_marks;
        float percentage = (total_marks / 300.0) * 100;
        printf("Percentage    : %.2f\n", percentage); 
        }

        return 0;
}