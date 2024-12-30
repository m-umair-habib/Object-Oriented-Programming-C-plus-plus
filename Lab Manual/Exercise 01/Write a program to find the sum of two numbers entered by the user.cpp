// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a C++ program to find the sum of two numbers entered by the user.

#include<iostream>
using namespace std;

class calculator{
	private:
		int num1, num2;
	public:
		void getnumbers(){
			cout << "Enter the First number: "; cin >> num1;
			cout << "Enter the Second number: "; cin >> num2;
		}
		
		int calculate_sum(){
			return num1 + num2;
		}
		
		void display_sum(){
			cout << "The sum of " << num1 << " and " << num2 << " is: " << calculate_sum() << endl;
		}
};

int main(){
	calculator cal;
	
	cal.getnumbers();
	cal.calculate_sum();
	cal.display_sum();
	
	return 0;
}
