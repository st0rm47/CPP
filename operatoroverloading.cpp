#include<iostream>
using namespace std;
class test{
    int count;
    public:
        test(){
            count=0;
        }
        void display(){
            cout << count;
        }
        void operator ++(){
            count++;
        }
        void operator ++ (int){
            count++;
        }
};
int main(){
    test t;
    ++t;
    t++;
    t.display();
}