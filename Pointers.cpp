#include<iostream>
using namespace std;
int main(){
    int num = 42;
    int *p = &num;
    cout << p;
    cout << *p;
    /*Creates a pointer called p and assigns the address of variable num
    Line 6 prints the address 
    Line 7 prints the value stored in that address*/

    string name = " Subodh";
    string *ptr = & name;
    //Pointer variable should have same data type as the variable its referring to

    int a = 4;
    int *p = &a;
    cout << *p << endl;
    a += 2;
    cout << a << endl;  // Value of a increased by 2
    *p += 3;
    cout << *p << endl; // Value of *p is increased = Value of a increased by 3
    a -= 1;
    cout << a << endl;  // Value of a decreased by 1


    //Array and Pointers
    int arr[] = {2, 4, 6, 8};
    int *p = arr;
    cout << *p << endl; // first element
    cout << *(p+1) << endl; // second element

    for(int i=0;i<4;i++) {
    cout << *p << endl;
    p++;
    }
    /* &p[i] equivalent to p+i representing the address 
    p refers to the first value i.e p[0]
    p+i refers to the upcoming value depending upon i 
    (p+1) refers as p[1], (p+2) refers as p[2] */

}