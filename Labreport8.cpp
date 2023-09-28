/*1.WAP to find the largest among two numbers using function template.*/
#include<iostream>
using namespace std;

template<class A>
A maxnum(A a, A b){
    A result;
    result = (a>b)?a:b;
    return result;
}
int main(){
    int a=5,b=10,x;
    float c=2.9,d=3.9,y;

    x=maxnum(a,b);
    y=maxnum(c,d);

    cout << "Largest among 2 integers : " << x << endl;
    cout << "Largest among 2 float : " << y << endl;
    return 0;
}

/*2.WAP to swap data using template function.*/
#include<iostream>
using namespace std;
template<Class A>
A swapdata

/*3.WAP to build simple calculator using class template.*/
#include<iostream>
using namespace std;
template <class A>
class Calculator{
    private:
        A a,b;
    public:
        Calculator (A x, A y){
            a=x;
            b=y;
        }
        A add(){
            return a+b;
        }
        A sub(){
            return a-b;
        }
        A mul(){
            return a*b;
        }
        A div(){
            return a/b;
        }
        void display();
};
template <class A>
void Calculator <A> :: display(){
    cout << "Numbers: " << a << " and " << b << endl;
    cout << a << " + " << b << " = " << add() << endl;
    cout << a << " - " << b << " = " << sub() << endl;
    cout << a << " * " << b << " = " << mul() << endl;
    cout << a << " / " << b << " = " << div() << endl;
}
int main(){
    Calculator <int> c1(2,4);
    Calculator <float> c2(3.5,4.5);

    cout << endl << "Caclulator for Integers: " << endl;
    c1.display();

    cout << endl << "Caclulator for Float: " << endl;
    c2.display();
}

/*4.WAP to find sum of numbers using function template overloading.*/
#include<iostream>
using namespace std;
template<class A>
void print(A a){
    cout << a << endl;
}
template<class A, class B>
void print(A a, B b){
    cout << a << b << endl;
}
int main(){
    int a=5;
    print(a);
    float b = 4.5;
    print(a,b);
}

/*5.WAP to find sum of array using function template.*/