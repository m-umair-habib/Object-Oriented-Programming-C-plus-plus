// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a C++ program to implement a simple calculator with addition, subtraction, multiplication,and division operations.

#include<iostream>
using namespace std;

class calculator{
	private:
		float num1, num2;
	public:
		void get_input(){
			cout << "Enter first number: "; cin >> num1;
			
			cout << "Enter second number: "; cin >> num2;
		}
		
		float add(){
			return num1 + num2;
		}
		
		float subtract(){
			return num1 - num2;
		}
		
		float multiply(){
			return num1 * num2;
		}
		
		float divide(){
			if(num2 != 0){
				return num1 / num2;
			}
			else{
				cout << "Error: Division by zero is not allowed!" << endl;
				return 0;
			}
		}
		
		void display_results(){
			cout << "Addition: " << add() << endl;
			cout << "Subtraction: " << subtract() << endl;
			cout << "Multiplication: " << multiply() << endl;
			cout << "Division: " << divide() << endl;
		}
};

int main(){
	calculator cal;
	
	cal.get_input();
	cal.display_results();
	
	return 0;
}
