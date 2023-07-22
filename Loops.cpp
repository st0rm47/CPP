#include<iostream>
using namespace std;
int main(){
    
    //Loops
    //-->While Loop
    int number;
    cin >> number;
    while(number>=0){
        cout << number << endl;
        number--;
    }

    //-->do While Loop
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

    //-->for Loop
    for(int i=0;i<10;i++) {
    if(i==5) {
    continue;   //continue statement skips the current loop if condition met
    }
    cout << i << endl;
    }
}

/*--->> Sum using Loops */
// #include <iostream>
// using namespace std;
// int main() {
//     int n,i;
//     cin >> n;
//     int sum=0;
//     for (i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout << sum;
// }