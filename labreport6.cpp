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