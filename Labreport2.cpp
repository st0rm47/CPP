//WAP to show the concept of friend
#include<iostream>
using namespace std;
class friendfun{
    int a,b;
    public:
    void getdata()
    {
        cout <<"Enter values of a and b: ";
        cin >> a >> b;
    }
    friend friendfun show (friendfun f);
};
friendfun show(friendfun f){
    cout << f.a << endl << f.b;
    return f;
}
int main (){
    int c;
    friendfun f;
    f.getdata();
    show(f);
    return 0;
}



// //WAP to show the friend function acting as bridge between two classes.
// // #include<iostream>
// // using namespace std;

// // class two; // pre-declaration

// // class one {
// //     int x;  

// // public:
// //     void access(){
// //         cout<<"enter the value of x: ";
// //         cin>>x;
// //     }
// //     friend void bridge(one, two);
// // }; //end of class one

// // class two {
// //     int y;

// // public:
// //     void access() {
// //         cout<<endl<<"Enter the value of y: ";
// //         cin>>y;
// //     }
// //     friend void bridge(one,two);
// // };//end of class two

// // void bridge(one objA, two objB) {
// //     int z;
// //     z= objA.x+objB.y;
// //     cout<<endl<<"Sum is: "<<z;
// // }


// // int main() {
// //    one obj1;
// //    two obj2;
// //    obj1.access();
// //    obj2.access();
// //    bridge(obj1,obj2);
// // }


#include<iostream>
using namespace std;
class two;
class one{
    int x,y;    
    public:
        void getdata(){           
           cout << "Enter values of x and y for class one : ";
            cin >> x >> y;
        }
        friend int display(one a,two b );  
};
class two{
    int x,y;
    public:
        void getdata(){            
           cout << "Enter values of x and y for class two :";
            cin >> x >> y;
        }
        friend int display(one a,two b); 
};
int display(one a,two b){     
    return a.x+b.x;
    return a.y+b.y;;
}
int main(){
one a;     
two b;
a.getdata();
b.getdata();
cout << display(a,b) << endl;
cout << display(a,b);
return 0;
}



//WAP to show friend class.
// #include <iostream>
// using namespace std;

// class newone; // pre-declaration
// class MyClass {
//     int x;

// public:
//     void setX() {
//         cout << "Enter the value of x: ";
//         cin >> x;
//     }

//     friend class Display;
// };

// class Display {
// public:
//     void access(MyClass obj) {
//         cout << "The value of x is: " << obj.x << endl;
//     }
// };

// int main() {
//     MyClass obj;
//     obj.setX();

//     Display friendObj;
//     friendObj.access(obj);

//     return 0;
// }
#include<iostream>
using namespace std;
class newone{
    int x,y;
        friend class newstone;
};
class newstone{
    public:
    void getdata(newone a){
        cout << "Enter values of x and y: ";
        cin >> a.x >> a.y;
        cout << a.x+a.y;
    }
};
int main(){
    newone a;
    newstone m;
    m.getdata(a);
    return 0;
}