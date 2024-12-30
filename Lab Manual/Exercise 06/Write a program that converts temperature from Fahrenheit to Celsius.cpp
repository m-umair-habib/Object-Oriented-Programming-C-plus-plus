// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a C++ program to reverse a string entered by the user.

#include<iostream>
using namespace std;

class temperature_converter{
	private:
		float fahrenheit;
	public:
		void get_temperature(){
			cout << "Enter temperature in Fahrenheit: ";
			cin >> fahrenheit; 
		}
		
		double convert_to_celsius(){
			return (fahrenheit - 32)*5/9;
		}
		
		void display_celsius(){
			cout << "Temperatur in Celsius: " << convert_to_celsius() << "°C"<< endl;
		}
};

int main(){
	temperature_converter converter;
	
	converter.get_temperature();
	converter.display_celsius();
	
	return 0;
}
