//Write a C program to create a file, write a string into it, close the file, then
//open the file again to read and display its contents.


#include <stdio.h>

int main() {
    FILE *fp;
    char str[] = "Hello, this is a test string written to a file.";
    char buffer[100];

   
    fp = fopen("example.txt", "w");  
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
    }

    fprintf(fp, "%s", str);

    fclose(fp);

    fp = fopen("example.txt", "r");  
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
    }

    printf("File contents:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);

}

