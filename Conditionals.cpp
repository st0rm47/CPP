#include<iostream>
using namespace std;
int main(){
    // Taking inputs
    int age;
    cout  << "Enter your age" << endl;
    cin >> age;

    // Multiple Inputs
    int a,b,c;
    cin >> a >> b >> c;

    //Conditionals
    int num = 2;
    int x = 3;
    if(num >= 2) {
        if(x > 4) {
             cout << "num = " << 3; 
        }
        else { 
            cout << "num = " << 4; 
        }
    } 
    else {
        cout << "x = " << 1; 
    }
}

/*--->> Multiple Inputs */

// #include <iostream>
// using namespace std;
// int main() {
//     double length;
//     double height;
//     cin >> length >> height ;
//     double area = length*height;
//     cout << area;  
// }


/*--->> Conditionals */
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     if(age>=16){
//         cout << "Welcome";
//     }else{
//         cout << "Not allowed";
//     }
// }