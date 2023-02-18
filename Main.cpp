//Clases in C++

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

class Student : public Person{
	private:
		int gradelevel;
		int ammountoffriends;
		int classes;
	public:
		Student(int,string,int,int,int,int);
		void study();
		void haveLunch();
};

//Create the constructor function
Person::Person(int _age, string _name, int _height){
	age = _age;
	name = _name;
	height = _height;
}

Student::Student(int _age, string _name, int _height, int _gradelevel, int _ammountoffriends, int _classes) : Person(_age,_name,_height)
{
	gradelevel = _gradelevel;
	ammountoffriends = _ammountoffriends;
	classes = _classes;
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

void Student::haveLunch(){
	cout << "Im a student that is having lunch";
}


int main() {
	
	Person Person1 = Person(16,"Nicolas",5);
	//Person1.read();
	//cout << Person1.speak();
	//cout << Person1.getName();
	//Person1.setName("Dave");
	//cout << Person1.getName();
	
	Student Student1 = Student(Person1.getAge(),Person1.getName(),Person1.getHeight(),11,20,5);
	cout << Student1.getName();

	

	system("pause");
	return 0;
}
