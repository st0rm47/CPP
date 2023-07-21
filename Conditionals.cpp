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

    //Switch Case
    int choice = 8;
    switch(choice) {
        case 1:
            cout << "Coffee";
        break;
        case 2:
            cout << "Tea";
        break;
        case 3:
            cout << "Water";
        break;
    default:
        cout << "Invalid Choice";
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

/*--->> Switch Case */
// #include <iostream>
// using namespace std;

// int main() {
//     int choice;
//     cin >> choice;
//     /* Coffee Types:
//     1. Espresso
//     2. Americano
//     3. Cappuccino
//     4. Latte
//     */
//    switch(choice){
//     case 1:
//         cout << "Espresso";
//         break;
//     case 2:
//         cout << "Americano";
//         break;
//     case 3:
//         cout << "Cappuccino";
//         break;
//     case 4:
//         cout << "Latte";
//         break;
//     default:
//         cout << "Invalid Choice";
//    }
// }