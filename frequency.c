#include<stdio.h>

int main(){
    int a[10], i, j, count;
    
    // Input elements
    for(i = 0; i < 10; i++) {
        printf("Enter an element: ");
        scanf("%d", &a[i]);
    }

    // Print original array
    printf("Original array is: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Calculate and print frequencies
    for(i = 0; i < 10; i++) {
        if(a[i] != -1) { // -1 marks elements we've already counted
            count = 1;
            for(j = i + 1; j < 10; j++) {
                if(a[j] == a[i]) {
                    count++;
                    a[j] = -1; // Mark this element as counted
                }
            }
            printf("Frequency of number %d = %d\n", a[i], count);
        }
    }

    return 0;
}

