// /*Function Templates*/
// /*Comparision betweeen same data type*/
// // #include<iostream>
// // using namespace std;
// // template<class A>
// // A maxnum(A a, A b){
// //     if(a>b){
// //         return a;
// //     }
// //     else
// //         return b;
// // }
// // int main(){
// //     int a=5,b=10,x;
// //     float c=2.9,d=3.9,y;

// //     x=maxnum(a,b);
// //     y=maxnum(c,d);

// //     cout << "Largest among 2 integers : " << x << endl;
// //     cout << "Largest among 2 float : " << y << endl;
// //     return 0;
// // }

// /*Comparision betweeen different data type*/
// // #include<iostream>
// // using namespace std;
// // template<class A,class B>
// // A maxnum(A a, B b){
// //     if(a>b){
// //         return a;
// //     }
// //     else
// //         return b;
// // }
// // int main(){
// //     int a=5,x;
// //     float b=2.9,y;

// //     x=maxnum(a,b);

// //     cout << "Largest among 2 numbers : " << x << endl;
// //     return 0;
// // }

// /*Overloading of Function Templates*/
// #include<iostream>
// using namespace std;
// template<class A>
// void print(A a){
//     cout << a << endl;
// }
// template<class A, class B>
// void print(A a, B b){
//     cout << a << b << endl;
// }
// int main(){
//     int a=5;
//     print(a);
//     float b = 4.5;
//     print(a,b);
// }

/*Class Templates*/
// #include<iostream>
// using namespace std;
// template<class Apple>
// class my{
//     Apple a,b;
//     public:
//     my(Apple x, Apple y){
//         a=x;
//         b=y;
//     }
//     Apple maxnum(){
//         if(a>b){
//             return a;
//         }
//         else
//             return b;
//     }
// };
// int main(){
//     my <int> m1(10,75);
//     cout << "Largest Integer = " << m1.maxnum() << endl;

//     my <float> m2(20.5,30.6);
//     cout << "Largest Float = " << m2.maxnum() << endl;
// }


#include<iostream>
using namespace std;

// Define a class template 'my' with a type parameter 'Apple'
template<class Apple>
class my{
    Apple a,b;
    public:
    my(Apple x, Apple y){
        a=x;
        b=y;
    }
    Apple maxnum();
};
// Define the member function 'maxnum' outside the class template
template < class Apple>
Apple my <Apple> :: maxnum(){
           if(a>b){
            return a;
        }
        else
            return b;
}
int main(){
    my <int> m1(10,75);
    cout << "Largest Integer = " << m1.maxnum() << endl;

    my <float> m2(20.5,30.6);
    cout << "Largest Float = " << m2.maxnum() << endl;
}