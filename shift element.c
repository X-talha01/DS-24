#include<stdio.h>
int main(){
	int a[5],i,first;
		for(i=0;i<5;i++){
		printf("enter an array");
		scanf("%d",&a[i]);}
		first=a[0];
		for(i=1;i<5;i++)
		a[i-1]=a[i];
		a[4]=first;
		printf("Modified array is");
		for(i=0;i<5;i++)
printf("%d",a[i]);
return 0;		
}
