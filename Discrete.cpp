// /*Union Set*/
// #include <iostream>
// using namespace std;

// int main() 
// {
//     const int maxSize = 100;
//     int set_A[maxSize], set_B[maxSize], unionSet[maxSize];
//     int n1, n2, element;
//     int unionSize = 0;

//     cout << "\t\t========================" << endl;
//     cout << "\t\t   Union of Two Sets    " << endl;
//     cout << "\t\t========================" << endl;

//     // Input for the first set
//     cout << "Enter the number of elements in Set A: ";
//     cin >> n1;
//     cout << "Enter the elements of Set A, separated by spaces: ";
//     for (int i = 0; i < n1; ++i) 
//     {
//         cin >> element;
//         set_A[i] = element;
//     }

//     // Input for the second set
//     cout << "Enter the number of elements in Set B: ";
//     cin >> n2;
//     cout << "Enter the elements of Set B, separated by spaces: ";
//     for (int i = 0; i < n2; ++i) 
//     {
//         cin >> element;
//         set_B[i] = element;
//     }



//     // Compute the union of the two sets
//     for (int i = 0; i < n1; ++i)
//         unionSet[unionSize++] = set_A[i];

//     for (int i = 0; i < n2; ++i) 
//     {
//         int isDuplicate = 0;
//         for (int j = 0; j < unionSize; ++j) 
//         {
//             if (set_B[i] == unionSet[j]) 
//             {
//                 isDuplicate = 1;
//                 break;
//             }
//         }
//         if (!isDuplicate)
//             unionSet[unionSize++] = set_B[i];
//     }

//     // Display the union set
//     cout << "Union of the two sets: {";
//     int first = 1;
//     for (int i = 0; i < unionSize; ++i) 
//     {
//         cout << (first ? "" : ",") << unionSet[i];
//         first = 0;
//     }
//     cout << "}" << endl;
//     return 0;
// }



// /*Intersection Set*/
// #include <iostream>
// using namespace std;

// int main() 
// {
//     const int maxSize = 100;
//     int set_A[maxSize], set_B[maxSize], intersectionSet[maxSize];
//     int n1, n2, element;
//     int intersectionSize = 0;

//     cout << "\t\t==========================" << endl;
//     cout << "\t\t Intersection of Two Sets " << endl;
//     cout << "\t\t==========================" << endl;

//     // Input for the first set
//     cout << "Enter the number of elements in Set A: ";
//     cin >> n1;
//     cout << "Enter the elements of Set A, separated by spaces: ";
//     for (int i = 0; i < n1; ++i) 
//     {
//         cin >> element;
//         set_A[i] = element;
//     }

//     // Input for the second set
//     cout << "Enter the number of elements in Set B: ";
//     cin >> n2;
//     cout << "Enter the elements of Set B, separated by spaces: ";
//     for (int i = 0; i < n2; ++i) 
//     {
//         cin >> element;
//         set_B[i] = element;
//     }



//     // Compute the intersection of the two sets
//     for (int i = 0; i < n1; ++i) 
//     {
//         for (int j = 0; j < n2; ++j) 
//         {
//             if (set_A[i] == set_B[j]) 
//             {
//                 intersectionSet[intersectionSize++] = set_A[i];
//                 break;
//             }
//         }
//     }

//     // Display the intersection set
//     cout << "Intersection of the two sets: {";
//     int first = 1;
//     for (int i = 0; i < intersectionSize; ++i) 
//     {
//         cout << (first ? "" : ",") << intersectionSet[i];
//         first = 0;
//     }
//     cout << "}" << endl;
//     return 0;
// }


/*Difference Set*/
#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int set_A[maxSize], set_B[maxSize], differenceSet[maxSize];
    int n1, n2, element;
    int differenceSize = 0;

    cout << "\t\t======================" << endl;
    cout << "\t\t Difference of Two Sets" << endl;
    cout << "\t\t======================" << endl;

    // Input for the first set
    cout << "Enter the number of elements in Set A: ";
    cin >> n1;
    cout << "Enter the elements of Set A, separated by spaces: ";
    for (int i = 0; i < n1; ++i) {
        cin >> element;
        set_A[i] = element;
    }

    // Input for the second set
    cout << "Enter the number of elements in Set B: ";
    cin >> n2;
    cout << "Enter the elements of Set B, separated by spaces: ";
    for (int i = 0; i < n2; ++i) {
        cin >> element;
        set_B[i] = element;
    }

    // Compute the difference between Set A and Set B
    for (int i = 0; i < n1; ++i) {
        int isDifferent = 1;  // Assume the element is different initially
        for (int j = 0; j < n2; ++j) {
            if (set_A[i] == set_B[j]) {
                isDifferent = 0;  // Element found in Set B, not different
                break;
            }
        }
        if (isDifferent) {
            differenceSet[differenceSize++] = set_A[i];
        }
    }

    // Display the difference set
    cout << "Difference of Set A - Set B: {";
    int first = 1;
    for (int i = 0; i < differenceSize; ++i) {
        cout << (first ? "" : ",") << differenceSet[i];
        first = 0;
    }
    cout << "}" << endl;

    return 0;
}
