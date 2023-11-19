/*2080*/

/*QSN 1*/
#include <iostream>
using namespace std;  

// Function to display N number of characters with default arguments
void displayCharacters(char character = '*', int count = 10) {
    for (int i = 0; i < count; ++i) {
        cout << character;  // No need to use std:: here due to the namespace directive
    }
    cout << endl;
}

int main() {
    // Display '*' 10 times (using default arguments)
    cout << "Default: ";
    displayCharacters();

    // Display '#' 5 times
    cout << "Custom (character='#', count=5): ";
    displayCharacters('#', 5);

    // Display '@' 15 times
    cout << "Custom (character='@', count=15): ";
    displayCharacters('@', 15);

    return 0;
}


/*QSN 2*/
#include<iostream>
using namespace std;
class Staff{
    int code;
    string name;
public:
    void getdata(){
        cout << "Enter Staff Code: ";
        cin >> code;
        cout << "Enter Name: ";
        cin >> name;
    }
    void showdata(){
        cout << "Code : " << code << endl;
        cout << "Name : " << name << endl;
    }
};
class Teacher:public Staff{
    string subject;
    int salary;
public:
    void getdata(){
        Staff :: getdata();
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void showdata(){
        Staff :: showdata();
        cout << "Subject : " << subject << endl;
        cout << "Salary : " << salary << endl;
    }
};
class Typist:public Staff{
    int speed;
public:
    void getdata(){
        Staff :: getdata();
        cout << "Enter Speed: ";
        cin >> speed;
    }
     void showdata(){
        Staff :: showdata();
        cout << "Speed: " << speed << endl;
    }
};
int main(){
    Teacher t1;
    Typist t2;
    t1.getdata();
    t2.getdata();

    cout << "Teacher Details" << endl;
    cout << "-------------" << endl;
    t1.showdata();

    cout << "Typist Details" << endl;
    cout << "-------------" << endl;
    t2.showdata();
    return 0;
}



/*QSN 4*/
#include <iostream>
using namespace std; 

class MyClass {
private:
    static int objectCount;  // Static member variable to keep track of object count

public:
    MyClass() {
        objectCount++;  // Increment count when an object is created
    }

    static int getObjectCount() {
        return objectCount;  // Static member function to access object count
    }
};

// Initialize the static member variable
int MyClass::objectCount = 0;

int main() {
    // Creating objects of MyClass
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    // Display the number of objects created
    cout << "Number of objects created: " << MyClass::getObjectCount() << endl;

    return 0;
}



/*QSN 9*/
#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter age: ";
    cin >> age;

    try{
        if (age<0 || age>200){
            throw age;
        }
    }
    catch (int age){
        cout << "Age is not defined";
    }
    return 0;
}