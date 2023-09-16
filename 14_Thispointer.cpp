/*--> This Pointer */
#include<iostream>
using namespace std;
class exam{
private:
    int x; 
    int y; //data member
public:
    exam(){
        x = 10;
        y = 20;
        cout << x << endl;
        cout << y << endl;
    }
    void display(int x,int y){
        cout << this->x << endl;
        cout << this->y << endl;
        //Shows the value of data member
        this -> x = x;
        cout << this -> x <<endl;

        this -> y = y;
        cout << this -> y <<endl;
        //Shows the value given by the function in main function
    }
};

int main (){
    exam e;
    e.display(2,3);
    return 0;
}