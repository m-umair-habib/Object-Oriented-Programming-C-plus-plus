// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a C++ program to find the prime factors of a number.

#include<iostream>
using namespace std;

class prime_factor{
	private:
		int number;
	public:
		void get_number(){
			cout << "Enter a number: "; cin >> number;
		}
		
	void find_prime_factor(){
		cout << "Prime factors of " << number << " are: ";
		
		while(number % 2 == 0){
			cout << 2 << " ";
			number /= 2;
		}
		
		for(int i=3; i*i<=number; i+=2){
			while(number % i == 0){
				cout << i << " ";
				number /= i;
			}
		}
		if(number > 2){
			cout << number;
		}
	cout << endl;
	}	
};

int main(){
	prime_factor pf;
	
	pf.get_number();
	pf.find_prime_factor();
	
	return 0;
}
