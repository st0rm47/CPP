//---> Classes
/*Class describes what the object will be.
Objects are created using classes.*/

//--->>Declaring a Class
#include<iostream>
using namespace std;
class myname{           // Declaring a class named myname using keyword: class
public:             // Access Specifier
    myname(){           //Constructor 
        cout << 45 << endl;
    }
    void name(){        // Member function inside a class
        cout << "Subodh";
    }
};
int main(){
    myname a;          // Object to access the data inside a class

    //When object is made constructor are executed automatically without calling them
    a.name();          // object with dot(.) should be used to access inside a class
    }

//Simple Program of Class
#include<iostream>
using namespace std;
class Rectangle{
private:
    int length;;
    int breadth;
public:
    void show(int length,int breadth){
    int area=length*breadth;
        cout << area ;
    }
};
int main(){
    Rectangle r;
    int l,b;
    cin >> l >> b;
    r.show(l,b);
    return 0;
    }


//Function outside the class
#include<iostream>
using namespace std;
class bio{  //class
private:
    int age;
    string name;
    float salary;
public:
    void getdata(){ // Member function inside a class
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter your salary: ";
        cin >> salary;
        cout << endl;
    }
    void data();    //Members of the class
};
void bio :: data(){     // Member function outside a class
    cout << "Name = " << name << endl;
    cout << "Age = " << age << endl;
    cout << "Salary = " << salary << endl;
    cout << endl;
}

int main(){
    bio mydata[10]; //object using array

    for(int i=0;i<2;i++){
    mydata[i].getdata();   //Function Call
    }
    for(int i=0;i<2;i++){
    mydata[i].data();      //Function Call
    }
}


//--> Program to add 2 complex numbers
//Pass by value
#include<iostream>
using namespace std;
class complex{  //class
private:
    int real;
    int imaginary;
public:
    void input(){
        cout << "Enter the real number";
        cin >> real;
        cout << "Enter the imaginary number";
        cin >> imaginary;
    }
    void sum(complex a, complex b);
    void showdata();
};
void complex :: sum(complex a, complex b){  //Function to add 2 complex numbers
    real=a.real+b.real;
    imaginary=a.imaginary + b.imaginary; 
}
void complex :: showdata(){     //Function to display the complex data
    cout << "The sum is " << real << " + " << imaginary << "i"<< endl;
}
int main(){
    complex c1,c2,c3;
    c1.input();     // function call for 1st real and imaginary number
    c2.input();     // function call for 2nd real and imaginary number
    c3.sum(c1,c2);  // function call
    c3.showdata();  // function call
    return 0;
}


// Pass by reference
#include<iostream>
using namespace std;
class complex{  //class
    private:
        int real;
        int imaginary;
    public:
        void input(){
        cout << "Enter the real number";
        cin >> real;
        cout << "Enter the imaginary number";
        cin >> imaginary;
        }
    void sum(complex &a, complex &b); //Pass by reference
    void showdata();
};
void complex :: sum(complex &a, complex &b){  //Function to add 2 complex numbers
    real=a.real+b.real;
    imaginary=a.imaginary + b.imaginary; 
}
void complex :: showdata(){     //Function to display the complex data
    cout << "The sum is " << real << " + " << imaginary << "i"<< endl;
}
int main(){
    complex c1,c2,c3;
    c1.input();     // function call
    c2.input();     // function call
    c3.sum(c1,c2);  // function call
    c3.showdata();  // function call
    return 0;
}


//Pass by Pointer
#include<iostream>
using namespace std;
class complex{  //class
    private:
        int real;
        int imaginary;
    public:
        void input(){
        cout << "Enter the real number";
        cin >> real;
        cout << "Enter the imaginary number";
        cin >> imaginary;
        }
    void sum(complex *a, complex *b);
    void showdata();
};
void complex :: sum(complex *a, complex *b){  //Function to add 2 complex numbers
    real=a->real+b->real;
    imaginary=a->imaginary + b->imaginary; 
}
void complex :: showdata(){     //Function to display the complex data
    cout << "The sum is " << real << " + " << imaginary << "i"<< endl;
}
int main(){
    complex c1,c2,c3;
    c1.input();     // function call
    c2.input();     // function call
    c3.sum(&c1,&c2);  // function call
    c3.showdata();  // function call
    return 0;
}




