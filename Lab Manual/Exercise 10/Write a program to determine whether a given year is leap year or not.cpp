// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a C++ program to determine whether a given year is a leap year or not.

#include<iostream>
using namespace std;

class leap_year{
	private:
		int year;
	public:
		void get_year(){
			cout << "Enter a year: "; cin >> year;
		}
		
		bool is_leap_year(){
			if((year % 400 == 0) || (year % 4 == 0 && year % 100 !=0)){
				return true;
			}
			return false;
		}
		
		void display_result(){
			if(is_leap_year()){
				cout << year << " is a leap year." << endl;
			}
			else{
				cout << year << " is not a leap year." << endl;
			}
		}
};

int main(){
	leap_year leap;
	leap.get_year();
	leap.display_result();
	
	return 0;
}
