// /* Friend Function */
// #include<iostream>
// using namespace std;
// class friendfun{
//     int a,b;
//     public:
//     void getdata()
//     {
//         cout <<"Enter values of a and b: ";
//         cin >> a >> b;
//     }
//     friend void show (friendfun f);
// };
// void show(friendfun f){
//     cout << f.a << endl << f.b;
// }
// int main (){
//     friendfun f;
//     f.getdata();
//     show(f);
//     return 0;
// }


/* Friend Function acting as a bridge */
#include<iostream>
using namespace std;
class two;      //Second class declaration
class one{
    int x,y;    
    public:
        void getdata(){           
           cout << "Enter values of x and y for class one : ";
            cin >> x >> y;
        }
        friend int display(one a,two b );   //Friend function declaration with keyword friend and argument as object  
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