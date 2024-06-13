//wap to calculate average of three numbers
#include<stdio.h>
int main(){
	int num1,num2,num3;
	float avg;
	printf("enter number one:-");
	scanf("%d",&num1);
	printf("enter number two:-");
	scanf("%d",&num2);
		printf("enter number three:-");
	scanf("%d",&num3);
	avg=(num1+num2+num3)/3;
	printf("avg is = %f",avg);
	return 0;
}
