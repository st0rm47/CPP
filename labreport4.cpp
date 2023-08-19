/* 1. WAP to overload unary operators i.e increment and decrement.*/
#include<iostream>
using namespace std;
class test{
private:
    int count;
public:
    test(){
        count=0;
    }
    void display(){
        cout << count << endl;
    }
    void operator ++(){     
        ++count;
    }
    void operator -- (int){     
        count--;
    }
};
int main(){
    test t;             
    t.display();       
    ++t;                
    t.display();       
    t--;                
    t.display();       
}



/*2. WAP to overload + operator to add two complex numbers.*/
#include <iostream>
using namespace std;
class complex {
private:
    int real;
    int imaginary;
public:
    void getdata() {
        cout << "Enter the real number: ";
        cin >> real;
        cout << "Enter the imaginary number: ";
        cin >> imaginary;
    }
    void showdata() {
        cout << "The sum is " << real << " + " << imaginary << "i" << endl;
    }
    complex operator+(complex a) {
        complex temp;
        temp.real = real + a.real;
        temp.imaginary = imaginary + a.imaginary;
        return temp;
    }
};
int main() {
    complex a, b, c;
    a.getdata();
    b.getdata();
    c = a + b;
    c.showdata();
}



/*3. WAP to overload + operator to concatenate two strings.*/
#include<iostream>
using namespace std;
class str{
private:
    string name;
public:
    str(){
        name=" ";
    }
    str(string b){
        name=b;
    }
    void getdata() {
        cout << "Enter a string: ";
        cin >> name;
    }
    void show(){
        cout << name;
    }
    str operator +(str a){
        str temp;
        temp.name=name+a.name;
        return temp;
    }
};
int main(){
    str a,b,c;
    a.getdata();
    b.getdata();
    c=a+b;
    c.show();
}


/*4. WAP to two complex numbers using operator overload by friend function.*/
#include <iostream>
using namespace std;
class complex {
private:
    int real;
    int imaginary;
public:
    void getdata() {
        cout << "Enter the real number: ";
        cin >> real;
        cout << "Enter the imaginary number: ";
        cin >> imaginary;
    }
    void showdata() {
        cout << "The sum is " << real << " + " << imaginary << "i" << endl;
    }
    friend complex operator+(complex a, complex b) {
        complex temp;
        temp.real = a.real + b.real;
        temp.imaginary = a.imaginary + b.imaginary;
        return temp;
    }
};
int main() {
    complex a, b, c;
    a.getdata();
    b.getdata();
    c = a + b;
    c.showdata();
}



/* 5. WAP overloading <= operator which in turn can be used for user defined object for a class "distance" to compare two distance objects.*/
#include<iostream>
using namespace std;

class 