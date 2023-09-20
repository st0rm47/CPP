/*--->> Operator Overloading */

/*1.Unary Operator Overloading */
#include <iostream>
using namespace std;
class counter {
private:
    int count;
public:
    // Constructor to initialize count to 0
    counter() {
        count = 0;
    }
    // Function to display the current count
    void display() {
        cout << "Count: " << count << endl;
    }
    // Prefix increment operator (++c)
    void operator++() {
        ++count;
    }
    // Postfix increment operator (c++)
    void operator++(int) {
        count++;
    }
    // Prefix decrement operator (--c)
    void operator--() {
        --count;
    }
    // Postfix decrement operator (c--)
    void operator--(int) {
        count--;
    }
};
int main() {
    counter c; // Create a counter object

    c.display(); // Display initial count (0)

    ++c; // Prefix increment operator (++c)
    c.display(); // Display updated count (1)

    c++; // Postfix increment operator (c++)
    c.display(); // Display updated count (2)

    --c; // Prefix decrement operator (--c)
    c.display(); // Display updated count (1)

    c--; // Postfix decrement operator (c--)
    c.display(); // Display updated count (0)

    return 0;
}


/*2.Unary Operator Overloading with return type*/
#include<iostream>
using namespace std;
class test{
    int count;
    public:
        test(){
            count=0;
        }
        void display(){
            cout << count << endl;
        }
        test operator ++(){     //Pre-increment operator
           ++count;
           test a;              //Object of class test
           a.count=count;       // Object value is set to the new updated value
           return a;            // return the value of object with new value
        }
        test operator ++(int){     //Post-increment operator
           count++;
           test a;              //Object of class test
           a.count=count;       // Object value is set to the new updated value
           return a;            // return the value of object with new value
        }
};
int main(){
    test t1,t2;             // Object of clss test
    t1.display();       // Display the value of t1 as 0

    ++t1;                // Increment t using pre-increment operator
    t1.display();       // Display the value of t1 as 1

    t1++;                // Increment t using post-increment operator
    t1.display();       // Display the value of t1 as 2

    t2=++t1;            // Set the value of new object as same as 1st object
    t1.display();       // Display the value of t1 as 3
    t2.display();           // Display the value of t2 as 3
}



/*3. Nameless Temporary Objects */
#include <iostream>
using namespace std;
class Point {
public:
    int x, y;

    Point(int x_, int y_) : x(x_), y(y_) {}

    // Overload the + operator to create a new Point
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }
};

int main() {
    Point p1(2, 3);
    Point p2(4, 5);

    // Creating a nameless temporary object by adding p1 and p2
    Point result = p1 + p2;

    // Printing the result
    cout << "Result: (" << result.x << ", " << result.y << ")\n";

    // The nameless temporary object is automatically destroyed after this point

    return 0;
}



/* 4. Binary Operator Overloading */
#include <iostream>
using namespace std;
class complex {
private:
    int real;
    int imaginary;
public:
    void getdata() {
        cout << "Enter the real number: ";
        cin >> real;
        cout << "Enter the imaginary number: ";
        cin >> imaginary;
    }
    void showdata() {
        cout << "The sum is " << real << " + " << imaginary << "i" << endl;
    }

    // Overloaded + operator for complex number addition
    complex operator+(complex b) {
        complex temp;
        temp.real = real + b.real;
        temp.imaginary = imaginary + b.imaginary;
        return temp;
    }
};
int main() {
    complex a, b, c;
    a.getdata();
    b.getdata();
    // Use the overloaded + operator to add a and b, and store the result in c
    c = a + b;
    c.showdata();
}

/* 5.Binary Operator Overloading with Friend function*/
#include <iostream>
using namespace std;
class complex {
private:
    int real;
    int imaginary;
public:
    void getdata() {
        cout << "Enter the real number: ";
        cin >> real;
        cout << "Enter the imaginary number: ";
        cin >> imaginary;
        cout << endl;
    }
    void showdata() {
        cout << "The sum is " << real << " + " << imaginary << "i" << endl;
    }
    friend complex operator+(complex a, complex b);
};
complex operator+(complex a, complex b) {
    complex temp;
    temp.real = a.real + b.real;
    temp.imaginary = a.imaginary + b.imaginary;
    return temp;
    }
int main() {
    complex a, b, c;
    a.getdata();
    b.getdata();
    c = a + b;
    c.showdata();
    return 0;
}