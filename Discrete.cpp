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



/*Permutation*/
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
    cout << "\t\t   Permutation Calculator   " << endl;
    cout << "\t\t============================" << endl;

    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    // Check for valid inputs
    if (n >= 0 && r >= 0 && n >= r) 
    {
        // Calculate the permutation using the formula n! / (n - r)!
        int permutation = factorial(n) / factorial(n - r);

        // Display the result
        cout << "Permutation of " << n << " items taken " << r << " at a time is: " << permutation << endl;
    }
    return 0;
}



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



/*Factorial using recursion*/
#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
int factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() 
{  
    cout << "\t\t==========================" << endl;
    cout << "\t\t   Factorial Calculator   " << endl;
    cout << "\t\t==========================" << endl;
    
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0)
    {
        // Display an error message for negative input
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    { 
        // Calculate and display the factorial if the input is non-negative
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }
    return 0;
}



/*Fibonacci Calculator*/
#include <iostream>
using namespace std;

// Function to calculate the nth term of the Fibonacci sequence using recursion
int fibonacci(int n) 
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    cout << "\t\t========================" << endl;
    cout << "\t\t  Fibonacci Calculator  " << endl;
    cout << "\t\t========================" << endl;
    
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0)
        cout << "Invalid input. Please enter a non-negative integer." << endl;
    else 
        cout << "The " << n << "th Fibonacci term is: " << fibonacci(n) << endl;
    return 0;
}



/*Tower of Hanoi*/
#include <iostream>
using namespace std;

// Function to solve the Tower of Hanoi problem
void towerOfHanoi(int n, char source, char auxiliary, char destination) 
{
    if (n == 1)
    {
        //Move the top disk from source to destination
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move (n-1) disks from source to auxiliary peg using destination as the auxiliary peg
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination peg
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move (n-1) disks from auxiliary peg to destination peg using source as the auxiliary peg
    towerOfHanoi(n - 1, auxiliary, source, destination);
}
int main() 
{
    cout << "\t\t============================" << endl;
    cout << "\t\t   Tower of Hanoi Solver   " << endl;
    cout << "\t\t============================" << endl;

    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;

    if (numDisks < 1)
        cout << "Invalid input. Please enter a positive integer." << endl;
    else
        cout << "Moves to solve the Tower of Hanoi problem with " << numDisks << " disks:" << endl;
        towerOfHanoi(numDisks, 'A', 'B', 'C');
    return 0;
}



/*Binary Search*/
#include <iostream>
using namespace std;

// Recursive binary search function
int binarySearch(int arr[], int left, int right, int target) 
{
    if (left <= right) 
    {
        int mid = left + (right - left) / 2;

        // If the target is found at the middle index
        if (arr[mid] == target)
            return mid;

        // If the target is in the left subarray
        if (arr[mid] > target)
            return binarySearch(arr, left, mid - 1, target);

        // If the target is in the right subarray
        return binarySearch(arr, mid + 1, right, target);
    }
    // If the target is not in the array
    return -1;
}
int main() 
{
    cout << "\t\t=====================" << endl;
    cout << "\t\t    Binary Search    " << endl;
    cout << "\t\t=====================" << endl;

    int n, target;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted integers:" << endl;

    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    cout << "Enter the element to search for: ";
    cin >> target;

    // Call the binarySearch function to find the element in the array
    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) 
        cout << "Element " << target << " found at index " << result << endl;
    else
        cout << "Element " << target << " not found in the array." << endl;
    return 0;
}



/*Euclidian GCD*/
#include <iostream>
using namespace std;

// Function to calculate the GCD using the Euclidean algorithm
int GCD(int a, int b) {
    if (b == 0) 
        return a;
    else
        return GCD(b, a % b);
}
int main() 
{
    cout << "\t\t================================" << endl;
    cout << "\t\t   GCD Calculator (Euclidean)   " << endl;
    cout << "\t\t================================" << endl;

    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate and display the GCD of num1 and num2 using the GCD function
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << GCD(num1, num2) << endl;
    return 0;
}



/*Extended Euclidian*/
#include <iostream>
using namespace std;

// Function to perform extended Euclidean algorithm
int extendedEuclidean(int a, int b, int &x, int &y) 
{
    if (b == 0) 
    {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int gcd = extendedEuclidean(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}
int main() 
{
    cout << "\t\t=========================================" << endl;
    cout << "\t\t   GCD Calculator (Extended Euclidean)   " << endl;
    cout << "\t\t=========================================" << endl;

    int num1, num2;
    int x, y;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;


    // Display the GCD and Bezout coefficients
    int gcd = extendedEuclidean(num1, num2, x, y);
    cout << "GCD(" << num1 << ", " << num2 << ") = " << gcd << endl;
    cout << "Bezout coefficients (x, y): x = " << x << ", y = " << y << endl;

    return 0;
}



/*Boolean Join*/
#include <iostream>
using namespace std;

// Function to perform Boolean join (OR) of two matrices
void booleanJoin(int A[100][100], int B[100][100], int result[100][100], int r, int c) 
{
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            // Perform Boolean OR operation
            result[i][j] = A[i][j] || B[i][j]; 
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[100][100], int r, int c) 
{
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int A[100][100];
    int B[100][100];
    int result[100][100];
    int rows, cols;

    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter the elements of the first Boolean matrix (0 or 1):" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            // Prompt the user for matrix A element
            cout << "Enter matrix A [" << i << "]" << "[" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Enter the elements of the second Boolean matrix (0 or 1):" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            // Prompt the user for matrix B element
            cout << "Enter matrix B [" << i << "]" << "[" << j << "]: ";
            cin >> B[i][j];
        }
    }

    // Calculate the Boolean join of the two matrices
    booleanJoin(A, B, result, rows, cols);
    cout << "Boolean Join of the two matrices:" << endl;
    displayMatrix(result, rows, cols);
   return 0;
}



/*Boolean Meet*/
#include <iostream>
using namespace std;

// Function to perform Boolean meet (AND) of two matrices
void booleanMeet(int A[100][100], int B[100][100], int result[100][100], int r, int c) 
{
    for (int i = 0; i < r; i++) 
        for (int j = 0; j < c; j++) 
        {
            // Perform Boolean AND operation
            result[i][j] = A[i][j] && B[i][j]; 
        }
}

// Function to display a matrix
void displayMatrix(int matrix[100][100], int r, int c) 
{
    for (int i = 0; i < r; i++)
    { 
        for (int j = 0; j < c; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
}
}

int main() 
{
    cout << "\t\t=========================================" << endl;
    cout << "\t\t   Boolean Matrix Meet (AND) Calculator  " << endl;
    cout << "\t\t=========================================" << endl;

    int A[100][100];
    int B[100][100];
    int result[100][100];
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter the elements of the first Boolean matrix (0 or 1):" << endl;
    for (int i = 0; i < rows; i++) 
        for (int j = 0; j < cols; j++) 
        {
            // Prompt the user for matrix A element
            cout << "Enter matrix A [" << i << "]" << "[" << j << "]: ";
            cin >> A[i][j];
        }

    cout << "Enter the elements of the second Boolean matrix (0 or 1):" << endl;
    for (int i = 0; i < rows; i++) 
        for (int j = 0; j < cols; j++) 
        {
            // Prompt the user for matrix B element
            cout << "Enter matrix B [" << i << "]" << "[" << j << "]: ";
            cin >> B[i][j];
        }

    // Calculate the Boolean meet of the two matrices
    booleanMeet(A, B, result, rows, cols);
    cout << "Boolean Meet of the two matrices:" << endl;
    displayMatrix(result, rows, cols);
    return 0;
}



/*Boolean Product*/
#include <iostream>
using namespace std;

// Function to calculate the product of two boolean matrices
void booleanProduct(int A[100][100], int B[100][100], int result[100][100], int r1, int c1, int r2, int c2) 
{
    if (c1 != r2) 
    {
        cout << "Matrix multiplication is not possible. Column count of the first matrix should be equal to the row count of the second matrix." << endl;
        return;
    }
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) 
        {
            result[i][j] = false;
            for (int k = 0; k < c1; k++) 
                result[i][j] = result[i][j] || (A[i][k] && B[k][j]);
        }
}

// Function to display a matrix
void displayMatrix(int matrix[100][100], int r, int c) 
{
    for (int i = 0; i < r; i++) 
    {    for (int j = 0; j < c; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    cout << "\t\t=======================================" << endl;
    cout << "\t\t   Boolean Matrix Product Calculator   " << endl;
    cout << "\t\t=======================================" << endl;

    int A[100][100];
    int B[100][100];
    int result[100][100];
    int rows1, cols1, rows2, cols2;

    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter the elements of the first Boolean matrix (0 or 1):" << endl;
    for (int i = 0; i < rows1; i++) 
        for (int j = 0; j < cols1; j++) 
        {
            // Prompt the user for matrix A element
            cout << "Enter matrix A [" << i << "]" << "[" << j << "]: ";
            cin >> A[i][j];
        }

    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> rows2 >> cols2;
    cout << "Enter the elements of the second Boolean matrix (0 or 1):" << endl;
    for (int i = 0; i < rows2; i++) 
        for (int j = 0; j < cols2; j++) 
        {
            // Prompt the user for matrix B element
            cout << "Enter matrix B [" << i << "]" << "[" << j << "]: ";
            cin >> B[i][j];
        }

    // Calculate the product of the two matrices
    if (cols1 == rows2) 
    {
        booleanProduct(A, B, result, rows1, cols1, rows2, cols2);
        cout << "Boolean Product of the two matrices:" << endl;
        displayMatrix(result, rows1, cols2);
    }
    return 0;
}



/*Conjuction Table*/
#include <iostream>
using namespace std;

int main() 
{
    cout << "\t\t=====================================" << endl;
    cout << "\t\t  Truth Table for Conjunction (AND)  " << endl;
    cout << "\t\t=====================================" << endl;
    
    cout << "A  |  B  |  A and B" << endl;
    cout << "===================" << endl;

    // Nested loops to iterate through all possible combinations of A and B
    for (int A = 0; A <= 1; A++) 
        for (int B = 0; B <= 1; B++) 
        {
            // Calculate A AND B
            int result = A && B;

            // Display the current combination and the result
            cout << A << "  |  " << B << "  |  " << result << "\n";
        }
    return 0;
} 



 /*Disjunction*/
#include <iostream>
using namespace std;

int main() 
{
    // Header for the truth table
    cout << "\t\t====================================" << endl;
    cout << "\t\t  Truth Table for Disjunction (OR)  " << endl;
    cout << "\t\t====================================" << endl;

    cout << "A  |  B  |  A or B" << endl;
    cout << "===================" << endl;

    // Nested loops to iterate through all possible combinations of A and B
    for (int A = 0; A <= 1; A++) 
        for (int B = 0; B <= 1; B++) 
        {
            // Calculate A OR B
            int result = A || B;

            // Display the current combination and the result
            cout << A << "  |  " << B << "  |  " << result << endl;
        }
    return 0;
} 



/*Implication*/
#include <iostream>
using namespace std;

int main() 
{
    // Header for the truth table
    cout << "\t\t======================================" << endl;
    cout << "\t\t Truth Table for Implication (A -> B) " << endl;
    cout << "\t\t======================================" << endl;
    cout << "A  |  B  |  A -> B" << endl;
    cout << "==================" << endl;

    // Nested loops to iterate through all possible combinations of A and B
    for (int A = 0; A <= 1; A++)
        for (int B = 0; B <= 1; B++) 
        {
            // Calculate A => B
            int result = !A || B; // A implies B is true unless A is true and B is false

            // Display the current combination and the result
            cout << A << "  |  " << B << "  |  " << result << endl;
        }
    return 0;
}



/*Valid Arguments*/
#include <iostream>
using namespace std;

// Function to compute the truth value of the expression !(A && B)
bool originalExpression(bool A, bool B) 
{
    return !(A && B);
}

// Function to compute the truth value of the expression (!A || !B)
bool demorganEquivalent(bool A, bool B) 
{
    return (!A || !B);
}

int main() {
    cout << "\t\t==========================================" << endl;
    cout << "\t\t  Validity Check for De Morgan's Theorem  " << endl;
    cout << "\t\t==========================================" << endl;
   
    cout << "A  |  B  |  NOT(A AND B)  |  (NOT A OR NOT B)" << endl;
    cout << "=======================================" << endl;

    for (int A = 0; A <= 1; A++) 
    {
        for (int B = 0; B <= 1; B++)
        {
            bool result1 = originalExpression(A, B);
            bool result2 = demorganEquivalent(A, B);
            cout << A << "  |  " << B << "  |" << "\t" << result1 << "\t" << "  |"  << "\t" << result2 << endl;

            if (result1 != result2) 
            {
                cout << "De Morgan's Theorem is not satisfied for A=" << A << " and B=" << B << endl;
                return 1; 
            }
        }
    }
    cout << endl;
    cout << "De Morgan's Theorem is satisfied for all input combinations." << endl;
    cout << "Hence, the argument is said to be valid and is proved using a truth table." << endl;
    return 0;
}







/*Graph*/
#include <iostream>
using namespace std;

int main() 
{
    cout << "\t\t=======" << endl;
    cout << "\t\t Graph " << endl;
    cout << "\t\t=======" << endl;

    int v, e; 
    cout << "Enter the number of vertices: ";
    cin >> v;
    cout << "Enter the number of edges: ";
    cin >> e;
  
    int graph[v][v];

     // Initialize all elements of the adjacency matrix to 0 (no edges)
    for (int i = 0; i < v; i++)
        for (int j = 0; j < v; j++) 
        {
            graph[i][j] = 0;
        }

    // Input the edges and update the adjacency matrix
    cout << "Enter the edges in the format 'vertex1 vertex2': " << endl;
    for (int i = 0; i < e; i++) 
    {
        int u, v;
        cin >> u >> v;
            // Update the adjacency matrix to represent the edge (u, v)
            graph[u][v] = 1;
            graph[v][u] = 1; // Assuming the graph is undirected
    }


    // Print the adjacency matrix
    cout << "Adjacency Matrix representing the Graph: " << endl;
    for (int i = 0; i < v; i++){
        for (int j = 0; j < v; j++) 
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}



// /*Equivalemce Relation*/
#include <iostream>
using namespace std;

int main() 
{
    cout << "\t\t========================" << endl;
    cout << "\t\t  Equivelence Relation  " << endl;
    cout << "\t\t========================" << endl;

    int n;
    cout << "Enter the number of pairs in the relation: ";
    cin >> n;

    int relation[n][2];
    cout << "Enter the pairs: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> relation[i][j];
        }
    }

    bool isEquivalence = true;

    // Check for reflexivity, symmetry, and transitivity
    for (int i = 0; i < n && isEquivalence; i++) 
    {
        if (relation[i][0] != relation[i][1])
            isEquivalence = false;
        
        for (int j = 0; j < n && isEquivalence; j++) 
        {
            if (relation[i][0] == relation[j][1] && relation[i][1] == relation[j][0])
                break;
            if (j == n - 1)
                isEquivalence = false;

            for (int k = 0; k < n && isEquivalence; k++) 
            {
                if (relation[i][1] == relation[k][0] && relation[i][0] != relation[k][1])
                    isEquivalence = false;
            }
        }
    }


    if (isEquivalence)
        cout << "The given relation is an equivalence relation." << endl;
    else
        cout << "The given relation is not an equivalence relation." << endl;
    return 0;
}


