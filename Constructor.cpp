//--->>Constructor
    /*Special member function
     Initializes object 
    Name same as class name */
    
#include <iostream>
#include <string>
using namespace std;
class Painting {        //class
    private:
        string name;
    public:
        Painting(string name){      //constructor
        
            cout << name;
        }
};
int main() {
    string name;
    cin >> name;

    Painting painting(name);        //used constructor to pass the value

    return 0;
}