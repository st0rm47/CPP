#include<iostream>
using namespace std;

class exam{
    int x;
    public:
    exam(){
        x=10;
        cout<<x<<endl;
    }
    void display(int x){
        this -> x =x;
        cout<< this -> x<<endl;
    }
};

int main (){
    exam e;
    e.display(2);
    return 0;
}