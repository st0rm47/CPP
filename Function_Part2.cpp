// //Pass By value
// #include<iostream>
// using namespace std;
// void swap(int a,int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     }
// int main(){
//     int x=5,y=3;
//     swap(x,y);
//     cout << "After Function Call" << endl;
//     cout << "x = " << x << endl;
//     cout << "y = " << y;

//     /*Values of x and y were passed but not variables x and y*/
// }

//Pass By reference
#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    }
int main(){
    int x=5,y=3;
    swap(x,y);
    cout << "After Function Call" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y;

    /*Variables x and y were passed but not values.
    When function is called, it points to the memory location of x and y*/
}