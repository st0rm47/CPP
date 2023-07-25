#include<iostream>
using namespace std;
int main(){

    string name[10];
    //Declaring an array called name of type string

    //Accessing array elements
    int x[3];
    x[0] = 1;
    x[1] = 3;
    x[2] = 5;
    cout << x[0] + x[2] << endl;

    //Array Loops
    double prices[] = {5.99, 3.2, 9.99, 29.99};
    double total=0;
    for(int x=0;x<4;x++) {
        total += prices[x];
    }
    cout << total << endl;

    //Array for-each loop
    double cost[] = {5.99, 3.2, 9.99, 29.99};
    for(double x: cost) {
    cout << x << "\t";
    }
        
    double nums[] = {5.99, 3.2, 9.99, 29.99};
    double sum =0;
    for(double x: nums) {
        sum += x;
    }
    cout << endl << sum << endl ;
    // Here variable x can be assigned to each value of array during the loop.

    //Multidimensional Array
    int seats[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << seats[1][2];
    /*First index access the 2nd array 
    Second index access the 3rd item of 2nd array*/

    //Loops in Multi-Array
    for(int r=0;r<2;r++) {
        for(int c=0;c<3;c++) {
            cout << seats[r][c] << endl;
        }
    }
}


// /*--->> Array */
// #include <iostream>
// using namespace std;
// int main() {
//     char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
//     int n;
//     cin >> n;
//     cout << letters[n];
    
// }
