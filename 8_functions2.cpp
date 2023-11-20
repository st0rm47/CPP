/*-->Default Argument and Macros*/
#include<iostream>
using namespace std;
#define mul(a,b)a*b             // Macro Definition
inline int sum(int x,int y=3){       // Default Arguments
    return x+y;
}
int main(){
    cout << mul(3,4) << endl;           // Macro Call
    cout << sum(3,2);           // Function Call
    return 0;
}

/*-->Overloading of Functions*/
#include<iostream>
using namespace std;
void mul(int x, int y) {
    cout << x*y << endl;
}
void mul(double x, double y, double z) {
    cout << x*y << endl;
}
void mul(float x, float y){
    cout << x*y << endl;
}
int main(){
    mul(3,4);
    mul(4.2,3.2,2.02);
    mul(3.2f,5.2f);
}



