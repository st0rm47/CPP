#include<iostream>
using namespace std;
class two; //Second class declaration
class one{
    //Data is private ---> Data hiding
    int x,y;    //Data members
    public:
        void getdata(){ //member function
           
           cout << "Enter values of x and y for class one : ";
            cin >> x >> y;
        }
        friend int display(one a,two b );  //Friend function declaration with keyword friend and argument as object

};      //Data and function in same place ---> Data Encapsulation

class two{
    int x,y;    //Data members
    public:
        void getdata(){ //member function
           
           cout << "Enter values of x and y for class two :";
            cin >> x >> y;
        }
        friend int display(one a,two b);  //Friend function declaration with keyword friend and argument as object

};
int display(one a,two b){         //non-member function
    return a.x+b.x;
    return a.y+b.y;;
}
int main(){
one a;      //object
two b;
a.getdata();
b.getdata();
cout << display(a,b) << endl;
cout << display(a,b);
}