// /* 1. WAP to overload unary operators i.e increment and decrement.*/
// #include<iostream>
// using namespace std;
// class test{
//     int count;
//     public:
//         test(){
//             count=0;
//         }
//         void display(){
//             cout << count << endl;
//         }
//         void operator ++(){     //Pre-increment operator
//            ++count;
//         }
//         void operator -- (int){     //Post-decrement operator
//             count--;
//         }
// };
// int main(){
//     test t;             // Object of clss test
//     t.display();       // Display the value of t as 0

//     ++t;                // Increment t using pre-increment operator
//     t.display();       // Display the value of t as 1

//     t--;                // Increment t using post-increment operator
//     t.display();       // Display the value of t as 0
// }


/*3. WAP to overload + operator to concatenate two strings.*/
// #include<iostream>
// using namespace std;
// class str{
//     private:
//         string name;
//     public:
//         str(){
//             name=" ";
//         }
//         str(string b){
//             name=b;
//         }
//         void getdata() {
//             cout << "Enter a string: ";
//             cin >> name;
//         }
//         void show(){
//             cout << name;
//         }
//         str operator +(str a){
//             str temp;
//             temp.name=name+a.name;
//             return temp;
//         }
// };
// int main(){
//     str a,b,c;
//     a.getdata();
//     b.getdata();
//     c=a+b;
//     c.show();
// }


/*4. WAP to two complex numbers using operator overload by friend function.*/
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

    // Overloaded + operator for complex number addition using friend function
    friend complex operator+(complex a, complex b) {
        complex temp;
        temp.real = a.real + b.real;
        temp.imaginary = a.imaginary + b.imaginary;
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