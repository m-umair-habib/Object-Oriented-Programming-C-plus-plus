// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a C++ program to check if a number is even or odd.

#include<iostream>
using namespace std;

class check_number{
	private:
		int number;
	public:
		void getnumber(){
			cout << "Enter a number: "; cin >> number;
		}
		
		bool isEven(){
			return (number % 2 == 0);
		}
		
		void display_result(){
			if(isEven()){
				cout << "The number " << number << " is Even." << endl;
			}
			else{
				cout << "The number " << number << " is Odd." << endl;
			}
		}
};

int main(){
	check_number checker;
	
	checker.getnumber();
	checker.display_result();
	
	return 0;
}
