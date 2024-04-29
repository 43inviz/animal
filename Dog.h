#pragma once
#include "home_pet.h"
class Dog:public home_pet
{
	string _dogFunct;
public:
	Dog() :home_pet(),_dogFunct(""){}
	Dog(string petName,unsigned short age,string dogFunct):home_pet(petName,age),_dogFunct(dogFunct){}

	void show() {

		home_pet::show();
		cout << "Dog function: " << _dogFunct << endl;
	}
};

