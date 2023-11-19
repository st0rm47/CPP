// #include <iostream>
// using namespace std;
// int main()
// {
// int x = -1;
// // Some code
// cout << "Before try \n";
// try {
// 	cout << "Inside try \n";
// 	if (x < 0)
// 	{
// 		throw x;
// 		cout << "After throw (Never executed) \n";
// 	}
// }
// catch (int x ) {
// 	cout << "Exception Caught \n";
// }

// cout << "After catch (Will be executed) \n";
// return 0;
// }




/*Multiple Catch Statements*/
#include <iostream>
using namespace std;

int main() {
    double numerator, denominator, arr[4] = { };
    int index;

    cout << "Enter array index: ";
    cin >> index;

    try {
        if (index < 0 || index > 4)
            throw "Array out of bounds!";

        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;

        if (denominator == 0)
            throw 0;

        arr[index] = numerator / denominator;
        cout << arr[index] << endl;
    } catch (const char* msg) {
        cout << msg << endl;
    } catch (int num)
     {
        cout << "Error: Cannot divide by " << num << endl;
    } catch (...) {
        cout << "Unexpected exception!" << endl;
    }

    return 0;
}

