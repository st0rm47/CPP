//Program to add 2 complex numbers

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
    void sum(complex a, complex b);
    void showdata();
};
void complex :: sum(complex a, complex b){  //Function to add 2 complex numbers
    real=a.real+b.real;
    imaginary=a.imaginary + b.imaginary; 
}
void complex :: showdata(){     //Function to display the complex data
    cout << "The sum is " << real << " + " << imaginary << "i"<< endl;
}
int main(){
    complex c1,c2,c3;
    c1.input();     // function call
    c2.input();     // function call
    c3.sum(c1,c2);  // function call
    c3.showdata();  // function call
    return 0;
}
