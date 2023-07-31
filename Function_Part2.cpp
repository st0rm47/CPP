//Pass By value
#include<iostream>
using namespace std;
void swap(int a,int b){
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
}