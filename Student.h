#include<iostream>
#include<stdlib.h>
#include "Person.h"
using namespace std;

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


Student::Student(int _age, string _name, int _height, int _gradelevel, int _ammountoffriends, int _classes) : Person(_age,_name,_height)
{
	gradelevel = _gradelevel;
	ammountoffriends = _ammountoffriends;
	classes = _classes;
}

void Student::haveLunch(){
	cout << "Im a student that is having lunch";
}

