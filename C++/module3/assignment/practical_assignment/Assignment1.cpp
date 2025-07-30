//First C++ Program: Hello World

#include<iostream>
using namespace std;

int main(){
	cout<<"Hello world";
}

//Basic Input/Output

#include <iostream>
#include <string> 

using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);  

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nHello, " << name << "! You are " << age << " years old." << endl;

}

