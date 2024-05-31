//Accept and display the array of 10 15 elements..
#include<stdio.h>
int main(){
	int arr[15],i;
	//takig input
	for(i=0;i<15;i++){
		printf("\n enter the elements of an array:");
		scanf("%d",& arr[i]);
	}
	printf("\n these are the elements of an array:");
	for(i=0;i<15;i++){
		printf("\n %d", arr[i]);
	}
	return 0;
}
