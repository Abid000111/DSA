#include <iostream>

using namespace std;

int main(){
    cout << "Enter any number: ";

    int number;

    cin >> number;

    if (number > 0) {
        cout << number << " is a positive number" << endl;
    } else {
        cout << number << " is a negative number" << endl;
    }

    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is even or odd
    if (number % 2 == 0) {
        cout << number << " is an even number." << endl;
    }
    else {
        cout << number << " is an odd number." << endl;
    }

    return 0;
}