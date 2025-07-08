#include <stdio.h>

int main() {
    int choice, qty, amount = 0, totalAmount = 0;
    char moreOrders = 'y';

    while (moreOrders == 'y' || moreOrders == 'Y') {
        printf("-------- Menu --------\n");
        printf("1. Pizza     price = 180rs/pcs\n");
        printf("2. Burger    price = 100rs/pcs\n");
        printf("3. Dosa      price = 120rs/pcs\n");
        printf("4. Idli      price = 50rs/pcs\n");
        printf("Please Enter your choice... :");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You have selected Pizza.\n");
                printf("Enter the quantity :");
                scanf("%d", &qty);
                amount = 180 * qty;
                break;
            case 2:
                printf("You have selected Burger.\n");
                printf("Enter the quantity :");
                scanf("%d", &qty);
                amount = 100 * qty;
                break;
            case 3:
                printf("You have selected Dosa.\n");
                printf("Enter the quantity :");
                scanf("%d", &qty);
                amount = 120 * qty;
                break;
            case 4:
                printf("You have selected Idli.\n");
                printf("Enter the quantity :");
                scanf("%d", &qty);
                amount = 50 * qty;
                break;
            default:
                printf("Invalid choice.\n");
                amount = 0;
                break;
        }

        totalAmount += amount;

        if (amount > 0) {
            printf("Amount : %d\n", amount);
            printf("Total Amount is = %d\n", totalAmount);
        }

        printf("Do you want to place more orders? (y & n) :");
        scanf(" %c", &moreOrders);
    }

    printf("\nThank you for your order!\n");
    printf("Final Bill Amount = %d\n", totalAmount);

}
