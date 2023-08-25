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


// C++ program to show inheritance ambiguity
#include<iostream>
using namespace std;
class A {
	public:
	void func() {
		cout << " I am in class A" << endl;
	}
};
class B {
	public:
	void func() {
		cout << " I am in class B" << endl;
	}
};
class C: public A, public B {

};
int main() {
	C obj;
	/* obj.func();     //shows ambiguity */

    // Calling function func() in class A
    obj.A::func();
 
    // Calling function func() in class B
    obj.B::func();
 
	return 0;
}

    