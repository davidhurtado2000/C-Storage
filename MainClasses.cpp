#include <iostream>
#include<stdlib.h>
#include "Student.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Person Person1 = Person(13,"David",12);
	//Person1.read();
	//cout << Person1.speak();
	//cout << Person1.getName();
	//Person1.setName("Dave");
	//cout << Person1.getName();
	
	Student Student1 = Student(Person1.getAge(),Person1.getName(),Person1.getHeight(),11,20,5);
	cout << Student1.getName();
	Student1.haveLunch();
	cout << Student1.getAge();
}
