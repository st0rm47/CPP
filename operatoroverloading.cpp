// /*--->> Operator Overloading */

// /*1.Unary Operator Overloading without return type*/
// #include<iostream>
// using namespace std;
// class test{
//     int count;
//     public:
//         test(){
//             count=0;
//         }
//         void display(){
//             cout << count << endl;
//         }
//         void operator ++(){     //Pre-increment operator
//            ++count;
//         }
//         void operator ++ (int){     //Post-increment operator
//             count++;
//         }
// };
// int main(){
//     test t;             // Object of clss test
//     t.display();       // Display the value of t as 0

//     ++t;                // Increment t using pre-increment operator
//     t.display();       // Display the value of t as 1

//     t++;                // Increment t using post-increment operator
//     t.display();       // Display the value of t as 2
// }


/*2.Unary Operator Overloading with return type*/
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
        test operator ++(){     //Pre-increment operator
           ++count;
           test a;              //Object of class test
           a.count=count;       // Object value is set to the new updated value
           return a;            // return the value of object with new value
        }
          test operator ++(int){     //Pre-increment operator
           count++;
           test a;              //Object of class test
           a.count=count;       // Object value is set to the new updated value
           return a;            // return the value of object with new value
        }
};
int main(){
    test t1,t2;             // Object of clss test
    t1.display();       // Display the value of t1 as 0

    ++t1;                // Increment t using pre-increment operator
    t1.display();       // Display the value of t1 as 1

    t1++;                // Increment t using post-increment operator
    t1.display();       // Display the value of t1 as 2

    t2=++t1;            // Set the value of new object as same as 1st object
    t1.display();       // Display the value of t1 as 3
    t2.display();           // Display the value of t2 as 3
}