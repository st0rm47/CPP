#include<iostream>
using namespace std;

class exam{
    int x;
    public:
    void display(int x){
        this -> x =x;
        cout<< this -> x;
    }
};

int main (){
    exam e;
    e.display(2);
    return 0;s
}