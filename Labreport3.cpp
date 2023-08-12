// /*Create a class named 'Programming' while creating an object of a class,
//  if nothing passed to it, then print message "I love C++".
//   If some string is passed, then print the passed string in place of C++ 
//   ie print "I love (your passed string)".*/
// #include <iostream>
// #include <string>
// using namespace std;
// class Programming {
// private:
//     string name;
// public:
//     Programming() {
//         cout << "I love C++ " << endl;
//     }
//     Programming(string name) {
//         cout << "I love " << name;
//     }
// };
// int main() {
//     string name;
//     cin >> name;
//     if (name.length()>1) {
//         Programming programming(name);  
//     } else {
//         Programming (); 
//     }
//     return 0;
// }

// /*Create a class named "Rectangle" with two data members lenghth and breadth and a function to claculate area.
//  The class has three constructors.
// i) Having no parameter-values  of both length and breasth are assigned zero.
// ii) Having two numbers as parameters the two numbers are assigned as length and breadth respectively.
// iii) Having one number as parameter both length and breadth are assigned that number.
// Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.*/

// #include<iostream>
// using namespace std;
// class rectangle {
// private:
//     int length;
//     int breadth;
// public:
//     rectangle() {
//         length = 0;
//         breadth = 0;
//     }
//     rectangle(int x, int y) {
//         length = x;
//         breadth = y;
//     }
//     rectangle(int z) {
//         length = breadth = z;
//     }
//     int area() {
//         return length * breadth;
//     }
// };
// int main() {
//     rectangle r;
//     cout << "Area of rectangle: " << r.area() << endl;
    
//     int x, y;
//     cout << "Enter length and breadth: ";
//     cin >> x >> y;
//     rectangle r1(x, y);
//     cout << "Area of rectangle 1: " << r1.area() << endl;

//     int z;
//     cout << "Enter length for rectangle: ";
//     cin >> z;
//     rectangle r2(z);
//     cout << "Area of rectangle 2: " << r2.area() << endl;
//     return 0;
// }

#include<iostream>
using namespace std;
class addamount{
private:
    int a;
    int balance=50;; 
public:  
    addamount(){        
        
    }
    addamount(int a){ 
        balance += a;   
    }
    void deposit(int a) {
        if (a > 0) {
            cout << "$" << a << " is added to the Piggy Bank." << endl;
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
    addamount s1(a);        
    addamount s2 =s1;       
    s2.deposit(a);          
    cout << "Total amount in Piggy Bank: $" << s2.total();
    return 0;
}