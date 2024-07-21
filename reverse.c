#include<stdio.h>
int main(){
	int a[10],i,t,j;
	for(i=0;i<10;i++){
		printf("enter an array");
		scanf("%d",&a[i]);
	}
	printf("entered array is");
	for(i=0;i<10;i++)
	printf("%d",a[i]);
	i=0;
	j=9;
	while(i<=j)
	{
		t=a[i];
		a[i]=a[j];
	a[j]=t;
		i++;
		j--;}
		printf("updated array is\n ");
		for(i=0;i<10;i++)
		printf(" \t %d",a[i]);
		return 0;
}
