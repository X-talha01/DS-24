//accept an array and insert the element at any position..
#include<stdio.h>
int main(){
	int a[10],i,pos,val;
	for(i=0;i<9;i++){
		printf("\n enter a number:- ");
		scanf("%d",&a[i]);
	}
	printf("\n enter position where you want to insert:- ");
	scanf("%d",&pos);
	printf("\n enter the element that you want to insert:");
	scanf("%d",&val);
	printf("\n original array is:- ");
	for(i=0;i<9;i++){
		printf("%d \t",a[i]);
	}
	for(i=8;i>=pos-1;i--)
	a[i+1]=a[i];
	a[pos-1]=val;
	printf("\n updated array is:-");
	for(i=0;i<10;i++){
		printf("%d \t",a[i]);
		
	}
	return 0;
}
