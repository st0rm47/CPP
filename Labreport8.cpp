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
    cout << "Largest among 2 floating  : " << y << endl;
    return 0;
}


/*2.WAP to swap data using template function.*/
#include<iostream>
using namespace std;
template<class A>
void swap(A *x,A *y){
	A temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
	int a,b;
	cout << "Enter two integer numbers: ";
	cin >> a >> b;
	cout << "Before Swapping: " << endl << "a = " << a << " and b = "<< b << endl;
	swap(&a,&b);
	cout << "After Swapping: " << endl << "a = " << a << " and b = " << b << endl;
	
    float c,d;
    cout << "Enter two floating numbers: " ;
	cin >> c >> d;
	cout << "Before Swapping: " << endl << "c = " << c << " and d = "<< d << endl;
	swap(&c,&d);
	cout << "After Swapping: " << endl << "c = " << c << " and d = " << d << endl;
	
    return 0;
}


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
    int a,b;
    cout << "Enter two integer numbers: ";
    cin >> a >> b;

    float c,d;
    cout << "Enter two floating numbers: " ;
    cin >> c >> d;

    Calculator <int> c1(a,b);
    Calculator <float> c2(c,d);

    cout << endl << "Calculator for Integers: " << endl;
    c1.display();

    cout << endl << "Calculator for Float: " << endl;
    c2.display();
}


/*4.WAP to find sum of numbers using function template overloading.*/
#include<iostream>
using namespace std;
template<class A, class B>
void sum(A a,B b){
    cout << a << " + " << b << " = " << a+b  << endl;
}
template<class A, class B, class C>
void sum(A a,B b,C c){
    cout << a << " + " << b << " + " << c << " = " << a+b+c << endl;
}
int main(){
    int a,b;
	cout << "Enter two integer numbers: ";
	cin >> a >> b ;
    sum(a,b);

    float c,d,e;
	cout << "Enter three floating numbers: ";
	cin >> c >> d >> e;
    sum(c,d,e);

    return 0;
}


/*5.WAP to find sum of array using function template.*/
#include <iostream>
using namespace std;
template <class A>
A arraySum(A a[],int n) {
    A sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    int intSum = arraySum(intArray,5);
    cout << "Sum of the integer array: " << intSum << endl;

    double doubleSum = arraySum(doubleArray,5);
    cout << "Sum of the double array: " << doubleSum << endl;

    return 0;
}
