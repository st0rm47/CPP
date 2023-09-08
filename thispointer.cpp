#include<iostream>
using namespace std;

class exam{
    int x;  //data member
    public:
        exam(){
            x=10;
            cout<<x<<endl;
        }
        void display(int x){
            cout << this->x << endl;
                //Shows the value of data member
            this -> x =x;
            cout<< this -> x<<endl;
                //Shows the value given by the function in main function
        }
};


int main (){
    exam e;
    e.display(2);
    return 0;
}