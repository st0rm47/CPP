// // // /* Create a class named "Programming" */
// // #include <iostream>
// // #include <string>
// // using namespace std;
// // class Programming {
// // private:
// //     string name;
// // public:
// //     Programming() {
// //         cout << "I love C++ " << endl;
// //     }
// //     Programming(string name) { // constructor
// //         cout << "I love " << name;
// //     }
// // };
// // int main() {
// //     string name;
// //     cin >> name;
// //     if (name.length()>1) { // Check if the string is empty
// //         Programming programming(name);
// //     } else {
// //         Programming ();
// //     }
// //     return 0;
// // }



//Create a piggie bank
#include<iostream>
using namespace std;
class addamount{
    private:
        int a;
    public:
        int size=50;
        addamount(){
            
        }
        addamount(int a){
            cout << a << " is added to the Piggie Bank " << endl;
            size=size+a;  
        }
        void showdata();
    
};
void addamount :: showdata(){
        cout <<"Total amount in piggie bank is " << size ;
    }
int main(){
    addamount s1;
    int a;
    cout << "Enter the amount to be added in a Piggie Bank : ";
    cin >> a;
    if (a<=0){
        cout << "No amount will be added to the Piggie Bank." << endl;
    } else {
        addamount addamount(a);
    }
    
    s1.showdata();
   
}

// #include<iostream>

// using namespace std;

// class addAmount{

// public:

// int initialValue=50;

// addAmount(){


// }

// addAmount(int a){

// initialValue=a+initialValue;

// }

// addAmount(addAmount &b){

// initialValue=b.initialValue;

// cout<<"the final amount is: "<<initialValue<<endl;

// }

// };

// int main(){


// int a;

//  cout<<"enter the amount you want to add: "<<endl;

//  cin>>a;

//  addAmount o1,o2(a);


//  if (a==0) {

//  cout << "No value will be added to the piggy bank" << endl;

//  o1;


//  } else {


// o2;
//  }

// addAmount o3=o2;

// return 0;


// }



