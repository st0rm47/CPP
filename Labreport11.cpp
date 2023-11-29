/*1. WAP to create a binary file and write data into it.*/
#include<iostream>
#include<fstream>
using namespace std;
class test{
    int x,y;
public:
    void getdata(){
        cout << "Enter values of x and y: ";
        cin >> x >> y;
    }
};
int main(){
    test t;
    t.getdata();
    ofstream a;
    a.open("Data.bin");
    a.write((char *)&t,sizeof(t));
    a.close();
    return 0;
}

/*2.WAP to read the contents from the binary file made recently.*/
#include<iostream>
#include<fstream>
using namespace std;
class test{
    int x,y;
public:
    void showdata(){
        cout << "The values of x and y: " << endl;
        cout << x << endl << y;
    }
};
int main(){
    test t;
    ifstream a;
    a.open("Data.bin");
    a.read((char *)&t,sizeof(t));
    a.close();
    t.showdata();
    return 0;
}