/*--->> Binary Operator Overloading*/

/*WAP to overload + operator to find sum of two imaginary numbers.*/
#include <iostream>
using namespace std;
class complex {
private:
    int real;
    int imaginary;
public:
    void getdata() {
        cout << "Enter the real number: ";
        cin >> real;
        cout << "Enter the imaginary number: ";
        cin >> imaginary;
    }
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
    complex a, b, c;
    a.getdata();
    b.getdata();

    // Use the overloaded + operator to add a and b, and store the result in c
    c = a + b;

    c.showdata();
}
