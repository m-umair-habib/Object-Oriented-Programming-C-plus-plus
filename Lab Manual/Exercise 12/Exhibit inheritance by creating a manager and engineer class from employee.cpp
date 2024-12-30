// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Exhibit inheritance by creating a Manager and Engineer class from Employee class with appropriate data members and functions.

#include<iostream>
#include<string>
using namespace std;

class employee{
	protected:
		string name;
		int id;
		float salary;
	public:
		
		employee(string emp_name, int emp_id, float emp_salary){
			name = emp_name;
			id = emp_id;
			salary = emp_salary;
		}
		
		void display(){
			cout << "Employee name: " << name << endl;
			cout << "Employee ID: " << id << endl;
			cout << "Salary: " << salary << endl;
		}
};

class manager: public employee{
	private:
		int teamsize;
	public:
		manager(string emp_name, int emp_id, float emp_salary, int emp_teamsize):employee(emp_name, emp_id, emp_salary){
			teamsize = emp_teamsize;
		}
		void display(){
			employee::display();
			cout << "Team Size: " << teamsize << endl;
		}
};

class engineer: public employee{
	private:
		string specialization;
	public:
		engineer(string emp_name, int emp_id, float emp_salary, string emp_specialization): employee(emp_name, emp_id, emp_salary){
			specialization = emp_specialization;
		}
		
		void display(){
			employee::display();
			cout << "Specialization: " << specialization << endl; 
		}
};

int main(){
	
	manager mag("Umair", 101, 75000, 10);
	
	engineer eng("Habib", 102, 65000, "SE");
	
	cout << "\n Manager Details: "<< endl;
	mag.display();
	
	cout << "\n Engineer Details: "<< endl;
	eng.display();
	
	return 0;
}
