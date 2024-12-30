// ----- Developed by: Muhammad Umair Habib----- 
// Question statement:  Write a C++ program to find the largest among three numbers entered by the user.

#include<iostream>
using namespace std;

class largest_number{
	private:
		int num1, num2, num3;
	public:
		void getnumbers(){
			cout << "Enter first number: "; cin >> num1;
			
			cout << "Enter second number: "; cin >> num2;
			
			cout << "Enter third number: "; cin >> num3;
		}
		
		int find_largest(){
			if(num1 >= num2 && num1 >= num3){
				return num1;
			}
			else if(num2 >= num1 && num2 >= num3){
				return num2;
			}
			else{
				return num3;
			}
		}
		
		void display_largest(){
			cout << "The largest number among " << num1 << ", " << num2 << " and " << num3 << " is: " << find_largest() << endl;
		}
};

int main(){
	largest_number largest;
	
	largest.getnumbers();
	largest.display_largest();
	
	return 0;
}
