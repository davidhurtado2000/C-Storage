#include<iostream>
#include<stdlib.h>
using namespace std;

class Person {

	private: //Atributes of the Persona
		 int age;
		 string name;
		 int height;
	public: //Methods of the Person
		Person(int,string, int); //Constructor
		void read();
		string speak();
		string getName();
		int getAge();
		int getHeight();
		void setName(string);
};

Person::Person(int _age, string _name, int _height){
	age = _age;
	name = _name;
	height = _height;
}

void Person::read(){
	cout << "Im able to read a book with no problem"<< endl;
}

string Person::speak(){
	string word = "I can speak like a person";
	return word;
}

string Person::getName(){
	return name;
}

int Person::getAge(){
	return age;
}

int Person::getHeight(){
	return height;
}

void Person::setName(string _newname){
	name = _newname;
}
