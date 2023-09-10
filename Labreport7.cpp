/*1. WAP to resolve ambiguity in multiple inheritance.*/
#include<iostream>
using namespace std;
class A {
public:
	void show() {
		cout << "I love JavaScript" << endl;
	}
};
class B {
public:
	void show() {
		cout << "I love C++" << endl;
	}
};
class coding: public A, public B{
public:
    // Member function in class C, which overrides the show() method
    void show() {
        // Call the show() method of class A using A::show()
        A::show();
        // Call the show() method of class B using B::show()
        B::show();
    }
};
int main() {
    coding c;
    c.show();
	return 0;
}


/*2. WAP to illustrate concept of function overriading.*/
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


/*3. WAP to abstract class using concept of pure virtual function.*/
#include<iostream>
using namespace std;
class Base{
public:
    virtual double area() =0;   // pure virtual function since it's only defined in base class
                                // also '=0 ' is used only for virtual :) 
};
class Square: public Base{ //Subclass aka. derived class
private:
    double length;
public:
    Square (double l){ //Constructor
        length = l;
    }
    double area(){
        return length*length;
    }
};
int main(){
    Square s(4.44);
    cout << "Area of Square is: "<< s.area() << endl;
    return 0;
}



/*4. WAP to illustrate the use of virtual function.*/
#include <iostream>
using namespace std;
class College {
public:
    virtual void faculty() {
        cout << "We are experienced in following faculties: " << endl;
    }
};
class CSIT : public College {
public:
    void faculty(){
        cout << "CSIT = Computer Science and Information Technology" << endl;
    }
};
class BCA : public College {
public:
    void faculty(){
        cout << "BCA = Bachelor of Computer Appllications" << endl;
    }
};
int main(){
    // Declare a base class pointer 'a' and objects of derived classes
    College *a, c;
    BCA b;
    CSIT cs;
      
    // Point 'a' to object 'c' and call faculty
    a = &c;
    a->faculty();

    // Point 'a' to object 'cs' and call faculty
    a = &cs;
    a->faculty();

    // Point 'a' to object 'b' and call faculty
    a = &b;
    a->faculty();
    return 0;
}

/*5. WAP to solve ambiguity problem in multipath inheritance with the concept of virtual class.*/
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
