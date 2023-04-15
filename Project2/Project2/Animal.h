#pragma once

using namespace System;

public class Animal
{
	private:
		int name;
	public:

	Animal::Animal(int _name) {
		name = _name;
}
	int Animal::getAge() {
		return name;
}

};

