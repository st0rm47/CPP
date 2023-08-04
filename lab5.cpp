// /* Create a class named "Programming" */

#include <iostream>
#include <string>
using namespace std;
class Programming {
private:
    string name;
public:
    Programming() {
        cout << "I love C++ " << endl;
    }
    Programming(string name) { // constructor
        cout << "I love " << name;
    }
};
int main() {
    string name;
    cin >> name;
    if (name.length()>1) { // Check if the string is empty
        Programming programming(name);
    } else {
        Programming ();
    }
    return 0;
}

