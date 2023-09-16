#include<iostream>
using namespace std;
int main(){
    // int num = 42;
    // int *p = &num;
    // cout << p << endl;
    // cout << *p;
    // /*Creates a pointer called p and assigns the address of variable num
    // Line 6 prints the address 
    // Line 7 prints the value stored in that address*/

    // string name = " Subodh";
    // string *ptr = & name;
    // //Pointer variable should have same data type as the variable its referring to

    int a = 4;
    int *p = &a;
    cout << *p << endl;
    a += 2;
    cout << a << endl;  // Value of a increased by 2
    *p += 3;
    cout << *p << endl; // Value of *p is increased = Value of a increased by 3
    a -= 1;
    cout << a << endl;  // Value of a decreased by 1


    //Array and Pointers
    int arr[] = {2, 4, 6, 8};
    int *p = arr;
    cout << *p << endl; // first element
    cout << *(p+1) << endl; // second element

    for(int i=0;i<4;i++) {
    cout << *p << endl;
    p++;
    }
    /* &p[i] equivalent to p+i representing the address 
    p refers to the first value i.e p[0]
    p+i refers to the upcoming value depending upon i 
    (p+1) refers as p[1], (p+2) refers as p[2] */


    //Dynamic Memory Allocation
    int size = 10;
    int *s= new int[10];
    //Allocates size as 10
    delete [] s;
    //Deletes the allocated memory
}


/*--->> Array and Pointers */
#include <iostream>
using namespace std;
int main() {
    int ages[] = {19, 24, 36, 45, 56, 52, 21, 27, 24, 34, 29, 60, 40, 42, 45, 47, 22, 30, 34, 20, 18, 26, 51, 43, 47, 39, 22, 34, 56, 52, 21, 27, 24, 37, 19, 24, 36, 45, 44, 49, 23, 25, 19, 40, 29, 60, 40, 42, 45, 47, 61, 30, 19, 43, 47, 39, 41, 46, 29, 24, 21, 25, 28};
    int size = 63;
    int *p = ages;
    int sum =0;
        for(int i=0;i<size;i++) {
        sum+=*p;
        p++;   
    }
    cout << sum/size << endl ;

}

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;       // size of array
    int * nums = new int[n]; // Allocates memory size
    for (int i=0;i<n;i++){
        cin >> nums[i];        // Taking array inputs
    }
    int max = nums[0];

    //Prints the maximum element in an array
    for(int i=0; i<n; i++) {
        if(nums[i]>max)
            max = nums[i];
    }
    cout << max;
}