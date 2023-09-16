/* Pure Virtual Functions */
#include<iostream>
using namespace std;
class Base{
public:
    virtual double area() = 0;   
    /*pure virtual function since it's only defined in base class
    also '=0 '  is used only for virtual */
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

/* Virtual Functions    Dynamic Polymorphism*/
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