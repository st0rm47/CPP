// /*Conversion from basic data type to anoyher basic data type*/
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     float y=23.4;
//     /*x=int(y);    //Explicit Conversion */
//     x=y;        //Implicit Conversion   //Converted into integer type
//    cout << "The value of x is: "<< x << endl;
// }


// /*Conversion from basic data type to userdefined data type*/
// #include<iostream>
// using namespace std;

// class dist{
// private:
//     int meter;
//     int centimeter;
// public:
//     dist(){
//         meter=0;
//         centimeter=0;
//     }
//     dist(int m){
//         meter=m/100;
//         centimeter=m%100;
//     }
//     void display(){
//         cout << "Distance = " <<  meter << " meter and " << centimeter << " centimeters" << endl;
//     }
// };
// int main(){
//     dist d1;
//     int x=120;
//     d1=x;
//     d1.display();
//     return 0;
// }

// /*Conversion from user-defined data type to basic data type*/
// #include<iostream>
// using namespace std;
// class dist{
// private:
//     int meter;
//     int centimeter;
// public:
//     dist(){
//         meter=0;
//         centimeter=0;
//     }
//     dist(int m,int cm){
//         meter=m;
//         centimeter=cm;
//     }
//     // Conversion operator to convert dist to int
//     operator int(){
//         return meter*100+centimeter;
//     }
// };
// int main(){
//     dist d1(1,30);
//     int x=d1;
//     cout << "Distance = " << x << " centimeters" << endl;
// }

/*Conversion from user defined data type to another user defined data type (source)*/
#include<iostream>
using namespace std;
class fahrenheit{
private:
    float f;
public:
    fahrenheit(){
        f=0;
    }
    fahrenheit(int x){
        f=x;
    }
    void show(){
        cout << "Temperature in Fahrenheit: " << f << endl;
    }
};
class celsius{
private:
    float c;
public:
    celsius(){
        c=0;
    }
    celsius(int x){
        c=x;
    }
    operator fahrenheit (){
       return fahrenheit((c*9/5) + 32);
    }
};
int main(){
    fahrenheit f;  
    celsius c(37);
    f=c;
    f.show();
    return 0;
}

/*Conversion from user defined data type to another user defined data type (source)*/
#include<iostream>
using namespace std;
class fahrenheit{
private:
    float f;
public:
    fahrenheit(){
        f=0;
    }
    fahrenheit(int x){
        f=x;
    }
    void show(){
        cout << "Temperature in Fahrenheit: " << f << endl;
    }
};
class celsius{
private:
    float c;
public:
    celsius(){
        c=0;
    }
    celsius(int x){
        c=x;
    }
    operator fahrenheit (){
       return fahrenheit((c*9/5) + 32);
    }
};
int main(){
    fahrenheit f;  
    celsius c(37);
    f=c;
    f.show();
    return 0;
}