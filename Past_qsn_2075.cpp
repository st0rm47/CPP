/*2075*/

/*QSN. 1*/
/*Object to object (destination)*/

/* Example No 1."Meters to Feet" */
#include<iostream>
using namespace std;
class meters{       //Source Class
    private:
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
class feets{       //Destination Class
    private:
        int feet;
        int inch;
    public:
        feets(){
            feet=0;
            inch=0;
        }
        feets(int f,int i){         
            feet=f;
            inch=i;
        }
        feets(meters m1){       //Routine in Destination Class
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
    feets f1;
    meters m1(3,20);
    f1=m1;
    f1.display();
    return 0;
}


/* Example No 2."Celsius to Fahrenheit" */
#include<iostream>
using namespace std;
class Celsius{
    private:
        float celsi;
    public:
        Celsius(float c){
            celsi=c;
        }
        float getcelsius(){
            return celsi;
        }
};
class Fahrenheit{
    private:
        float fahren;
    public:
        Fahrenheit(){
            fahren=0;
        }
        Fahrenheit(float f){
            fahren=f;
        }
        Fahrenheit(Celsius c1){
            float c;
            c=c1.getcelsius();
            fahren=((c*9/5)+32);
        }
        void display(){
            cout << "Temperature = " << fahren << endl;
        }
};
int main(){
    Fahrenheit f1;
    Celsius c1(15.3);
    f1=c1;
    f1.display();
    return 0;
}


// /*QSN. 2*/

// /*QSN. 3*/

/*QSN. 4*/
#include <iostream>
using namespace std;

class String {
public:
    void reverseit(string& str) {
        int length = str.length();
        int n = length - 1;  // Initialize n to the last index of the string
        char temp;  // Declare a temporary variable for swapping

        for (int i = 0; i < length/2; i++) {
            temp = str[i];
            str[i] = str[n];
            str[n] = temp;
            n--;
        }
    }
};
int main() {
    String s1;
    string input = "Hello, World!";
    cout << "Original String: " << input << endl;
    s1.reverseit(input);
    cout << "Reversed String: " << input << endl;
    return 0;
}


/*QSN. 5*/
#include <iostream>
using namespace std;

// Function with default arguments
void printMessage(string message = "Hello", int times = 1) {
    for (int i = 0; i < times; ++i) {
        cout << message << " ";
    }
    cout << endl;
}

int main() {
    // Calls with all arguments provided
    printMessage("Hi", 3);  // Output: Hi Hi Hi

    // Calls with only the first argument provided
    printMessage("Hey");    // Output: Hey

    // Calls with no arguments provided (default values used)
    printMessage();         // Output: Hello

    return 0;
}


/*QSN. 9*/
#include <iostream>
using namespace std;

class Product {
private:
    string name;
    double price;
    static double minprice; // Static member for minimum price

public:
    void getData() {
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Product Price: ";
        cin >> price;
        // Update minprice if the current price is less than the stored minprice
        if (price < minprice) {
            minprice = price;
        }
    }

    void showData() {
        cout << "Product Name: " << name << endl;
        cout << "Product Price: " << price << endl;
    }

    static void displayMinPrice() {
        cout << "Minimum Price: " << minprice << endl;
    }
};

// Initialize the static member minprice
double Product::minprice = 1000.0;

int main() {
    Product p[3];

    // Read data for each product
    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details for Product " << i + 1 << endl;
        p[i].getData();
    }

    // Display data for each product
    cout << "\nProduct Details:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\nProduct " << i + 1 << ":" << endl;
        p[i].showData();
    }

    // Display the minimum price using the static member function
    Product::displayMinPrice();

    return 0;
}


/*QSN. 10*/
#include<iostream>
using namespace std;
template<class A>
void swaps(A &a, A &b){
    A temp = a;
    a = b;
    b = temp;
}

template<class A>
void showdata(A a, A b){
    cout << a << " " << b << endl;
}

int main(){
    int a = 5, b = 10;
    float c = 2.1, d = 3.1;

    swaps(a, b);
    showdata(a, b);

    swaps(c, d);
    showdata(c, d);

    return 0;
}
