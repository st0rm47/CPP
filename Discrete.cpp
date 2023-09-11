#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> set1, set2, unionSet;
    int n1, n2, element;
    cout << "\t\t========================" << endl;
    cout << "\t\t   Union of Two Sets    " << endl;
    cout << "\t\t========================" << endl;

    // Input for the first set
    cout << "Enter the number of elements in the first set: ";
    cin >> n1;
    cout << "Enter the elements of the first set, separated by spaces: ";
    for (int i = 0; i < n1; ++i) {
        cin >> element;
        set1.insert(element);
    }

    // Input for the second set
    cout << "Enter the number of elements in the second set: ";
    cin >> n2;
    cout << "Enter the elements of the second set, separated by spaces: ";
    for (int i = 0; i < n2; ++i) {
        cin >> element;
        set2.insert(element);
    }

    // Compute the union of the two sets
    for (int x : set1) {
        unionSet.insert(x);
    }
    for (int x : set2) {
        unionSet.insert(x);
    }

    // Display the union set
    cout << "Union of the two sets: {";
    int first = 1;
    for (int x : unionSet) {
        if (x > 0) {
            cout << (!first ? "," : "") << x;
            first = 0;
        }
    }
    cout << "}"  << endl;
    return 0;
}


// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> set1, set2, intersectionSet; // Define an intersectionSet.

//     int n1, n2, element;

//     cout << "\t\t============================" << endl;
//     cout << "\t\t  Intersection of Two Sets  " << endl;
//     cout << "\t\t============================" << endl;

//     // Input for the first set
//     cout << "Enter the number of elements in the first set: ";
//     cin >> n1;
//     cout << "Enter the elements of the first set, separated by spaces: ";
//     for (int i = 0; i < n1; ++i) {
//         cin >> element;
//         set1.insert(element);
//     }

//     // Input for the second set
//     cout << "Enter the number of elements in the second set: ";
//     cin >> n2;
//     cout << "Enter the elements of the second set, separated by spaces: ";
//     for (int i = 0; i < n2; ++i) {
//         cin >> element;
//         set2.insert(element);
//     }

//     // Compute the intersection of the two sets
//     for (int x : set1) {
//         if (set2.find(x) != set2.end()) {
//             intersectionSet.insert(x);
//         }
//     }

//     // Display the intersection set
//     cout << "Intersection of the two sets: {";
//     int first = 1;
//     for (int x : intersectionSet) {
//         if (x > 0) {
//             cout << (!first ? "," : "") << x;
//             first = 0;
//         }
//     }
//     cout << "}"  << endl;
//     return 0;
// }
