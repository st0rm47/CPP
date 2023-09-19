#include<iostream> //Header file
using namespace std;
int main(){
    cout << "Hello World!";
    //Outputting a text
    cout << 25;
    // Outputting a Number

    cout << "Hello This is first line" << endl;
    // endl command adds a new line
    cout << "This is the second line" << endl;

    string name= "Subodh";
    //creates a variable called name of type string and assigns value as "Subodh"
    cout << name << endl; 
    //Prints value as Subodh
    name = "Subodh Ghimire";
    // Now, the name holds the value "Subodh Ghimire";
    cout << name << endl ;
    // Prints the value as Subodh Ghimire

    /*string name= "Subodh Ghimire";
    cout << name;
    Another way of declaring and assigning value to a variable */


    //Data Types
    int age = 40;
    double temp = 93.8;
    float area = 21.4f; // To specify its a float, we use letter f
    char section ='A';
    bool pass = true;   // True or False
    cout << age << endl << temp << endl << area << endl << section << endl << pass << endl;

    double random = age * temp;
    cout << random << endl;

    

    //Variable Declaration
    int x=2, y=5;
    auto z = 4;
    cout << x << " " << y << " " << z ;
}


/*Dynamic Memory Allocation*/
#include <iostream>
using namespace std;

int main() {
    int size;
    
    cout << "Enter the size of the integer array: ";
    cin >> size;

    //Dynamically allocate memory
    int* dynamicArray = new int[size];    
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> dynamicArray[i];
    }    

    // Display the values stored in the dynamically allocated array
    cout << "You entered the following integers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;
    // Deallocate the dynamically allocated memory
    delete[] dynamicArray;
    return 0;
}
