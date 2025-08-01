//Write a C program that checks whether a given number is a prime number or not using a for
//loop.
//Challenge: Modify the program to print all prime numbers between 1 and a given number

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number to check if it's prime: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } 
	else {
        for (i=2;i<=num/2;i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is NOT a Prime number.\n", num);

}

