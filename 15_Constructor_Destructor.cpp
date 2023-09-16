/* --->>Constructor */
    /*Special member function
     Initializes object 
    Name same as class name */


/*--> Default Constructor */
/*Accepts no paramters
When object is created default constructor is called automatically */
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



/*--> Parametrized Constructor */
/* Accepts parameters*/
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


/*--> Copy Constructor */
/* Aloows an object to be initialized with another object of same class*/
#include<iostream>
using namespace std;
class test{
    int x,y;
    public:
        test(){
        cout << "Enter the value of x: ";
        cin >> x;
        }
        test (test &t){
        cout << t.x;
        }
};
int main (){
    test t1;
    // test t2=t1;
    test t2(t1);
}

/*--> Constructor Ovreloading*/
#include<iostream>
using namespace std;
class rectangle {
private:
    int length;
    int breadth;
public:
    rectangle() {
        length = 0;
        breadth = 0;
    }
    rectangle(int x, int y) {
        length = x;
        breadth = y;
    }
    rectangle(int z) {
        length = breadth = z;
    }
    int area() {
        return length * breadth;
    }
};
int main() {
    rectangle r;
    cout << "Area of rectangle: " << r.area() << endl;
    
    int x, y;
    cout << "Enter length and breadth: ";
    cin >> x >> y;
    rectangle r1(x, y);
    cout << "Area of rectangle 1: " << r1.area() << endl;

    int z;
    cout << "Enter length for rectangle: ";
    cin >> z;
    rectangle r2(z);
    cout << "Area of rectangle 2: " << r2.area() << endl;
    return 0;
}

/*--> Destructor*/
    /* Member function whose name is same as class
    Preceeded by a tilde(~)
    Doesn't return any value and doesn't takes arguments
    To clean up the storage that is no longer required */

#include<iostream>
using namespace std;
class Test
{
    public:
    Test()//constructor
    {
    cout<<"\nControl is in constructor";
    }
    ~Test()//destructor
    {
    cout<<"\n Control is in destructor";
    }
};
int main(){
    Test t; //constructor is called
    cout<<"Function main() terminating...";
    //object t goes out of scope, destructor is called
    }