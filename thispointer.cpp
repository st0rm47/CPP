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
<<<<<<< HEAD
    return 0;
=======
    return 0;s
>>>>>>> 47e16af156bd7ccdbc614e8bd1e040d69415076a
}