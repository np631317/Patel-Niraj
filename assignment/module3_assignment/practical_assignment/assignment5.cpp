//Grade Calculator
#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks (0 - 100): ";
    cin >> marks;

    // Check for valid input
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks! Please enter marks between 0 and 100." << endl;
    } 
	else {
        if (marks >= 90) {
            cout << "Grade: A+" << endl;
        } else if (marks >= 80) {
            cout << "Grade: A" << endl;
        } else if (marks >= 70) {
            cout << "Grade: B" << endl;
        } else if (marks >= 60) {
            cout << "Grade: C" << endl;
        } else if (marks >= 50) {
            cout << "Grade: D" << endl;
        } else {
            cout << "Grade: F (Fail)" << endl;
        }
    }

}

