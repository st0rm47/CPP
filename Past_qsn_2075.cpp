/*2075*/

/*QSN. 1*/
/*Object to object (destination)*/

/* Example No 1."Meters to Feet" */
// #include<iostream>
// using namespace std;
// class meters{       //Source Class
//     private:
//         int meter;
//         int centimeter;
//     public:
//         meters(int m,int cm){
//             meter=m;
//             centimeter=cm;
//         }
//         int getm(){
//             return meter;
//         }
//         int getcm(){
//             return centimeter;
//         }
// };
// class feets{       //Destination Class
//     private:
//         int feet;
//         int inch;
//     public:
//         feets(){
//             feet=0;
//             inch=0;
//         }
//         feets(int f,int i){         
//             feet=f;
//             inch=i;
//         }
//         feets(meters m1){       //Routine in Destination Class
//             int m,cm;
//             m=m1.getm();
//             cm=m1.getcm();
//             feet=m*3.3;
//             inch=cm*0.4;
//             feet=feet+inch/12;
//             inch=inch%12;
//         }
//         void display(){
//             cout << feet << " ft " << inch << " inch " << endl;
//         }
// };
// int main(){
//     feets f1;
//     meters m1(3,20);
//     f1=m1;
//     f1.display();
//     return 0;
// }


// /* Example No 2."Celsius to Fahrenheit" */
// #include<iostream>
// using namespace std;
// class Celsius{
//     private:
//         float celsi;
//     public:
//         Celsius(float c){
//             celsi=c;
//         }
//         float getcelsius(){
//             return celsi;
//         }
// };
// class Fahrenheit{
//     private:
//         float fahren;
//     public:
//         Fahrenheit(){
//             fahren=0;
//         }
//         Fahrenheit(float f){
//             fahren=f;
//         }
//         Fahrenheit(Celsius c1){
//             float c;
//             c=c1.getcelsius();
//             fahren=((c*9/5)+32);
//         }
//         void display(){
//             cout << "Temperature = " << fahren << endl;
//         }
// };
// int main(){
//     Fahrenheit f1;
//     Celsius c1(15.3);
//     f1=c1;
//     f1.display();
//     return 0;
// }


/*QSN. 2*/

/*QSN. 3*/

/*QSN. 4*/
#include <iostream>
using namespace std;

class String {
public:
    void reverseit(string& str) {
        int length = str.length();
        int n = length - 1;  // Initialize n to the last index of the string
        char temp;  // Declare a temporary variable for swapping

        for (int i = 0; i < length / 2; i++) {
            temp = str[i];
            str[i] = str[n];
            str[n] = temp;
            n--;
        }
    }
};
int main() {
    String myString;
    string input = "Hello, World!";
    cout << "Original String: " << input << endl;
    myString.reverseit(input);
    cout << "Reversed String: " << input << endl;
    return 0;
}
