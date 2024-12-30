// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a C++ program to generate a Fibonacci sequence of a given length.

#include<iostream>
using namespace std;

class fibonacci{
	private:
		int length;
	public:
		void get_length(){
			cout << "Enter the length of the Fibonacci sequence: "; cin >> length;
		}
	void generate_sequence(){
		int a=0, b=1, next;
		cout << "Fibonacci Sequence of length " << length << ": ";
		
		if(length >= 1) cout << a << " ";
		if(length >= 2) cout << b << " ";
		
		for(int i=3; i<=length; i++){
			next = a + b;
			cout << next << " ";
			a = b;
			b = next;
		}
		cout << endl;
	}
};

int main(){
	fibonacci fib;
	
	fib.get_length();
	fib.generate_sequence();
	
	return 0;
}
