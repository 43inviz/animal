#pragma once
#include "home_pet.h"
class Cat:public home_pet
{
	string _catColor;
public:
	Cat() :home_pet() {
		_catColor = "";
	}
	Cat(string petName, unsigned short age, string catColor) :home_pet(petName, age) {
		_catColor = catColor;
	}

	void show() {
		home_pet::show();
		cout << "Cat color: " << _catColor << endl;
	}
};

