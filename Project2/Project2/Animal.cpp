#include "Animal.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

Animal::Animal(int _age) {
	age = _age;
}

int Animal::getAge() {
	return age;
}