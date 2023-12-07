#include <iostream>
#include <cmath> // Include cmath for sqrt function
using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    char choice;
    do {
        cout << "If you want to check only one number to be prime or not, press 'S' or 's'.\n"
            "If you want to check prime numbers between a range, press 'R' or 'r'.\n"
            "To exit, press 'E' or 'e'.\n";
        cin >> choice;

        if (choice == 'R' || choice == 'r') {
            int startnumber;
            cout << "Enter a starting number: ";
            cin >> startnumber;
            int Endnumber;
            cout << "Enter an Ending Number: ";
            cin >> Endnumber;
            for (int i = startnumber; i <= Endnumber; ++i) {
                if (is_prime(i)) {
                    cout << i << " ";
                }
            }
            cout << endl;
        }
        else if (choice == 'S' || choice == 's') {
            int num;
            cout << "Enter a number to find if it's Prime or Not: ";
            cin >> num;
            if (is_prime(num)) {
                cout << "PRIME NUMBER.\n";
            }
            else {
                cout << "NOT PRIME.\n";
            }
        }
        else if (choice != 'E' && choice != 'e') {
            cout << "Invalid choice. Please enter 'S', 's', 'R', 'r', 'E', or 'e'.\n";
        }

    } while (choice != 'E' && choice != 'e');

    cout << "Exiting the program. Thank you!\n";
    return 0;
}

