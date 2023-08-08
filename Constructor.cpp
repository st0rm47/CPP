//--->>Constructor
    /*Special member function
     Initializes object 
    Name same as class name */

//--->> Default Constructor
//1.
#include<iostream>
using namespace std;
class naya {        //class
    int a,b;
    public:
        naya(){     //constructor
            cout << "Enter values of a and b: ";
            cin >> a >> b;
            cout << a << endl << b;
        }
};
int main(){
    naya n;         //object created
}

//2.
#include<iostream>
using namespace std;
class test{
    int x,y;
    public:
        test(){     //constructor
        
            x=5;
            y=10;
        }
        void show(){
            cout << x << endl << y;

        }
};
int main(){
    test t;
    t.show();
}



//--->> Parametrized Constructor
//1.
#include <iostream>
#include <string>
using namespace std;
class Painting {        //class
    private:
        string name;
    public:
        Painting(string name){      //constructor
        
            cout << name;
        }
};
int main() {
    string name;
    cin >> name;

    Painting painting(name);        //used constructor to pass the value

    return 0;
}

//2.
#include<iostream>
using namespace std;
class naya {        //class
    int x,y;
    public:
        naya(int a,int b){     //constructor with arguments
            x=a;
            y=b;
            cout << x << "\t" << y << endl;
        }
};
int main(){
    naya n(3,4);         //object created
    naya n2(4,5);
    return 0;
}

// --->> Copy Constructor
// 1.
 #include<iostream>
using namespace std;
class test{
    int x,y;
    public:
    test(){
        cout << "Enter the value of x: ";
        cin >> x;
    }
    test (test &t)
    {
        cout << t.x;
    }
};
int main (){
    test t1;
    test t2=t1;
    // test t2(t1);
}