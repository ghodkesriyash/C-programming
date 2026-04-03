#include <stdio.h>
#include <string.h>

int i;

struct employee {
    char employee_name[50];
    char employee_designation[50];
    char employee_gender[10];
    int date_of_join;
    int employee_salary;
};

//function to count no. of males and females
void gender_count(struct employee s[], int n) {
    int males = 0, females = 0;
    for (i = 0; i < n; i++) {
        if (strcmp(s[i].employee_gender, "male") == 0)
            males += 1;
        else
            females += 1;
    }
    printf("The no. of males are %d\n", males);
    printf("The no. of females are %d\n", females);
}

//function to display employees with salary greater than 10000
void high_salary(struct employee s[], int n) {
    printf("\n===== Employees with Salary > 10000 =====\n");
    for (i = 0; i < n; i++) {
        if (s[i].employee_salary > 10000) {
            printf("Name       : %s\n", s[i].employee_name);
            printf("Designation: %s\n", s[i].employee_designation);
            printf("Salary     : %d\n\n", s[i].employee_salary);
        }
    }
}

//function to display employees with designation 'Asst Manager'
void asst_managers(struct employee s[], int n) {
    printf("\n===== Employees with Designation: Asst Manager =====\n");
    for (i = 0; i < n; i++) {
        if (strcmp(s[i].employee_designation, "Asst Manager") == 0) {
            printf("Name  : %s\n", s[i].employee_name);
            printf("Gender: %s\n", s[i].employee_gender);
            printf("Salary: %d\n\n", s[i].employee_salary);
        }
    }
}

int main() {
    int employees;
    printf("Enter the no. of employees: ");
    scanf("%d", &employees);

    struct employee E[employees];

    for (i = 0; i < employees; i++) {
        printf("\nEnter employee's name: ");
        scanf("%s", E[i].employee_name);

        printf("Enter employee's designation: ");
        scanf("%s", E[i].employee_designation);

        printf("Enter employee's gender (male/female): ");
        scanf("%s", E[i].employee_gender);

        printf("Enter employee's date of joining: ");
        scanf("%d", &E[i].date_of_join);

        printf("Enter employee's salary: ");
        scanf("%d", &E[i].employee_salary);
    }

    printf("\n=========== DATA ==================\n");
    printf("The total no. of employees are %d\n", employees);
    gender_count(E, employees);    //gender count
    high_salary(E, employees);     //employees with salary > 10000
    asst_managers(E, employees);   //employees with designation Asst Manager

    return 0;
}