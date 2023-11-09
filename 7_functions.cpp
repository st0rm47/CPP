#include <iostream>
using namespace std;
    void hello() {      //Function definition
        cout << "Hello!" << endl;
        cout << "I am a sample function" << endl;
    }
    void bio (string name) {    //Function parameters : string
    cout << "Hello, " << name << endl;
    }
    // int sum(int x, int y) {     //Function with return value
    //     return (x+y);
    // }

    //Overloading of Functions
    void sum(int x, int y) {
        cout << x+y << endl;
    }
    void sum(double x, double y) {
        cout << x+y << endl;
    }

    int main() {
        sum(42, 31);
        sum(3.14, 5.66);    //Function calls based on type of argument

        hello();        //Function Call
        hello();        
        hello();        
        hello();        //Function can be called as many times as you want  
        bio("Subodh");

}


/*--->>ChatBot using Function*/
#include <iostream>
using namespace std;
void bot(int mode,string name) {
    if (mode ==1){
        cout << "Welcome, " << name << "!";
    }
    else if (mode == 2){
        cout << "Goodbye, " << name << "!";
    }
    else
        cout << "Try again";
    }  
int main() {
    int mode;
    cin >> mode;
    string name;
    cin >> name;

    bot(mode, name);
}


/*--->>Days to Seconds*/
#include <iostream>
using namespace std;
int toSeconds(int days){
    int second= days*24*60*60;
    return second;
}
int main() {
    int days;
    cin >> days;

    int seconds = toSeconds(days);
    cout << seconds;
}


//Pass By value
#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=5,b=3;
    swap(a,b);
    cout << "After Function Call" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b;

    /*Values of x and y were passed but not variables x and y*/
}

//Pass By reference
#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    }
int main(){
    int x=5,y=3;
    swap(x,y);
    cout << "After Function Call" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y;

    /*Variables x and y were passed but not values.
    When function is called, it points to the memory location of x and y*/
}

//Pass By Pointers
#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    }
int main(){
    int x=5,y=3;
    swap(&x,&y);
    cout << "After Function Call" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y;

    /*Address of variables x and y were passed but not values.
    When function is called, it points to the memory location of x and y*/
}