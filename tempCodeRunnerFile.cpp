/*Make a class named Fruit with data member to calculate no. of fruits in a basket.
// Create two other classes named Apples and Mangoes to calculate number of apples and mangoes in basket.
// Print the number of fruits of each type and total no. of fruits in the basket.*/

// #include<iostream>
// using namespace std;
// class Fruit{
// private:
//     int numFruits;

// public:
//     Fruit(int num){
//         numFruits= num;
//     }

//     int get_num() {
//         return numFruits;
//     }
// };
// class Mangoes: public Fruit{
// private:
//     int nummangoes;
// public:
//     Mangoes(int num): Fruit(num){}
//     void print_mangoes(){
//         cout<<"Number of mangoes: " << get_num() << endl;
//     }
// };
// class Apples: public Fruit{
//     public:
//     Apples(int num): Fruit(num){}

//     void print_apples(){
//         cout<<"Number of apples: " <<get_num() << endl;
//     }
// };
// int main (){
//     Mangoes mango_object(5); //5 mangoes
//     Apples apple_object(3); // 3 mangoes
    
//     //output part
//     mango_object.print_mangoes();
//     apple_object.print_apples();
    
//     //total number of fruits
//     int totalFruits= apple_object.get_num() + mango_object.get_num();
//     cout<<"Total number of fruits in basket is: " << totalFruits << endl;

//     return 0;
// }