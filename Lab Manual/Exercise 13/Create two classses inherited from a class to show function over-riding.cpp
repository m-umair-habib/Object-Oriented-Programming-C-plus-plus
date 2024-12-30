// ----- Developed by: Muhammad Umair Habib----- 
// Question statement: Create two classes inherited from a class to show function over-riding.

#include<iostream>
using namespace std;

class animal{
	public:
		virtual void makesound(){
			cout << "Animal makes a sound" << endl;
		}
};

class dog: public animal{
	public:
		void makesound() override{
			cout << "Dog barks: woof woof!" << endl;
		}
};

class cat: public animal{
	public:
		void makesound() override{
			cout << "Cat meows: meow meow!" << endl;
		}
};

int main(){
	animal* animal_1;
	
	dog dog_1;
	cat cat_1;
	
	animal_1 = &dog_1;
	animal_1->makesound();
	
	animal_1 = &cat_1;
	animal_1->makesound();
	
	return 0;
}
