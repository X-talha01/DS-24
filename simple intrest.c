//wap to calculate the simple intrest 
#include<stdio.h>
int main(){
	float p,r,t,si;
	printf("\t enter the value of p:-");
	scanf("%f",&p);
		printf("\t enter the value of r:-");//r=rate
	scanf("%f",&r);
		printf("\t enter the value of t:-");//t=time
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("simple intrest =%f",si);
	return 0;
}
