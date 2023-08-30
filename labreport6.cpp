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
private:
    int nummangoes;
public:
    Mangoes(int num): Fruit(num){}
    void print_mangoes(){
        cout<<"Number of mangoes: " << get_num() << endl;
    }
};
class Apples: public Fruit{
    public:
    Apples(int num): Fruit(num){}

    void print_apples(){
        cout<<"Number of apples: " <<get_num() << endl;
    }
};
int main (){
    Mangoes mango_object(5); //5 mangoes
    Apples apple_object(3); // 3 mangoes
    
    //output part
    mango_object.print_mangoes();
    apple_object.print_apples();
    
    //total number of fruits
    int totalFruits= apple_object.get_num() + mango_object.get_num();
    cout<<"Total number of fruits in basket is: " << totalFruits << endl;

    return 0;
}