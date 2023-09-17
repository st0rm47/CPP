/*Union Set*/
#include <iostream>
using namespace std;

int main() 
{
    const int maxSize = 100;
    int set_A[maxSize], set_B[maxSize], unionSet[maxSize];
    int n1, n2, element;
    int unionSize = 0;

    cout << "\t\t========================" << endl;
    cout << "\t\t   Union of Two Sets    " << endl;
    cout << "\t\t========================" << endl;

    // Input for the first set
    cout << "Enter the number of elements in Set A: ";
    cin >> n1;
    cout << "Enter the elements of Set A, separated by spaces: ";
    for (int i = 0; i < n1; ++i) 
    {
        cin >> element;
        set_A[i] = element;
    }

    // Input for the second set
    cout << "Enter the number of elements in Set B: ";
    cin >> n2;
    cout << "Enter the elements of Set B, separated by spaces: ";
    for (int i = 0; i < n2; ++i) 
    {
        cin >> element;
        set_B[i] = element;
    }

    // Compute the union of the two sets
    for (int i = 0; i < n1; ++i)
        unionSet[unionSize++] = set_A[i];

    for (int i = 0; i < n2; ++i) 
    {
        int isDuplicate = 0;
        for (int j = 0; j < unionSize; ++j) 
        {
            if (set_B[i] == unionSet[j]) 
            {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate)
            unionSet[unionSize++] = set_B[i];
    }

    // Display the union set
    cout << "Union of the two sets: {";
    int first = 1;
    for (int i = 0; i < unionSize; ++i) 
    {
        cout << (first ? "" : ",") << unionSet[i];
        first = 0;
    }
    cout << "}" << endl;
    return 0;
}



/*Intersection Set*/
#include <iostream>
using namespace std;

int main() 
{
    const int maxSize = 100;
    int set_A[maxSize], set_B[maxSize], intersectionSet[maxSize];
    int n1, n2, element;
    int intersectionSize = 0;

    cout << "\t\t==========================" << endl;
    cout << "\t\t Intersection of Two Sets " << endl;
    cout << "\t\t==========================" << endl;

    // Input for the first set
    cout << "Enter the number of elements in Set A: ";
    cin >> n1;
    cout << "Enter the elements of Set A, separated by spaces: ";
    for (int i = 0; i < n1; ++i) 
    {
        cin >> element;
        set_A[i] = element;
    }

    // Input for the second set
    cout << "Enter the number of elements in Set B: ";
    cin >> n2;
    cout << "Enter the elements of Set B, separated by spaces: ";
    for (int i = 0; i < n2; ++i) 
    {
        cin >> element;
        set_B[i] = element;
    }



    // Compute the intersection of the two sets
    for (int i = 0; i < n1; ++i) 
    {
        for (int j = 0; j < n2; ++j) 
        {
            if (set_A[i] == set_B[j]) 
            {
                intersectionSet[intersectionSize++] = set_A[i];
                break;
            }
        }
    }

    // Display the intersection set
    cout << "Intersection of the two sets: {";
    int first = 1;
    for (int i = 0; i < intersectionSize; ++i) 
    {
        cout << (first ? "" : ",") << intersectionSet[i];
        first = 0;
    }
    cout << "}" << endl;
    return 0;
}


/*Difference Set*/
#include <iostream>
using namespace std;

int main() 
{
    const int maxSize = 100;
    int set_A[maxSize], set_B[maxSize], differenceSet[maxSize];
    int n1, n2, element;
    int differenceSize = 0;

    cout << "\t\t========================" << endl;
    cout << "\t\t Difference of Two Sets " << endl;
    cout << "\t\t========================" << endl;

    // Input for the first set
    cout << "Enter the number of elements in Set A: ";
    cin >> n1;
    cout << "Enter the elements of Set A, separated by spaces: ";
    for (int i = 0; i < n1; ++i) 
    {
        cin >> element;
        set_A[i] = element;
    }

    // Input for the second set
    cout << "Enter the number of elements in Set B: ";
    cin >> n2;
    cout << "Enter the elements of Set B, separated by spaces: ";
    for (int i = 0; i < n2; ++i) 
    {
        cin >> element;
        set_B[i] = element;
    }



    // Compute the difference between Set A and Set B
    for (int i = 0; i < n1; ++i) 
    {
        int isDifferent = 1;  
        for (int j = 0; j < n2; ++j) 
        {
            if (set_A[i] == set_B[j]) 
            {
                isDifferent = 0; 
                break;
            }
        }
        if (isDifferent)
            differenceSet[differenceSize++] = set_A[i];
    }

    // Display the difference set
    cout << "Difference of Set A - Set B: {";
    int first = 1;
    for (int i = 0; i < differenceSize; ++i) 
    {
        cout << (first ? "" : ",") << differenceSet[i];
        first = 0;
    }
    cout << "}" << endl;
    return 0;
}

/*Floor Function and Ceiling Function*/
#include <iostream>
using namespace std;

int main() 
{
    cout << "\t\t=============================" << endl;
    cout << "\t\t Floor and Ceiling Functions " << endl;
    cout << "\t\t=============================" << endl;

    //Input for float number
    float n;
    cout << "Enter a float number: ";
    cin >> n;

    //Calculate Floor Value
    int floor_value = n;
    if(n < 0 && n != floor_value)
        floor_value -= 1;

    //Calculate Ceiling Value
    int ceiling_value = n;
    if(n > 0 && n != ceiling_value)
        ceiling_value += 1;
    
    //Display the results
    cout << "Input Number: " << n << endl;
    cout << "Floor Value: " << floor_value << endl;
    cout << "Ceiling Value: " << ceiling_value << endl;
    return 0;
}


/*Cartesian Product*/
#include <iostream>
using namespace std;

int main() 
{
    const int maxSize = 100;
    int set_A[maxSize], set_B[maxSize];
    int n1, n2, element_A, element_B;

    cout << "\t\t===============================" << endl;
    cout << "\t\t   Cartesian Product of Sets   " << endl;
    cout << "\t\t===============================" << endl;

    // Input for the first set
    cout << "Enter the number of elements in Set A: ";
    cin >> n1;
    cout << "Enter the elements of Set A, separated by spaces: ";
    for (int i = 0; i < n1; ++i)
    {
        cin >> element_A;
        set_A[i] = element_A;
    }

    // Input for the second set
    cout << "Enter the number of elements in Set B: ";
    cin >> n2;
    cout << "Enter the elements of Set B, separated by spaces: ";
    for (int i = 0; i < n2; ++i)
    {
        cin >> element_B;
        set_B[i] = element_B;
    }

    // Display the Cartesian product
    cout << "Cartesian Product of the two sets: {";
    for (int i = 0; i < n1; ++i)
    {
        for (int j = 0; j < n2; ++j)
        {
            cout << "(" << set_A[i] << ", " << set_B[j] << ")";
            if (i != n1 - 1 || j != n2 - 1)
                cout << ", ";
        }
    }
    cout << "}" << endl;

    return 0;
}

// /*Permutation*/
// #include <iostream>
// using namespace std;

// // Function to calculate the factorial of a number
// int factorial(int num) 
// {
//     int result = 1;
//     for (int i = 1; i <= num; ++i) 
//         result *= i;
//     return result;
// }

// int main() 
// {
//     cout << "\t\t============================" << endl;
//     cout << "\t\t   Permutation Calculator   " << endl;
//     cout << "\t\t============================" << endl;

//     int n, r;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout << "Enter the value of r: ";
//     cin >> r;

//     // Check for valid inputs
//     if (n >= 0 && r >= 0 && n >= r) 
//     {
//         // Calculate the permutation using the formula n! / (n - r)!
//         int permutation = factorial(n) / factorial(n - r);

//         // Display the result
//         cout << "Permutation of " << n << " items taken " << r << " at a time is: " << permutation << endl;
//     }
//     return 0;
// }


/*Combination*/
#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int num) 
{
    int result = 1;
    for (int i = 1; i <= num; ++i) 
        result *= i;
    return result;
}
int main() 
{
    cout << "\t\t============================" << endl;
    cout << "\t\t   Combination Calculator   " << endl;
    cout << "\t\t============================" << endl;

    // Input for value of n and r
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    // Check for valid inputs
    if (n >= 0 && r >= 0 && n >= r) 
    {
        // Calculate the combination using the formula n! / (r! * (n - r)!)
        int combination = factorial(n) / (factorial(r) * factorial(n - r));

        // Display the result
        cout << "Combination of " << n << " items taken " << r << " at a time is: " 
        << combination << endl;
    }
    return 0;
}
