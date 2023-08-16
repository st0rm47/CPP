/*--->> Binary Operator Overloading*/

/*WAP to overload + operator to find sum of two imaginary numbers.*/

#include <iostream>
using namespace std;

// Define the complex class
class complex {
private:
    int real;
    int imaginary;

public:
    // Function to input real and imaginary parts
    void getdata() {
        cout << "Enter the real number: ";
        cin >> real;
        cout << "Enter the imaginary number: ";
        cin >> imaginary;
    }

    // Function to display complex number in the format "real + imaginary i"
    void showdata() {
        cout << "The sum is " << real << " + " << imaginary << "i" << endl;
    }

    // Overloaded + operator for complex number addition
    complex operator+(complex a) {
        complex temp;
        temp.real = real + a.real;
        temp.imaginary = imaginary + a.imaginary;
        return temp;
    }
};

int main() {
    // Declare three complex objects
    complex a, b, c;

    // Input real and imaginary parts for objects a and b
    a.getdata();
    b.getdata();

    // Use the overloaded + operator to add a and b, and store the result in c
    c = a + b;

    // Display the result
    c.showdata();
}
