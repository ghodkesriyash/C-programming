#include <stdio.h>
#include <string.h>

/*  OBJECTIVES
•	To understand basic string operations in C.
•	To learn how to manipulate strings using loops and functions.
•	To perform comparison, reversal, and substring checking.
•	To check whether a string is a palindrome.
*/

void main(){
    char str1[50];
    char str3[50];

    printf("enter first string \n");
    scanf("%s", str1);
    printf("enter second string \n");
    scanf("%s", str3);


    // 1)Calculate the length or string
    // method 1 == using loop

    int len1 = 0;
    while(str1[len1] != '\0')
        len1++;

    printf("the length of the string is %d \n", len1);

    //method 2 == use the fucntion
    int len2 = 0;
    len2 = strlen(str1);
    printf("the length of the string is %d \n", len2);

    //2)String reversal
    int i;
    char str2[50];
    for(i = 0;i <= strlen(str1);i++){
        str2[i] = str1[(strlen(str1) - 1) - i];
    }
    printf("the reversed string is %s \n", str2);
    
    // 3)string euqality check

    int flag = 1;
    if (strlen(str1) == strlen(str3)){
        for(i = 0;i <strlen(str1);i++){
            if (str1[i] != str3[i])
                flag = 0;
            else
                continue;
        }
    }

    if(flag ==1)
        printf("the strings str1 and str3 are same");
    else   
        printf("the strings str1 and str3 are not same");
    
    // 4)Palindrome => for string1
    if(str1 == str2)//as we have already foun out the reverse of string 1 and its stored in string 2
        printf("string 1 is a palindrome");

    // 5) substring checker
    int slen = strlen(str1);
    int s3len = strlen(str3);
    int subflag = 0;

    for(i = 0; i <= s3len - slen; i++){
        int j;
        for(j = 0; j < slen; j++){
            if(str3[i + j] != str1[j])
                break;
        }
        if(j == slen){
            subflag = 1;
            break;
        }
    }

    if(subflag == 1)
        printf("\nstr1 is a substring of str3");
    else
        printf("\nstr1 is not a substring of str3");
}


