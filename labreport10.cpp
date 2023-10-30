/*1. WAP to write 1 to 100 in a data file Notes.txt*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("Notes.txt");
    for (int i = 1; i <= 100; i++){
            file << i << endl;
        }
    file.close();
    return 0;
}


/*2. WAP which initializes a string variable to the content "Time is a great teacher but nowadays it is said as Time is Money"
and outputs the string to disk file OUT.TXT*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string a = "Time is a great teacher but nowadays it is said as Time is money";
    ofstream file;
    file.open("OUT.txt");
    file << a << endl; 
    file.close();
    return 0;
}

/*3. WAP to read content from a text file OUT.TXT and count the number of alphabets present in it.*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int c = 0;
    char x;
    ifstream file;
    file.open("OUT.txt");
    cout << "String in file : ";
    while (file.get(x)){
        cout << x;
        if(x >= 'A' && x <= 'Z' || x >='a' && x <='z')
        c++;
    }
    file.close();
    cout << "Total number of alphabets : " << c << endl;
    return 0;
}

/*4. WAP to write and read values using variables in/from a file. */
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char name[30];
    int roll;
    fstream file;
    file.open("Data.txt",ios::out);
    cout << "Enter a name: ";
    cin >> name;
    file << name << endl;
    cout << "Enter roll number: ";
    cin >> roll;
    file << roll << endl;
    file.close();

    file.open("Data.txt",ios::in);
    file >> name;
    file >> roll;
    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << roll << endl;
    file.close();
    return 0;
}


/*5. WAP to find the sum of two complex numbers by overloading << and >> stream operators*/
#include <iostream>
#include <fstream>
using namespace std;
class complex {
public:
    int a,b;
    complex(){
        a = 0;
        b = 0;
    }
    complex operator+( complex& x) {
        complex temp;
        temp.a = a + x.a;
        temp.b = b + x.b;
        return temp;
    }
    friend istream & operator >> (istream & in, complex & c);
    friend ostream & operator << (ostream & out, complex & c);
};
istream & operator >> (istream & in, complex & c){
    cout << "Real part: ";
    cin >> c.a;
    cout << "Imaginary part: ";
    cin >> c.b;
    return in;
}
ostream & operator << (ostream & out, complex & c){
    cout << c.a << " + " << c.b << "i" << endl;
    return out;
}
int main(){
    complex c1,c2,sum;
    cout << "Enter first complex number: " << endl;
    cin >> c1;

    cout << "Enter second complex number: " << endl;
    cin >> c2;

    sum = c1 + c2;
    cout << "The sum of two complex number is: " << sum << endl;
    return 0;
}

/*6. WAP demonstrating example of tellg(), tellp(), seekg(), seekp().*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("file.txt", ios::in | ios::out | ios::trunc);

    // Write data to the file
    file << "Welcome to Nepal" << endl;
    file << "We warmly welcome you here" << endl;

    // Get and display the current positions of the input and output file pointers
    cout << "Initial positions:" << endl;
    cout << "Input Position: " << file.tellg() << endl;
    cout << "Output Position: " << file.tellp() << endl;

    // Seek to the beginning of the file
    file.seekg(0, ios::beg);
    file.seekp(5, ios::beg);

    // Read from the current input position
    string line;
    getline(file, line);
    cout << "Read from input position: " << line << endl;

    // Seek to the end of the file
    file.seekp(0, ios::end);

    // Write more data to the end of the file
    file << "Appending data at the end." << endl;

    // Get and display the updated positions of the input and output file pointers
    cout << "Updated positions:" << endl;
    cout << "Input Position: " << file.tellg() << endl;
    cout << "Output Position: " << file.tellp() << endl;
    file.close();
    return 0;
}

