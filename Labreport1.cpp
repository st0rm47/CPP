/* Wap to find whether a given number is prime or not */
#include<iostream>
using namespace std;
    int main(){
    int i, num;
    cout << "Enter a number: ";
    cin >> num;
    int count = 0;
    for (i=1;i<=num;i++){
        if (num%i==0){
            count++;
        }
    }
    if (count == 2){
    cout << num << " is a prime number.";
    }
    else{
    cout << num << " is not a prime number.";
    }
}


/* WAP to find factorial of a number using function */
#include <iostream>
using namespace std;
int facto (int);
int main (){
    int i, num;
    cout << "Enter a number: ";
    cin >> num;
    cout << facto (num); 
    return 0;
}
int facto (int num){ 
    if (num <=1){
        return 1;
    }
    else{
        return num*facto(num-1);
    }
}

/*WAP to find fibonacci series upto nth term using recusrion */
#include<iostream>
using namespace std;
int fibo(int);
int main(){
    int i,num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Fibonacci Series: ";
    for (int i= 0; i<num; i++){
        cout << fibo(i) << " ";
    }
    return 0;
}
int fibo(int num){ 
    if (num < 1)
        return 0;
    else if(num==1)
        return 1;
    else
        return fibo(num-1) + fibo(num-2);
}


/* WAP to find volume where height should be given default argument with value 10 */
#include<iostream>
using namespace std;
int volume (int l, int b, int h=10){
    float volume;
    volume = l*b*h;
    return volume;
}
int main (){
    int l,b;
    cout <<"Enter the values of length and breadth: ";
    cin >> l >> b;
    cout << volume(l,b);
    return 0;
}

// WAP to find area of square, triangle and circle using the concept of function overloading.
#include<iostream>
using namespace std;
int area(int side){
    return(side*side);
}
float area(float base,float height){
   return((base*height)/2);
}
float area(float radius){
    return(3.14*radius*radius);
}
int main(){
        int side;
        float radius,base,height;
        cout << "Enter side of a square: ";
        cin >> side;

        cout << "Enter base and height of triangle: ";
        cin >> base >> height;

        cout << "Enter radius of circle: ";
        cin >> radius;

        cout << endl;
        cout << "Area of square is " << area(side) << endl;
        cout << "Area of triangle is " << area(base,height) << endl;
        cout << "Area of circle is " << area(radius);
}

