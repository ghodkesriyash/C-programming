#include <stdio.h>
#include <math.h>

//function for factorial
long long factorial(int x){
    if(x == 0 || x == 1){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}


int main(){
int terms;//value of x is in radians
int i = 1,j = 0;
float temp_val,x;
long long temp;

//taking neede inputs
printf("enter the value of x \n");
scanf("%f", &x);
printf("enter the no. of terms \n");
scanf("%d", &terms);

float val[terms];

while(i <= terms * 2){
    if(i % 2 == 0){
        i++;
        continue;
    }
    else{
        temp = factorial(i);
        temp_val = pow(x,i)/temp;
        val[j] = temp_val;
        i++;
        j++;
    }
}
float final = val[0];
for(i = 1;i < terms;i++){
    if(i % 2 == 1)
        final = final - val[i];
    else
        final = final + val[i];
}
printf("the sum oif series is %f", final);
return 0;
}
