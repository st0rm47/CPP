/*1.WAP to find the largest among two numbers using function template.*/
#include<iostream>
using namespace std;

template<class A>
A maxnum(A a,A b){
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

/*3.WAP to build simple calculator using class template.*/

/*4.WAP to find sum of numbers using function template overloading.*/

/*5.WAP to find sum of array using function template.*/