// #include<iostream>
// using namespace std;
// class bio{  //class
//     private:
//     int age;
//     string name;
//     float salary;
//     public:
//         void getdata(){ // Member function inside a class
//             cout << "Enter your name: ";
//             cin >> name;
//             cout << "Enter your age: ";
//             cin >> age;
//             cout << "Enter your salary: ";
//             cin >> salary;
//             cout << endl;
//         }
    
//     void data();    //Members of the class
//     void ssama();   //Members of the class
// };
// void bio :: ssama(){    // Member function outside a class
//     cout << "Salary = " << salary << endl;

// }
// void bio :: data(){     // Member function outside a class
//     cout << "Name = " << name << endl;
//     cout << "Age = " << age << endl;
//     cout << endl;
// }

// int main(){
// bio mydata[10]; //object using array

// for(int i=0;i<2;i++){
// mydata[i].getdata();   //Function Call
// }
// for(int i=0;i<2;i++){
// mydata[i].data();      //Function Call
// }
// for(int i=0;i<2;i++){
// mydata[i].ssama();     //Function Call
// }

// }


#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout << "Enter the operator (+,-,*,/): ";
    cin >> op;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    switch(op){
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
            cout << a << " / " << b << " = " << a / b << endl;
        break;
    default:
        cout << "Invalid Operation" << endl;
        break;
    }
       return 0;
}
