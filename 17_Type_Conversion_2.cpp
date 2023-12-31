/*-->>Type Conversion*/

/*Basic Data Type to Basic Data Type*/
#include<iostream>
using namespace std;
int main(){
    int x;
    float y=23.4;
    /*x=int(y);    //Explicit Conversion */
    x=y;        //Implicit Conversion
   cout << "The value of x is: "<< x << endl;
}


/*Basic Data Type to Object Data Type*/
#include<iostream>
using namespace std;
class dist{
private:
    int meter;
    int centimeter;
public:
    dist(){
        meter=0;
        centimeter=0;
    }
    dist(int m){
        meter=m/100;
        centimeter=m%100;
    }
    void display(){
        cout << "Distance = " <<  meter << " meter and " << centimeter << " centimeters" << endl;
    }
};
int main(){
    dist d1;
    int x=120;
    d1=x;
    d1.display();
    return 0;
}

/* Object to Basic Data Type */
#include<iostream>
using namespace std;
class dist{
private:
    int meter;
    int centimeter;
public:
    dist(){
        meter=0;
        centimeter=0;
    }
    dist(int m,int cm){
        meter=m;
        centimeter=cm;
    }
    // Conversion operator to convert dist to int
    operator int(){
        return meter*100+centimeter;
    }
};
int main(){
    dist d1(1,30);
    int x=d1;
    cout << "Distance = " << x << " centimeters" << endl;
}


/*Object to Object (Source)*/
/*---> Operator function is used in source class
  --> Celsius to Fahrenheit */

#include<iostream>
using namespace std;
class fahrenheit{ //Destination Class
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
class celsius{  //Source class
private:
    float c;
public:
    celsius(int x){
        c=x;
    }

    //Operator function in Source class
    operator fahrenheit (){
       return fahrenheit((c*9/5) + 32);
    }
};
int main(){
    fahrenheit f;  
    celsius c(45);
    f=c;
    f.show();
    return 0;
}

/*Object to Object (Destination) */
/*---> Constructor is used in destinationclass
  --> Fahrenheit to Celsius*/
  
#include<iostream>
using namespace std;
class fahrenheit{   //Source Class
private:
    float f;
public:
    fahrenheit(float x){
        f=x;
    }
    float getdata(){
        return f;
    }
};
class celsius{      //Destination Class
private:
    float c;
public:
    celsius(){
        c=0;
    }
    celsius(float x){
        c=x;
    }

    // Conversion constructor from Fahrenheit to Celsius.
    celsius(fahrenheit f1){
        float f;
        f=f1.getdata();
        c=((f-32)*5)/9;
    }
    void display(){
        cout << "Temperature in Celsius: " << c << endl;
    }
};
int main(){
    fahrenheit f1(96);  
    celsius c=f1;
    c.display();
    return 0;
}