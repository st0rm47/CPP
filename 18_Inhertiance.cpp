/*--->Types of Inheritance*/

/*1.Single Inheritance
    class a{
 
    };
    class b: public a{

    };

    one base class and one derived class */
//Example:
#include<iostream>
using namespace std;
class Vehicle {     // base class
public:
	Vehicle(){
	cout << "This is a Vehicle\n";
	}
};
class Car : public Vehicle {    // sub class derived from a single base classes

};
int main(){
	Car obj;
	return 0;
}

/*2.Multiple Inheritance 
    class a{

    };
    class b{

    };
    class c: public a,public b{

    };

    two base class and one derived class */
//Example:
#include <iostream>
using namespace std;
class Vehicle {	// Base Class
public:
	Vehicle() { 
        cout << "This is a Vehicle\n"; }
};
class FourWheeler {	// Base Class
public:
	FourWheeler() {
		cout << "This is a 4 wheeler Vehicle\n";
	}
};
class Car : public Vehicle, public FourWheeler {

};

int main(){
	Car obj;
	return 0;
}



/*3.Hiearchical Inheritance
    class a{

    };
    class b:public a{

    };
    class c: public a{

    };

    one base class and two derived class */
//Example:
#include <iostream>
using namespace std;
class Vehicle {
public:
	Vehicle() { 
        cout << "This is a Vehicle\n"; }
};
class Car : public Vehicle {

};
class Bus : public Vehicle {

};
int main(){
	Car obj1;
	Bus obj2;
	return 0;
}



/*4. Multilevel Inheritance 
    class a{                //grandparent

    };
    class b:public a{       //parent

    };
    class c: public b{      //child

    };

    one grandparent,one parent and one child */
//Example:
#include <iostream>
using namespace std;
class Vehicle {
public:
	Vehicle() { 
        cout << "This is a Vehicle\n"; }
};
class fourWheeler : public Vehicle {
public:
	fourWheeler(){
		cout << "Objects with 4 wheels are vehicles\n";
	}
};
class Car : public fourWheeler {
public:
	Car() { 
        cout << "Car has 4 Wheels\n"; }
};
int main(){
	Car obj;
	return 0;
}

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


/*--->Access Specifier for Data */
#include<iostream>
using namespace std;
class Base{
    private:
        int x;
    protected:
        int y;
    public: 
        int z;
};
class Derived : public Base{
    public:
    void getdata(){
        cout << "Enter x: " << endl;
        cin >> x;
        /*Creates an error because x is private data*/

        cout << "Enter y: " << endl;
        cin >> y;
        /*Y is protected data accessible from Derived Class,OWn class*/
       
        cout << "Enter z: " << endl;
        cin >> z;
        /*z is public data accessible from Derived Class,Own class and outside the class using objects*/
    }
};
int main(){
    Derived d;
    d.getdata();
    cout << d.x << endl;
    /*Not Accessible: X is private*/

    cout << d.y << endl;
    /*Not Accessible: Y is protected*/

    cout << d.z << endl;
    /*Accessible: Z is public*/
}


/* Function Overriding */
#include<iostream>
using namespace std;
class College{
public:
    void show(){
        cout << "This is Madan Bhandari Memorial College" << endl;
    }
};
class Batch : public College{
public:
    void show(){   
        cout <<"We are 2079 Batch" << endl;
    }
};
int main(){
    Batch b;
    b.show(); //Calling member function from class Batch
    b.College::show(); //Accessing class College through class Batch
    return 0;
}

/*Multipath Inheritance = Hybrid Inheritance*/


// C++ program to show inheritance ambiguity in multipath inheritance
#include<iostream>
using namespace std;
class Person {
public:
    void display(){
        cout << "Name = Subodh Ghimire" << endl;
    }
};

// Derived class Employee, inheriting virtually from Person
class Employee : virtual public Person {
public:
    void display() {
        cout << "Salary = 40,000 " << endl;
    }
};

// Derived class Student, inheriting virtually from Person
class Student : virtual public Person {
public:
    void display() {
        cout << "ID = 23 " << endl;
    }
};

class TuitionTeacher : public Employee, public Student {
public:
    void display() {
        // Call the display function from the Person class
        Person::display();   

        // Call the display function from the Employee class
        Employee::display(); 

        // Call the display function from the Student class 
        Student::display();   

        cout << "Course = BSc. CSIT " << endl;
    }
};
int main() {
    TuitionTeacher t1;
    t1.display();
    return 0;
}


// C++ program to show inheritance ambiguity in multiple inheritance
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
    public:
    void func(){
    //Calling function func() in class A
    A::func();
 
    // Calling function func() in class B
    B::func();
    }
};
int main() {
	C c;
	c.func();     //shows ambiguity */
	return 0;
}