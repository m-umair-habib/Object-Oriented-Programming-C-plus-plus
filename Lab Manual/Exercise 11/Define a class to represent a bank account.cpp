// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: 
//	Define a class to represent a bank account. Include the following members: Data members:
//						1) Name of the depositor
//						2) Account number
//						3) Type of account
//						4) Balance amount in the account.
//	Member functions:
//						1) To assign initial values
//						2) To deposit an amount
//						3) To withdraw an amount after checking the balance
//						4) To display name and balance.
//	Write a main program to test the program.

#include<iostream>
#include<string>
using namespace std;

class bank_account{
	private:
		string name;
		float balance;
	public:
		bank_account(string account_name, float initial_balance){
			name = account_name;
			balance = initial_balance;
		}
		
		void deposit(float amount){
			if(amount > 0){
				balance += amount;
				cout << "Deposited: " << amount << endl;
			}
			else{
				cout << "Invalid deposit amount!" << endl;
			}
		}
		
		void withdraw(float amount){
			if(amount > 0 && amount <= balance){
				balance -= amount;
				cout << "Withdraw: " << amount << endl;
			}
			else if(amount > balance){
				cout << "Insufficient balance!" << endl;
			}
			else{
				cout << "Invalid withdrawal amount!" << endl;
			}
		}
		
		void display(){
			cout << "Account Holder: " << name << endl;
			cout << "Balance: " << balance << endl;
		}
};

int main(){
	string account_name;
	float initial_balance, deposit_amount, withdraw_amount;
	
	cout << "Enter account holder's name: ";
	getline(cin, account_name);
	
	cout << "Enter initial balance: ";
	cin >> initial_balance;
	
	bank_account account(account_name, initial_balance);
	
	account.display();
	
	cout << "Enter amount to deposit: ";
	cin >> deposit_amount;
	account.deposit(deposit_amount);
	
	cout << "Enter amount to withdraw: ";
	cin >> withdraw_amount;
	account.withdraw(withdraw_amount);
	
	account.display();
	
	return 0;
}
