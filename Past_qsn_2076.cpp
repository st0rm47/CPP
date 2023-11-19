// /* 2076 */

/*QSN. 1.*/
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


/*QSN. 2*/
#include<iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inch;

public:
    Distance() {
        feet = 0;
        inch = 0;
    }

    Distance(int f, int i) {
        feet = f;
        inch = i;
    }

    // Friend function declaration
    friend Distance sum(Distance& a, Distance& b);
    
    // Member function to display the distance
    void displayDistance(){
        cout << "Feet: " << feet << " Inches: " << inch << endl;
    }
};

// Friend function definition
Distance sum(Distance& a,Distance& b) {
    Distance result;
    result.feet = a.feet + b.feet;
    result.inch = a.inch + b.inch;

    // Adjust inches if it exceeds 12
    if (result.inch >= 12) {
        result.inch -= 12;
        result.feet++;
    }
    return result;
}

int main() {
    // Create two Distance objects
    Distance distance1(5, 9);
    Distance distance2(3, 4);

    // Use the friend function to add distances
    Distance total = sum(distance1, distance2);

    // Display the result in the main function
    cout << "Result of adding distances in the main function: ";
    total.displayDistance();

    return 0;
}


/*QSN. 10*/
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int sid;
    string sname;
    string level;

public:
    // Constructor
    Student(){
        sid=0;
        sname="";
        level="";
    }
    Student(int id,string name,string lvl){
        sid=id;
        sname=name;
        level=lvl;
    }

    // Member function to input student details
    void inputDetails() {
        cout << "Enter Student ID: ";
        cin >> sid;

        cout << "Enter Student Name: ";
        cin >> sname;

        cout << "Enter Student Level: ";
        cin >> level;
    }

    // Member function to display student details
    void displayDetails(){
        cout << "Student ID: " << sid << "\n";
        cout << "Student Name: " << sname << "\n";
        cout << "Student Level: " << level << "\n";
    }
};

int main() {
    // Create two objects of the Student class
    Student student1, student2;

    // Input details for the first student
    cout << "Enter details for the first student:\n";
    student1.inputDetails();

    // Input details for the second student
    cout << "\nEnter details for the second student:\n";
    student2.inputDetails();

    // Display details of both students
    cout << "\nDetails of the first student:\n";
    student1.displayDetails();

    cout << "\nDetails of the second student:\n";
    student2.displayDetails();

    return 0;
}
