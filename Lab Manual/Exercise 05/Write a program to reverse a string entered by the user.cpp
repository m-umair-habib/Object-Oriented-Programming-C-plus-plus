// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Write a C++ program to reverse a string entered by the user.

#include<iostream>
using namespace std;

class string_reverse{
	private:
		string input_string;
	public:
		void get_string(){
			cout << "Enter a string: ";
			cin >> input_string; 
		}
		
		string reverse_string(){
			string reverse_string = "";
			
			for(int i=input_string.length() - 1; i >=0; i--){
				reverse_string += input_string[i];
			}
			return reverse_string;
		}
		
		void display_reversed(){
			cout << "Reversed String: " << reverse_string() << endl;
		}
};

int main(){
	string_reverse reverse;
	
	reverse.get_string();
	reverse.display_reversed();
	
	return 0;
}
