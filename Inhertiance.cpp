/*--->Types of Inheritance*/

/*--->Single Inheritance
    class a{

    };
    class b: public a{

    };

    one base class and one derived class */


/*--->Multiple Inheritance 
    class a{

    };
    class b{

    };
    class c: public a,public b{

    };

    two base class and one derived class */


/*--->Hiearchical Inheritance
    class a{

    };
    class b:public a{

    };
    class c: public a{

    };

    one base class and two derived class */


/*--->Multilevel Inheritance 
    class a{                //grandparent

    };
    class b:public a{       //parent

    };
    class c: public b{      //child

    };

    one grandparent,one parent and one child */


/*--->Hybrid Inheritance (one grandparent,two parents and one child)
    class a{                     //grandparent

    };
    class b:public a{            //parent

    };
    class c: public a{          //parent
   
    };
    class d:public b,public c{  //child

    };

    one grandparent,two parent and one child */


//Function Overriding or Ambuigity
#include<iostream>
using namespace std;   
class A{
    int a;
    public:
    void show(){        //Overridden Function
        cout <<"a";
    }
};
class B:public A{
    int b;
    public:
    void show(){        //Overiding Function
        cout << "b";
        /* A::show();      //to overcome Ambuigity */
    }
};
int main(){
    B b;
    b.show();
    b.A::show();        //To overcome Ambuigity
}
    