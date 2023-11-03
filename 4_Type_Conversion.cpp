#include<iostream>
using namespace std;
    //Namespace
    namespace first{
        int var=5;
    }
    namespace second{
        int var=6;
    }
int main(){
    //Implicit Type Conversion
    float x=3.45f;
    int y;
    y=x;
    cout << y << endl;

    //Explicit Type Conversion
    float x=3.45;
    int y;
    y=int(x);
    cout << y;

    //Dynamic Memory Allocation
    // int *a=new int(20);
    // delete a;

    //Enumeration
    enum {Sun,Mon,Tue,Wed,Thu,Fri,Sat};

    //Namespacce
    cout << first :: var << endl;
    cout << second :: var << endl;
    
}
