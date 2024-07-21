#include<stdio.h>
int main(){
	int i,a[10],num,count;
		for(i=0;i<10;i++){
		printf("enter an array");
		scanf("%d",&a[i]);
	}
	printf("enter no. do find frequency");
	scanf("%d",&num);
	int count=0;
	for(i=0;i<10;i++)
		if (a[i]==num);
		count++;
	printf("the frequency of no. is");
	printf("%d",count);
	return 0;
}
