/*1. WAP to write 1 to 100 in a data file Notes.txt*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open the file in write mode
    ofstream file("Notes.txt");

    if (file.is_open()) {
        // Loop from 1 to 100 and write each number followed by a newline character
        for (int i = 1; i <= 100; ++i) {
            file << i << "\n";
        }
        // Close the file
        file.close();
        cout << "Data written to Notes.txt successfully." << endl;
    } else {
        cerr << "Unable to open Notes.txt for writing." << endl;
    }
    return 0;
    
}


/*2. WAP which initializes a string variable to the content "Time is a great teacher but nowadays it is said as Time is Money"
and outputs the string to disk file OUT.TXT*/


/*3. WAP to read content from a text file OUT.TXT and count the number of alphabets present in it.*/
