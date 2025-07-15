#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    int vowels = 0, consonants = 0, digits = 0, specialChars = 0;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    
    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') ch += 32; 
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            vowels++;
        }
       
        else if ((ch >= 'a' && ch <= 'z')) {
            consonants++;
        }
        
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (ch != ' ' && ch != '\n') {
            specialChars++;
        }

        i++;
    }

    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specialChars);

}

