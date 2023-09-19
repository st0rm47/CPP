/*--> Nested Class */
#include <iostream>
using namespace std;
class OuterClass {
public:
    OuterClass() {
        cout << "OuterClass constructor called" << endl;
    }

    void OuterFunction() {
        cout << "OuterFunction called" << endl;
    }

    // Nested class definition
    class InnerClass {
    public:
        InnerClass() {
            cout << "InnerClass constructor called" << endl;
        }

        void InnerFunction() {
            cout << "InnerFunction called" << endl;
        }
    };
};

int main() {
    OuterClass outerObject;
    outerObject.OuterFunction();

    // Creating an instance of the nested class
    OuterClass::InnerClass innerObject;
    innerObject.InnerFunction();

    return 0;
}

