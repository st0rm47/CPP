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


    //Enumeration
    enum {Sun,Mon,Tue,Wed,Thu,Fri,Sat};
 
    //Namespacce
    cout << first :: var << endl;
    cout << second :: var << endl;
    
}



/*Program to Demonstrate Use of Namespace*/
#include<iostream>
using namespace std;
namespace first{
    string name = "Ben Stokes";
    int age = 34;
}
namespace second{
    string name = "Glenn Maxwell";
    int age = 35;
}

int main(){
    cout << "Details about First Cricketer" << endl;
    cout << first::name << endl;
    cout << first::age << endl;

    cout << "Details about Second Cricketer" << endl;
    cout << second::name << endl;
    cout << second::age << endl;

return 0;
}
    
