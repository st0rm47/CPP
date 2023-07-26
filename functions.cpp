#include <iostream>
using namespace std;
void hello() {      //Function definition
    cout << "Hello!" << endl;
    cout << "I am a sample function" << endl;
}
void bio (string name) {    //Function parameters : string
  cout << "Hello, " << name << endl;
}
int sum(int x, int y) {     //Function with return value
    return (x+y);
}
int main() {
    hello();        //Function Call
    hello();        
    hello();        
    hello();        //Function can be called as many times as you want  
    bio("Subodh");
}


/*--->>ChatBot using Function*/
#include <iostream>
using namespace std;
void bot(int mode,string name) {
    if (mode ==1){
        cout << "Welcome, " << name << "!";
    }
    else if (mode == 2){
        cout << "Goodbye, " << name << "!";
    }
    else
        cout << "Try again";
    }  
int main() {
    int mode;
    cin >> mode;
    string name;
    cin >> name;

    bot(mode, name);
}


/*--->>Days to Seconds*/
#include <iostream>
using namespace std;
int toSeconds(int days){
    int second= days*24*60*60;
    return second;
}
int main() {
    int days;
    cin >> days;

    int seconds = toSeconds(days);
    cout << seconds;
}