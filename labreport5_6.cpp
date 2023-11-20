/*Conversion from basic data type to anoyher basic data type*/
#include<iostream>
using namespace std;
int main(){
    int x;
    float y=23.4;
    /*x=int(y);    //Explicit Conversion */
    x=y;        //Implicit Conversion   //Converted into integer type
   cout << "The value of x is: "<< x << endl;
}


/*Conversion from basic data type to userdefined data type*/
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


/*Conversion from user-defined data type to basic data type*/
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


/*Conversion from user defined data type to another user defined data type (source)*/
//Celsius to Fahrenheit
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


// /*Conversion from user defined data type to another user defined data type (destination)*/
//Fahrenheit To celsius
#include<iostream>
using namespace std;
class fahrenheit{
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

class celsius{
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


/*Create two classes named Mammals and Marine Animal. Create another class named Blue Whale which inherits both the above classes.
Noe, Create a function in each of these classes which prints "I am Mammal", "I am Marine animal" and "I belong to both the categories:
Mammals as well as marine animals" respectively. Now,create an object for each of the above class and try calling
(i) function of mammals by object of mammal
(ii) function of marine animal by object of marine animals
(iii) function of blue whale by the objects of blue whale
(iv) function of each of its present by object of blue whale*/

#include<iostream>
using namespace std;
class Mammals{
public:
    void display(){
        cout << "I am Mammal" << endl;
    }
};

class Marine_Animal{
public:
    void display(){
        cout << "I am Marine animal" << endl;
    }
};

class Blue_Whale : public Mammals,public Marine_Animal{
public:
    void display(){
        cout << "I belong to both the categories: Mammals as well as marine animals" << endl;
    }
};
int main(){
    Mammals m;
    Marine_Animal ma;
    Blue_Whale bw;

    //Callinf Functions using Objects
    m.display();
    ma.display();
    bw.display();
    

    bw.Mammals::display();        //calling function of mammals using bluewhale
    bw.Marine_Animal::display();       //calling function of marine animals using bluewhale
}



/*Make a class named Fruit with data member to calculate no. of fruits in a basket.
Create two other classes named Apples and Mangoes to calculate number of apples and mangoes in basket.
Print the number of fruits of each type and total no. of fruits in the basket.*/

#include<iostream>
using namespace std;
class Fruit{
private:
    int numFruits;
public:
    Fruit(int num){
        numFruits= num;
    }
    int get_num() {
        return numFruits;
    }
};
class Mangoes: public Fruit{
public:
    Mangoes(int num): Fruit(num){

    }
    void print_mangoes(){
        cout << "Number of mangoes: " << get_num() << endl;
    }
};
class Apples: public Fruit{
    public:
    Apples(int num): Fruit(num){

    }
    void print_apples(){
        cout << "Number of apples: " << get_num() << endl;
    }
};
int main (){
    Mangoes m(18); 
    Apples a(36);

    m.print_mangoes();
    a.print_apples();
    

    int totalFruits =a.get_num() + m.get_num();
    cout << "Total number of fruits in the basket is: " << totalFruits << endl;

    return 0;
}

/*Example*/
#include<iostream>
using namespace std;
 class A{
    int adata;
    public:
    A(int a){
        adata=a;
    }
    void show(){
        cout << "A=" << adata << endl;
    }
 };
 class B{
    int bdata;
    public:
    B(int b){
        bdata=b;
    }
    void show(){
        cout << "A=" << bdata << endl;
    }
 };
 class C : public A, public B{
    int cdata;
    public:
    C(int a,int b,int c):A(a), B(b){
        cdata=c;
    }
    void show(){
        A::show();
        B::show();
        cout << "A=" << cdata << endl;
    }
 };
 int main(){
    
    C c(5,6,7);
   
    c.show();

 }