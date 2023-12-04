

//Meters to feet and inch(Source)

#include<iostream>
using namespace std;
class feet_inch{        //Destination Class
    private:
    int feet;
    int inch;
    public:
    feet_inch(){
        feet=0;
        inch=0;
    }
    feet_inch(int f,int i){
        feet=f;
        inch=i;
    }
    void display(){
        cout << "Feet = " << feet << "inch = " << inch << endl;
    }
};
class meeters{
    private:
    int meter;
    int centimeter;
    public:
    meeters(int m,int cm){
        meter=m;
        centimeter=cm;
    }

}