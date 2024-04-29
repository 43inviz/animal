#pragma once
#include "home_pet.h"
class Parrot:public home_pet
{
	string _parrotFly;
public:
	Parrot() :home_pet() {
		_parrotFly = "";
	}
	Parrot(string petName, unsigned short age, string parrotFly) :home_pet(petName,age) {
		_parrotFly = parrotFly;
	}

	void show() {
		home_pet::show();
		cout << "Parrot fly: " << _parrotFly << endl;
	}
	
};

