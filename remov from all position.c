//accept an array and delete the element from all the positions..
#include<stdio.h>
int main(){
	int a[10],i,val,index=10;
	for(i=0;i<10;i++){
		printf("\n enter a number:- ");
		scanf("%d",&a[i]);
	}
	printf("\n enter the element that you want to remove:-");
	scanf("%d",&val);
	printf("\n original array is:- ");
	for(i=0;i<10;i++){
		printf("%d \t",a[i]);
	}
	for(i=0;i<index-1;i++)
	{
	if(a[i]==val)
	for(int j=i;j<index-1;j++){
		a[j]=a[j+1];
		index--;
		i--;	}
	}
	printf(" the updated array:- ");
	for(i=0;i<index;i++)
	printf("\n %d",a[i]);
	return 0;}
