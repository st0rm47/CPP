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
        cout << "\nEnter details for Account " << i + 1 << endl;
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


/*2.*/
/*Meters to Feet (Source)*/
#include <iostream>
using namespace std;
class feet_inch{
    int feet;
    int inch;
public:
    feet_inch(){
        feet=0;
        inch=0;
    }
    feet_inch(int f,int i){
        feet=f;
        inch=i;
    }
    void display(){
        cout << feet << " ft " << inch << " inch " << endl; 
    }
};
class meters{   //Source Class
    int meter;
    int centimeter;
public:
    meters(int m,int cm){
        meter=m;
        centimeter=cm;
    }
    operator feet_inch(){
        feet_inch f1;
        int f,i;
        f=meter*3.3;
        i=centimeter*0.4;
        f=f+i/12;
        i=i%12;
        return feet_inch(f,i);
    }
};
int main(){
    meters m1(4,50);
    feet_inch f1;
    f1=m1;
    f1.display();
    return 0;
}



/*Meters to Feet (Destination)*/
#include <iostream>
using namespace std;
class meters{   //Source Class
    int meter;
    int centimeter;
public:
    meters(int m,int cm){
        meter=m;
        centimeter=cm;
    }
    int getm(){
        return meter;
    }
    int getcm(){
        return centimeter;
    }
};
class feet_inch{    //Destination CLass
    int feet;
    int inch;
public:
    feet_inch(){
        feet=0;
        inch=0;
    }
    feet_inch(int f,int i){
        feet=f;
        inch=i;
    }
    feet_inch(meters m1){ 
        int m,cm;
        m=m1.getm();
        cm=m1.getcm();
        feet=m*3.3;
        inch=cm*0.4;
        feet=feet+inch/12;
        inch=inch%12;
    }
    void display(){
        cout << feet << " ft " << inch << " inch " << endl;
    }
};
int main(){
    meters m1(4,50);
    feet_inch f1;
    f1=m1;
    f1.display();
    return 0;
}