/* 2078 */

/*1.*/
#include <iostream>
using namespace std;
class Account {
private:
    int accNo;
    double balance;
    static double minBalance; // Static member for minimum balance
public:
    Account() {
        accNo = 0;
        balance = 0.0;
    }
    void readData() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Balance: ";
        cin >> balance;
    }
    void displayData() {
        cout << "Account Number: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
    static void displayMinBalance() {
        cout << "Minimum Balance: " << minBalance << endl;
    }
};

// Initialize the static member minBalance
double Account::minBalance = 1000.0;

int main() {
    Account accounts[5];

    // Read data for each account
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for Account " << i+1 << endl;
        accounts[i].readData();
    }

    // Display data for each account
    cout << "\nAccount Details:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\nAccount " << i + 1 << ":" << endl;
        accounts[i].displayData();
    }

    // Display the minimum balance using the static member function
    Account :: displayMinBalance();
    return 0;
}

