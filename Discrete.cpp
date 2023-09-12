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


#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> set1, set2, intersectionSet; // Define an intersectionSet.

    int n1, n2, element;

    cout << "\t\t============================" << endl;
    cout << "\t\t  Intersection of Two Sets  " << endl;
    cout << "\t\t============================" << endl;

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

    // Compute the intersection of the two sets
    for (int x : set1) {
        if (set2.find(x) != set2.end()) {
            intersectionSet.insert(x);
        }
    }

    // Display the intersection set
    cout << "Intersection of the two sets: {";
    int first = 1;
    for (int x : intersectionSet) {
        if (x > 0) {
            cout << (!first ? "," : "") << x;
            first = 0;
        }
    }
    cout << "}"  << endl;
    return 0;
}


#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> set1, set2, differenceSet; 

    int n1, n2, element;

    cout << "\t\t============================" << endl;
    cout << "\t\t   Difference of Two Sets   " << endl;
    cout << "\t\t============================" << endl;

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

    // Compute the difference of the two sets (set1 - set2)
    for (int x : set1) {
        if (set2.find(x) == set2.end()) {
            differenceSet.insert(x);
        }
    }

    // Display the difference set
    cout << "Difference of the two sets (set1 - set2): {";
    int first = 1;
    for (int x : differenceSet) {
        if (x > 0) {
            cout << (!first ? "," : "") << x;
            first = 0;
        }
    }
    cout << "}"  << endl;
    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     const int maxSize = 100; // Maximum size for sets
//     int set1[maxSize], set2[maxSize], unionSet[maxSize];
//     int n1, n2, element;
//     int unionSize = 0;

//     cout << "\t\t========================" << endl;
//     cout << "\t\t   Union of Two Sets    " << endl;
//     cout << "\t\t========================" << endl;

//     // Input for the first set
//     cout << "Enter the number of elements in the first set: ";
//     cin >> n1;
//     cout << "Enter the elements of the first set, separated by spaces: ";
//     for (int i = 0; i < n1; ++i) {
//         cin >> element;
//         set1[i] = element;
//     }

//     // Input for the second set
//     cout << "Enter the number of elements in the second set: ";
//     cin >> n2;
//     cout << "Enter the elements of the second set, separated by spaces: ";
//     for (int i = 0; i < n2; ++i) {
//         cin >> element;
//         set2[i] = element;
//     }

//     // Compute the union of the two sets
//     for (int i = 0; i < n1; ++i) {
//         unionSet[unionSize++] = set1[i];
//     }
//     for (int i = 0; i < n2; ++i) {
//         int isDuplicate = 0;
//         for (int j = 0; j < unionSize; ++j) {
//             if (set2[i] == unionSet[j]) {
//                 isDuplicate = 1;
//                 break;
//             }
//         }
//         if (!isDuplicate) {
//             unionSet[unionSize++] = set2[i];
//         }
//     }

//     // Display the union set
//     cout << "Union of the two sets: {";
//     int first = 1;
//     for (int i = 0; i < unionSize; ++i) {
//         if (unionSet[i] > 0) {
//             cout << (!first ? "," : "") << unionSet[i];
//             first = 0;
//         }
//     }
//     cout << "}" << endl;

//     return 0;
// }
