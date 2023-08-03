//Using friend function

#include<iostream>
using namespace std;
class friendfun
{
    int x,y;
    public:
    void getdata()
    {
        cout<<"Enter x and y: ";
        cin>>x>>y;
    }
    friend friendfun show (friendfun a);
};
friendfun show(friendfun a)
{
    cout<<a.x<<endl<<a.y;
    return a;
}

int main (){
    int c;
    friendfun a;
    a.getdata();
    show(a);
    return 0;
}



//WAP to show the friend function acting as bridge between two classes.
#include<iostream>
using namespace std;

class two; // pre-declaration

class one {
    int x;  

public:
    void access(){
        cout<<"enter the value of x: ";
        cin>>x;
    }
    friend void bridge(one, two);
}; //end of class one

class two {
    int y;

public:
    void access() {
        cout<<endl<<"Enter the value of y: ";
        cin>>y;
    }
    friend void bridge(one,two);
};//end of class two

void bridge(one objA, two objB) {
    int z;
    z= objA.x+objB.y;
    cout<<endl<<"Sum is: "<<z;
}


int main() {
   one obj1;
   two obj2;
   obj1.access();
   obj2.access();
   bridge(obj1,obj2);
}



//WAP to show friend class.
#include <iostream>
using namespace std;

class one; // pre-declaration

class MyClass {
    int x;

public:
    void setX() {
        cout << "Enter the value of x: ";
        cin >> x;
    }

    friend class Display;
};

class Display {
public:
    void access(MyClass obj) {
        cout << "The value of x is: " << obj.x << endl;
    }
};

int main() {
    MyClass obj;
    obj.setX();

    Display friendObj;
    friendObj.access(obj);

    return 0;
}
