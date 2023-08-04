// // /* Create a class named "Programming" */

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
//     Programming(string name) { // constructor
//         cout << "I love " << name;
//     }
// };
// int main() {
//     string name;
//     cin >> name;
//     if (name.length()>1) { // Check if the string is empty
//         Programming programming(name);
//     } else {
//         Programming ();
//     }
//     return 0;
// }



//Create a piggie bank
#include<iostream>
using namespace std;
class addamount{
    int size;
    int a;
    public:
    addamount(){
        size =50;
        cout << "No extra amount is added";
    }
    addamount(int a){
        cout << a;
        cout << " is added to the Piggie Bank " << endl;

    }
    void showdata();
    void sum( int a);
};
void addamount :: sum(int a){
        size=size+a;  
}
void addamount :: showdata(){
        cout <<"Total amount in piggie bank is" << size ;
    }
int main(){
    addamount t;
    int a;
    int size=50;
    cout << "Enter the amount to be added in a Piggie Bank";
    cin >> a;
    addamount addamount(a);
    addamount.sum(a);
    addamount.showdata();
}
