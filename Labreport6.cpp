// /*1. WAP to resolve ambiguity in multiple inheritance.*/
// #include<iostream>
// using namespace std;
// class A {
// 	public:
// 	void show() {
// 		cout << " I am in class A" << endl;
// 	}
// };
// class B {
// 	public:
// 	void show() {
// 		cout << " I am in class B" << endl;
// 	}
// };
// class C: public A, public B {
// public:
//     // Member function in class C, which overrides the show() method
//     void show() {
//         // Call the show() method of class A using A::show()
//         A::show();
//         // Call the show() method of class B using B::show()
//         B::show();
//     }
// };
// int main() {
// 	C obj;
//     obj.show();
// 	return 0;
// }


/*2. WAP to illustrate concept of function overriading.*/
#include<iostream>
using namespace std;
class A {
	public:
	void show() {
		cout << " I am in class A" << endl;
	}
};
class B: public A{
	public:
	void show() {
		cout << " I am in class B" << endl;
	}
};
int main() {
	B b;
    A *ptr=&b;
    ptr->show();
	return 0;
}
/*3. WAP to abstract class using concept of pure virtual function.*/

/*4. WAP to illustrate the use of virtual function.*/

/*5. WAP to solve ambiguity problem in multipath inheritance with the concept of virtual class.*/
// C++ program to show inheritance ambiguity

#include<iostream>
using namespace std;
class A{
    
}