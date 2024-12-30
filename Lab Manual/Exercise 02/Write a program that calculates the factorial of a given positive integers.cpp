// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a C++ program that calculates the factorial of a given positive integer.

#include<iostream>
using namespace std;

class factorial_calculator{
	private:
		int number;
		int factorial;
	public:
		void getnumber(){
			cout << "Enter a Positive number: "; cin >> number;
			while(number < 0){
				cout << "Factorial is not defined for negative numbers.";
				cout << "Enter Positive numbers only!";
				cin >> number;
			}
		}
		
		void calculating_factorial(){
			factorial = 1;
			for(int i=1; i<=number; ++i){
				factorial *= i;
			}
		}
		
		void display_factorial(){
			cout << "The factorial of " << number << " is: " << factorial << endl;
		}
};

int main(){
	factorial_calculator cal_fact;
		
	cal_fact.getnumber();
	cal_fact.calculating_factorial();
	cal_fact.display_factorial();
	
	return 0;
}
