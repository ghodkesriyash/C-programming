#include <stdio.h>
#include <math.h>

long long fact(int x){
if(x == 1 || x == 0)
	return 1;
else
	return x * fact(x-1);
}


int main(){
int terms,i = 1,j = 0;
double x;
long long temp;
double temp_val,final;


printf("enter value of x in radians \n");
scanf("%lf",&x);
printf("enter the no. of terms \n");
scanf("%d",&terms);

int num_odd = (terms + 1) / 2;
double vals[num_odd];

while(i <= terms){
	if(i % 2 ==0){
		i++;
		continue;
	}
	else{
		temp = fact(i);
		temp_val = pow(x,i)/temp;
		vals[j] = temp_val;
		j++;
		i++;
	}
}


final = vals[0];
int total = j;
for(i = 1;i < total;i++){
	if(i % 2 == 1)
		final = final - vals[i];
	else
		final = final + vals[i];
}

printf("the sum of series is %f", final);
return 0;
}


		
		

