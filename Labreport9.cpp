/*1. WAP containing a possible execution. Use a try block to throw it and a catch block to handle it properly.*/
#include<iostream>
using namespace std;
int main(){
    float a,b;
	cout << "Enter two number: ";
	cin >> a >> b;
	try{
		if (b!=0){
			cout << a << " / " << b << " = " << a/b << endl;
		}else{
			throw 0;
		}
	}
	catch (int a){
		cout << "Denominator is zero.So, not divisible" << endl;
	}
	return 0;
}


/*2. WAP that illustrates the application of multiple catch statements.*/
#include <iostream>
using namespace std;
int main() {
    double a,b,arr[4] = { };
    int index;
    cout << "Enter array index: ";
    cin >> index;
    try {
        if (index < 0 || index > 4)
            throw "Array out of bounds!";

        cout << "Enter numerator and denominator: ";
        cin >> a >> b;

        if (b == 0)
            throw 0;
        cout << a / b << endl;
    } 
    catch (const char* msg) {
        cout << msg << endl;
    } 
    catch (int num){
        cout << "Error: Cannot divide by " << num << endl;
    }
    return 0;
}

/*3. WAP that uses catch(...) handler.*/
#include <iostream>
using namespace std;
int main() {
    try {
        int choice;
        cout << "Enter 1 for an integer exception, 2 for a character exception: ";
        cin >> choice;
        if (choice == 1) {
            throw 42; 
        } else if (choice == 2) {
            throw 'a'; 
        } else {
            throw "Unknown"; 
        }
    } catch (int a) {
        cout << "Integer catch. Value: " << a << endl;
    } 
    catch (char c) {
        cout << "Character catch. Value: " << c << endl;
    } 
    catch (...) {
        cout << "Default catch." << endl;
    }
    return 0;
}


