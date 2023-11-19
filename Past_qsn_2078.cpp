/* 2078 */

/*QSN 1.*/
#include <iostream>
using namespace std;
class Account {
private:
    int accNo;
    double balance;
    static double minBalance; // Static member for minimum balance
public:
    Account() {
        accNo = 0;
        balance = 0.0;
    }
    void readData() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Balance: ";
        cin >> balance;
    }
    void displayData() {
        cout << "Account Number: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
    static void displayMinBalance() {
        cout << "Minimum Balance: " << minBalance << endl;
    }
};

// Initialize the static member minBalance
double Account::minBalance = 1000.0;

int main() {
    Account accounts[5];

    // Read data for each account
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for Account " << i+1 << endl;
        accounts[i].readData();
    }

    // Display data for each account
    cout << "\nAccount Details:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\nAccount " << i + 1 << ":" << endl;
        accounts[i].displayData();
    }

    // Display the minimum balance using the static member function
    Account :: displayMinBalance();
    return 0;
}


/*QSN 2.*/
/*Meters to Feet (Source)*/
#include <iostream>
using namespace std;
class feet_inch{        //Destination Class
    int feet;
    int inch;
public:
    feet_inch(){
        feet=0;
        inch=0;
    }
    feet_inch(int f,int i){
        feet=f;
        inch=i;
    }
    void display(){
        cout << feet << " ft " << inch << " inch " << endl; 
    }
};
class meters{   //Source Class
    int meter;
    int centimeter;
public:
    meters(int m,int cm){
        meter=m;
        centimeter=cm;
    }
    operator feet_inch(){
        feet_inch f1;
        int f,i;
        f=meter*3.3;
        i=centimeter*0.4;
        f=f+i/12;
        i=i%12;
        return feet_inch(f,i);
    }
};
int main(){
    meters m1(4,50);
    feet_inch f1;
    f1=m1;
    f1.display();
    return 0;
}



/*Meters to Feet (Destination)*/
#include <iostream>
using namespace std;
class meters{   //Source Class
    int meter;
    int centimeter;
public:
    meters(int m,int cm){
        meter=m;
        centimeter=cm;
    }
    int getm(){
        return meter;
    }
    int getcm(){
        return centimeter;
    }
};
class feet_inch{    //Destination CLass
    int feet;
    int inch;
public:
    feet_inch(){
        feet=0;
        inch=0;
    }
    feet_inch(int f,int i){
        feet=f;
        inch=i;
    }
    feet_inch(meters m1){ 
        int m,cm;
        m=m1.getm();
        cm=m1.getcm();
        feet=m*3.3;
        inch=cm*0.4;
        feet=feet+inch/12;
        inch=inch%12;
    }
    void display(){
        cout << feet << " ft " << inch << " inch " << endl;
    }
};
int main(){
    meters m1(4,50);
    feet_inch f1;
    f1=m1;
    f1.display();
    return 0;
}


/*QSN. 3*/
/*Ambiguity in Multipath Inheritance*/
#include<iostream>
using namespace std;
class A{                            // GrandParent Class
    public:
    void show(){
        cout << "I am A" << endl;
    }
};
class B: virtual public A{          // Virtual in Parent Class
    public:
    void show(){
        cout << "I am B" << endl;
    }
};
class C: virtual public A{         // Virtual in Parent Class
    public:
    void show(){
        cout << "I am C" << endl;
    }
};
class D:public B,public C{          // Child Class
    public:
    void show(){
        A::show();
        B::show();
        C::show();
        cout << "I am D" << endl;
    }
};
int main(){
    D d;
    d.show();
    return 0;
}

/*Ambiguity in Multiple Inheritance*/
#include<iostream>
using namespace std;
class A {               //Parent Class
	public:
	void func() {
		cout << " I am in class A" << endl;
	}
};
class B {               //Parent Class
	public:
	void func() {
		cout << " I am in class B" << endl;
	}
};
class C: public A, public B {       //Child Class
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


/*QSN. 5*/
/*Get*/
#include <iostream>
using namespace std;
int main() {
    char name[20];
    cout << "Enter a string: ";
    cin.get(name,20);
    cout << "You entered: " << name << endl;
    return 0;
}

/*Getline*/
#include <iostream>
using namespace std;
int main() {
    string name;
    cout << "Enter a string: ";
    getline(cin,name);
    cout << "You entered: " << name << endl;
    return 0;
}


/*QSN. 6*/
#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int a =10, b=20;
    swap(a,b);
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
}


/*QSN. 9*/
#include<iostream>
using namespace std;
 
int main(){
    int num,den,index;

    cout << "Enter index :";
    cin >> index;
    try{
        if (index < 0 || index > 4){
            throw "Array out of bounds";
        }

        cout << "Enter numerator and denominator: ";
        cin >> num >> den;

        if(den==0){
            throw 0;
        }
    }
    catch(const char *msg){
        cout << msg << endl;
    }
    catch(int num){
        cout << "Cannot divide by " << num << endl;
    }
    catch(...){
        cout << "Unexpected Errors";
    }
    return 0;
}


/*QSN. 10*/
#include<iostream>
#include<string>
using namespace std;

template <class A>
class Stack {
    int top;    //Top of stack
    A st[100];  //Array to store elements

public:
    Stack() {
        top = -1;
    }
    void push(A i) {
        st[++top] = i;
    }
    A pop() {
        return st[top--];
    }
};
int main() {
    Stack <int> s1;
    Stack <string> s2;

    s1.push(20);
    cout << "Integer in Stack= " << s1.pop() << endl;

    s2.push("Hello");
    cout << "String in Stack= " << s2.pop() << endl;

    return 0;
}


/*QSN. 11*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char str[30];
    ifstream file;       //ifstream used for reading the file
    file.open("data.txt");
    while(!file.eof()){
            file >> str;
            cout << str;
    }
    file.close();
    return 0;
    
}