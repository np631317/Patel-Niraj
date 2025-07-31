//Write a C program that takes N numbers from the user and stores them in an array. The
//program should then calculate and display the sum of all array elements.
//? Challenge: Modify the program to also find the average of the numbers.

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

    average = sum / n;

    printf("\nSum of array elements = %.2f\n", sum);
    printf("Average of array elements = %.2f\n", average);

}

