#include<iostream>
using namespace std;
class test{
    int count;
    public:
        test(){
            count=0;
        }
        void display(){
            cout << count << endl;
        }
        void operator ++(){     //Pre-increment operator
           ++count;
        }
        void operator ++ (int){     //Post-increment operator
            count++;
        }
};
int main(){
    test t;             // Object of clss test
    t.display();       // Display the value of t as 0

    ++t;                // Increment t using pre-increment operator
    t.display();       // Display the value of t as 1

    t++;                // Increment t using post-increment operator
    t.display();       // Display the value of t as 2
}