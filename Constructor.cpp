//--->>Constructor
    /*Special member function
     Initializes object 
    Name same as class name */

// #include <iostream>
// #include <string>
// using namespace std;
// class Painting {        //class
//     private:
//         string name;
//     public:
//         Painting(string name){      //constructor
        
//             cout << name;
//         }
// };
// int main() {
//     string name;
//     cin >> name;

//     Painting painting(name);        //used constructor to pass the value

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class test{
//     int x,y;
//     public:
//         test(){     //constructor
        
//             x=5;
//             y=10;
//         }
//         void show(){
//             cout << x << endl << y;

//         }
// };
// int main(){
//     test t;
//     t.show();
// }



#include<iostream>
using namespace std;
class naya {        //class
    int a,b;
    public:
        naya(){     //constructor
            cout << "Enter values of a and b: ";
            cin >> a >> b;
            cout << a << endl << b;
        }

};
int main(){
    naya n;         //object created
}