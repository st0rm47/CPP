/*1. WAP to resolve ambiguity in multiple inheritance.*/
#include<iostream>
using namespace std;
class A {
	public:
	void show() {
		cout << " I am in class A" << endl;
	}
};
class B {
	public:
	void show() {
		cout << " I am in class B" << endl;
	}
};
class C: public A, public B {
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
	C obj;
    obj.show();
	return 0;
}


// /*2. WAP to illustrate concept of function overriading.*/
#include<iostream>
using namespace std;
class College{
    public:
    void show(){
        cout << "This is MBM College" << endl;
    }
};
class CSIT: public College{
    public:
    void show(){   
        cout<<"This is CSIT stream"<<endl;
    }
};

int main(){
    CSIT c;
    c.show(); //Calling member function from class CSIT
    c.College::show(); //Accessing class College through class CSIT
    return 0;
}
/*3. WAP to abstract class using concept of pure virtual function.*/

/*4. WAP to illustrate the use of virtual function.*/

/*5. WAP to solve ambiguity problem in multipath inheritance with the concept of virtual class.*/
#include<iostream>
using namespace std;

class Person {
public:
    void showdata() {
        cout << "Name = Subodh" << endl;
    }
};

class Employee : virtual public Person {
public:
    void showdata() {
        cout << "Salary = 40,000 " << endl;
    }
};

class Student : virtual public Person {
public:
    void showdata() {
        cout << "ID = 23 " << endl;
    }
};

class TuitionTeacher : public Employee, public Student {
public:
    void showdata() {
        Person::showdata();    // Specify the class scope to resolve ambiguity
        Employee::showdata();  // Specify the class scope to resolve ambiguity
        Student::showdata();   // Specify the class scope to resolve ambiguity
        cout << "Course = BSc. CSIT " << endl;
    }
};

int main() {
    TuitionTeacher tt;
    tt.showdata();
    return 0;
}
