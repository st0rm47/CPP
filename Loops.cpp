#include<iostream>
using namespace std;
int main(){
    
    //Loops
    int number;
    cin >> number;
    while(number>=0){
        cout << number << endl;
        number--;
    }

    int num = 0;
    do {
    cout << num << endl;
    num+=2;
    }while(num <= 10);

    for(int i=0;i<10;i++) {
    if(i==5) {
    break;  //break statement stops the loop if condition met
    }
    cout << i << endl;
    }
}