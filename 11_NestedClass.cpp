/*--> Nested Class */
#include <iostream>
class OuterClass {
public:
    OuterClass() {
        std::cout << "OuterClass constructor called" << std::endl;
    }

    void OuterFunction() {
        std::cout << "OuterFunction called" << std::endl;
    }

    // Nested class definition
    class InnerClass {
    public:
        InnerClass() {
            std::cout << "InnerClass constructor called" << std::endl;
        }

        void InnerFunction() {
            std::cout << "InnerFunction called" << std::endl;
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

