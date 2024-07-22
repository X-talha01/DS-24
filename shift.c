//shift element positions that you want
#include<stdio.h>
int main(){
	int a[10],i,first,n,j;
	for(i=0;i<10;i++){
		printf("enter an array");
		scanf("%d",&a[i]);
	}
	printf("\n original array is");
		for(i=0;i<10;i++)
		printf(" \t%d",a[i]);
		printf("enter how many times you want to shift");
		scanf("%d",&n);
		for(i=0;i<n;i++){
			first=a[0];
			for(j=0;j<10;j++)
			a[j]=a[j+1];
			a[9]=first;
		}
		printf("\n updataed array is");
		for(i=0;i<10;i++)
		printf("\t%d",a[i]);
		return 0;
}
