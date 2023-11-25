/*--> Program to add 2 complex numbers */

/* Return by Value */
#include <iostream>
using namespace std;
class complex {  
private:
    int real;
    int imaginary;
public:
    void input() {
        cout << "Enter the real number: ";
        cin >> real;
        cout << "Enter the imaginary number: ";
        cin >> imaginary;
    }
    complex sum(complex a, complex b); // Modified function declaration
    void showdata();
};
complex complex::sum(complex a, complex b) {
    complex result;  // Create a complex object to hold the result
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;  // Return the result as a complex object
}
void complex::showdata() {
    cout << "The sum is " << real << " + " << imaginary << "i" << endl;
}
int main() {
    complex c1, c2, c3;
    c1.input();
    c2.input();
    c3 = c3.sum(c1, c2);  // Assign the result of sum to c3
    c3.showdata();
    return 0;
}


/* Return by Reference */
#include<iostream>
using namespace std;
class complex{  //class
    private:
        int real;
        int imaginary;
    public:
        void input(){
        cout << "Enter the real number";
        cin >> real;
        cout << "Enter the imaginary number";
        cin >> imaginary;
        }
    complex& sum(complex &a, complex &b); //Pass by reference
    void showdata();
};
complex& complex :: sum(complex &a, complex &b){  //Function to add 2 complex numbers
    complex result;
    result.real=a.real+b.real;
    result.imaginary=a.imaginary + b.imaginary; 
    return result;
}
void complex :: showdata(){     //Function to display the complex data
    cout << "The sum is " << real << " + " << imaginary << "i"<< endl;
}
int main(){
    complex c1,c2,c3;
    c1.input();         // function call
    c2.input();         // function call
    c3=c3.sum(c1,c2);    // function call
    c3.showdata();      // function call
    return 0;
}



/* Return by Pointer */
#include<iostream>
using namespace std;
class complex{  //class
    private:
        int real;
        int imaginary;
    public:
        void input(){
        cout << "Enter the real number";
        cin >> real;
        cout << "Enter the imaginary number";
        cin >> imaginary;
        }
    complex* sum(complex *a);
    void showdata();
};
complex* complex :: sum(complex *a){  //Function to add 2 complex numbers
    complex* result = new complex;
    result->real=real+a->real;
    result->imaginary=imaginary + a->imaginary;
    return result;
}
void complex :: showdata(){     //Function to display the complex data
    cout << "The sum is " << real << " + " << imaginary << "i"<< endl;
}
int main(){
    complex c1,c2,*c3;
    c1.input();     // function call
    c2.input();     // function call
    c3=c2.sum(&c1);  // function call
    c3->showdata();  // function call
    return 0;
}