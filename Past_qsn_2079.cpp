/* 2079 */

/*QSN. 1.*/
#include<iostream>
using namespace std;
class author{
private:
    string name;
    string qualification;
public:
    void getdata(){
        cout << "Enter author's name: " ;
        getline(cin,name);
        cout << "Enter author's qualification: " ;
        getline(cin,qualification);
    }
    void putdata(){
        cout << "Author's Name = " << name << endl;
        cout << "Author's qualification = " << qualification << endl;
    }
};
class publication{
private:
    string pname;
public:
    void getdata(){
        cout << "Enter publication name: " ;
        getline(cin,pname);
    }
    void putdata(){
        cout << "Publication's Name = " << pname << endl;
    }
};
class book : public author, public publication{
private:
    string title;
    int price;
public:
    void getdata(){
        author :: getdata();
        publication :: getdata();

        cout << "Enter title of book: " ;
        getline(cin,title);
        cout << "Enter price of the book: " ;
        cin >> price;
    }
    void putdata(){
        author :: putdata();
        publication :: putdata();
        cout << "Book Title = " << title << endl;
        cout << "Book Price = " << price << endl;
    }
};
int main(){
    class book b;
    // b.author :: getdata();
    // b.publication :: getdata();
    b.getdata();
    cout << endl;

    // b.author :: putdata();
    // b.publication :: putdata();
    b.putdata();
    return 0;
}


/*QSN. 2.*/ 
#include<iostream>
using namespace std;
class dist{
public:
    int dis;
    dist(){
        dis=0;
    }
    void getdistance(){
        cout << "Enter the distance: " ;
        cin >> dis;
    }
    dist operator > (dist a){
        if (dis>a.dis)
            return *this;
        else
            return a;
    }
};
int main(){
    dist d1,d2,d3;
    d1.getdistance();
    d2.getdistance();
    d3 = d1 > d2;
    cout << "Greater distance is " << d3.dis << endl;
}


//6.
#include <iostream>
using namespace std;
// Inline function to calculate the square of a number
inline int square(int x) {
    return x * x;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Call the inline function to calculate the square
    int result = square(num);
    cout << "The square of " << num << " is: " << result << endl;
    return 0;
}

//10.
#include<iostream>
using namespace std;
int main(){
    int i;
    int size;
    cout << "Enter the size: ";
    cin >> size;

    int *p = new int[size];

    cout << "Enter the integers: ";
    for(i=0;i<size;i++){
        cin >> p[i];
    }

    cout << "The integers are: ";
    for(i=0;i<size;i++){
        cout << p[i] << " ";
    }

    delete [] p;
}