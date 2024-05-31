// Accept the array and find the max. value..
#include<stdio.h>
int main(){
	int a[10],i,max,min;
	//taking the elements of an array
	for(i=0;i<10;i++){
		printf("\n give the elements of an array:");
		scanf("%d", & a[i]);}
			printf("\t the array is:");
for(i=0;i<10;i++){
		printf("%d", a[i]);}
	min =	max = a[0];
for (i = 1; i < 10; i++) {
    if (a[i] > max) {
        max = a[i];}
        else if (a[i] < min) {
        min = a[i];}
    }
	printf("max value= %d min=%d",max,min);
	return 0;
}
