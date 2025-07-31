//Write a C program that uses the break statement to stop printing numbers
//when it reaches 5. Modify the program to skip printing the number 3 using the
//continue statement.

#include <stdio.h>

int main() {
    int i;

    printf("Using break (stop at 5):\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  
        }
        printf("%d ", i);
    }

}

