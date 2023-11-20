/*File Handling*/
/* Uses <fstream> header file*/

/*  ofstream can be used for creating and writing
    ifstream can be used for reading
    fstream can be used for both read and write*/

/* ios::out ---> open file for writing
   ios::in ---> open file for reading*/


/*Program to read contents from file*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char str[30];
    ifstream file;
    file.open("file.txt");
    while(!file.eof()){                     // reads until the end of file
        file >> str;                      // Reads from a file
        
        // file.getline(str,20);               // Reads only 20 characters
        
        cout << str;
    }
    file.close();                        // Closing a file
    return 0;
}

/*Program to write contents to file*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;      
    file.open("Note.txt");              //To create a file
    for (int i = 1; i <= 100; i++){
            file << i << endl;          //Writes in a file
        }
    file.close();                       // Closing a file
    return 0;
}

// /*Program to read and write content in a single file*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string name;
    fstream file;
    file.open("abc.txt", ios::out);   // Opened file for writing
    cout << "Enter a name";
    cin >> name;
    file << name << endl;             // Writes name into the file
    file.close();
    
    file.open("abc.txt", ios::in);    // Opened file for reading
    cout << "Name";
    file >> name;                     // Reads name from the file
    cout << name;
    file.close();
    return 0;
}


