#include<iostream>
using namespace std;
class newone{
    int x,y;
        friend class newstone;
};
class newstone{
    public:
    void getdata(newone a){
        cout << "Enter values of x and y: ";
        cin >> a.x >> a.y;
        cout << a.x+a.y;
    }
};
int main(){
    newone a;
    newstone m;
    m.getdata(a);
    return 0;
}