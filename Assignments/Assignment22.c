#include <stdio.h>
#include <string.h>

//writing a menu driven program to perform string operation tht are built in the string library

void main(){
int choice;
char str1[50],str2[50];

printf("select the operation to be performed:");
printf("choices \n1 : calculate the length of string \n2 : comparision of two strings \n3 : copy and paste of string \n4 : catenation of two strings \n");
scanf("%d", &choice);

switch(choice){
    case 1:
        //length of string
        printf("Enter string\n");
        scanf("%s",str1);
        printf("the length of  string is %ld",strlen(str1));
        break;
    
    case 2:
        //comparision of two strings
        printf("enter the strings to compare\n");
        printf("string 1: \n");
        scanf("%s", str1);
        printf("string 2: \n");
        scanf("%s", str2);
        printf("the ouput for the comparision of the abve two strings is %d",strcmp(str1,str2));
        break;

    case 3:
        //copy of string
        printf("enter a string to be copied\n");
        scanf("%s", str1);
        strcpy(str2,str1);
        printf("the string has been copied in str2 that is %s",str2);
        break;
    
    case 4:
        //concatenation of two strings 
        printf("print both the strings\n");
        printf("string 1: \n");
        scanf("%s", str1);
        printf("string 2: \n");
        scanf("%s", str2);
        printf("the concatenated strings will be %s", strcat(str1,str2));
        break;
}
}
