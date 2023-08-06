 /* Create a class named "Programming" */
#include <iostream>
#include <string>
using namespace std;
class Programming {
private:
    string name;
public:
    Programming() {
        cout << "I love C++ " << endl;
    }
    Programming(string name) {
        cout << "I love " << name;
    }
};
int main() {
    string name;
    cin >> name;
    if (name.length()>1) { // Check if the string is empty
        Programming programming(name);  //Create an object with the parameterized constructor
    } else {
        Programming (); // Create an object using the default constructor
    }
    return 0;
}



//Create a piggie bank
#include<iostream>
using namespace std;

class addamount{
    private:
        int a;
        int balance = 50;   // Initial balance is 50
    public:
        
        addamount(){        // Default Constructor adding no amount to the Piggie Bank
            
        }
        addamount(int a){   // Constructor to add the amount to existing balance
            balance += a;   
        }
        void deposit(int a) {
            if (a > 0) {
                cout << a << " is added to the Piggy Bank" << endl;
            } 
            else {
                cout << "No amount will be added to the Piggy Bank." << endl;
            }
        }
        int total(){
            return balance;
        } 
};
int main(){
    int a;
    cout << "Enter the amount to be added in a Piggie Bank : ";
    cin >> a;
    addamount s1(a);        //Created an object with the input amount which calls the constructor
    addamount s2 =s1;       //Created a copy of the object s1
    s2.deposit(a);          // Deposits the input amount into the copied object
    cout << "Total amount in Piggy Bank: " << s2.total();   //Displays the total balance
    
}

