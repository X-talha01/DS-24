// Accept the array and find the min. value..
#include<stdio.h>
int main(){
	int a[10],i,min;
	//taking the elements of an array
	for(i=0;i<10;i++){
		printf("\n give the elements of an array:");
		scanf("%d", & a[i]);}
			printf("\t \t the array is:");
for(i=0;i<10;i++){
		printf("%d", a[i]);}
		min= a[0];
for (i = 1; i < 10; i++) {
    if (a[i] < min) {
        min = a[i];}
    }
	printf("min value= %d",min);
	return 0;
}
