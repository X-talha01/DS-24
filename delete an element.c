//accept an array and delete the element from the array..
#include<stdio.h>
int main(){
	int a[10],i,val,flag=0;
	for(i=0;i<10;i++){
		printf("\n enter a number:- ");
		scanf("%d",&a[i]);
	}
	printf("\n enter that element  you want to remove:-");
	scanf("%d",&val);
	printf("\n original array is:- ");
	for(i=0;i<10;i++){
		printf("%d \t",a[i]);
	}
	for(i=0;i<10;i++){
		if (a[i]==val)
	{ flag=1;
	break;
	}
}
if(flag==0)
printf("\n element is not found");
else
 for(;i<9;i++)
 a[i]=a[i+1];
 printf("\n Modified array is");
 for(i=0;i<9;i++){
 	printf("%d \t", a[i]);
 }
return 0;}
