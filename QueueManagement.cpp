#include <iostream>
using namespace std; 
class Queue {       //Class Declaration
	
    //No Specifier means data is private here
    int size;       //Size represents number of elements
	int* queue; 
	
	public:
	Queue() {           //Making a constructor, automatically called
		size = 0;
		queue = new int[100];
	}
	void remove() {         //Function to decrease the queue size
		if (size == 0) { 
			cout << "Queue is empty"<<endl; 
			return; 
		} 
		else { 
			for (int i = 0; i < size - 1; i++) { //Size-1 checks upto the last element
				queue[i] = queue[i + 1];            //Shifts the elements to the left of the queue
			} 
			size--; //last element is shifted to the previous index
		} 
	} 
	void print() { 
		if (size == 0) { 
			cout << "Queue is empty"<<endl; 
			return; 
		} 
		for (int i = 0; i < size; i++) { 
			cout << queue[i]<<"  ";
		} 
		cout <<endl;
	}
	//your code goes here
	void add(int x){
		size+=1;        //Adding a new data means number of elements is increased
		queue[size-1]=x;    //The new data is placed at the end of the queue
	}
}; 

int main() { 
	Queue q; 
	q.add(42); q.add(2); q.add(8); q.add(1); 
	q.print();          //Prints 42 2 8 1
	q.remove();         // Removes 42
	q.add(128);         // Adds 128 at the end of queue
	q.print();          // Prints 2 8 1 128
	q.remove();         // Removes 2
	q.remove();         // Removes 8
	q.print();          // Prints 1 128

	return 0; 
} 