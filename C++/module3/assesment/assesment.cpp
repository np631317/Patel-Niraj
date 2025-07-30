#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
private:
    string customerName;
    int choice, quantity;
    float total;

public:
    FoodOrder() {
        total = 0;
    }

    void getCustomerDetails() {
        cout << "Enter Customer Name: ";
        getline(cin, customerName);
        
    }

    void displayMenu() {
        cout << "\n========== Welcome to Food Corner ==========\n";
        cout << "----------- Hello, " << customerName << "! -----------\n";
        cout << "\n************ Food Menu ************\n";
        cout << "1. Pizza       - Rs. 250\n";
        cout << "2. Burger      - Rs. 120\n";
        cout << "3. Pasta       - Rs. 150\n";
        cout << "4. Sandwich    - Rs. 100\n";
        cout << "5. Exit\n";
    }

    // Function to take the food order
    void takeOrder() {
        do {
            cout << "\nEnter your choice (1-5): ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter quantity of Pizza: ";
                    cin >> quantity;
                    total += quantity * 250;
                    break;

                case 2:
                    cout << "Enter quantity of Burger: ";
                    cin >> quantity;
                    total += quantity * 120;
                    break;

                case 3:
                    cout << "Enter quantity of Pasta: ";
                    cin >> quantity;
                    total += quantity * 150;
                    break;

                case 4:
                    cout << "Enter quantity of Sandwich: ";
                    cin >> quantity;
                    total += quantity * 100;
                    break;

                case 5:
                    cout << "\nOrder complete. Generating bill...\n";
                    break;

                default:
                    cout << "Invalid choice. Please choose again.\n";
            }

            // Ask to continue only if not exiting
            if (choice >= 1 && choice <= 4) {
                char more;
                cout << "Do you want to order more? (Y/N): ";
                cin >> more;
                if (more == 'N' || more == 'n') {
                    break;
                }
            }

        } while (choice != 5);
    }

    // Function to display the final bill
    void displayBill() {
        cout << "\n=========== Final Bill ===========\n";
        cout << "Customer Name: " << customerName << endl;
        cout << "Total Amount: Rs. " << total << endl;
        cout << "==================================\n";
        cout << "Thank you for ordering. Have a great day!\n";
    }
};

// Main Function
int main() {
    // Create object of FoodOrder class
    FoodOrder order;

    // Step 1: Get customer name
    order.getCustomerDetails();

    // Step 2: Display menu
    order.displayMenu();

    // Step 3: Take orders
    order.takeOrder();

    // Step 4: Display bill
    order.displayBill();

    return 0;
}

