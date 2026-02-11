#include <stdio.h>
#include <string.h>

void main()
{
int physics,maths,chemistry,english,stats,status,avg ;
char grade[30];

printf("Please enter your marks for evaluation \n");//Taking marks as input from user 
printf("English : ");
scanf("%d", &english);

printf("Statistics : ");
scanf("%d", &stats);

printf("Maths : ");
scanf("%d", &maths);

printf("Chemistry : ");
scanf("%d", &chemistry);

printf("Physics : ");
scanf("%d", &physics);

//passing criteria 
if ((maths > 39) && (english > 39) && (chemistry > 39) && (physics > 39) && (stats > 39))
{
    status = 1;
    printf("You have passed your examination \n");
}
else
{
    status = 0;
    printf("You have failed your examination");
}

//Determination of grade of student in case of pass
if (status == 1)
{
    avg = (maths + english + stats + chemistry + physics) / 5;
}

//grade allocation 
if (avg >= 75){
    strcpy(grade, "Distinction");
}else if (avg >= 60){
    strcpy(grade, "First Division");
}else if ((50 <= avg) < 60){
    strcpy(grade, "Second Division");
}else if ((40 <= avg)< 50){
    strcpy(grade, "Third Division");
}else {
    strcpy(grade, "fail");
}

printf("your grade is %s",grade);//Print the final rsult
}