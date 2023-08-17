// /* 1. WAP to overload unary operators i.e increment and decrement.*/
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
//         void operator -- (int){     //Post-decrement operator
//             count--;
//         }
// };
// int main(){
//     test t;             // Object of clss test
//     t.display();       // Display the value of t as 0

//     ++t;                // Increment t using pre-increment operator
//     t.display();       // Display the value of t as 1

//     t--;                // Increment t using post-increment operator
//     t.display();       // Display the value of t as 0
// }


/*3. WAP to overload + operator to concatenate two strings.*/
#include<iostream>
using namespace std;
class str{
    private:
        string name;
    public:
        str(){
            name=" ";
        }
        str(string b){
            name=b;
        }
        void getdata() {
            cout << "Enter a string: ";
            cin >> name;
        }
        void show(){
            cout << name;
        }
        str operator +(str a){
            str temp;
            temp.name=name+a.name;
            return temp;
        }
};
int main(){
    str a,b,c;
    a.getdata();
    b.getdata();
    c=a+b;
    c.show();
}