//---> Classes
/*Class describes what the object will be.
Objects are created using classes.*/

//--->>Declaring a Class
    #include<iostream>
    using namespace std;
    class myname{           // Declaring a class named myname using keyword: class
        public:             // Access Specifier

        myname(){           //Constructor 
            cout << 45 << endl;
        }
        void name(){        // Member function inside a class
            cout << "Subodh";
        }
    };
    int main(){
        myname a;          // Object to access the data inside a class

        //When object is made constructor are executed automatically
        a.name();          // object with dot(.) should be used to access inside a class
    }