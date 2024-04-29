#pragma once
#include <string> 
#include <iostream>
using namespace std;

class home_pet
{
	string _petName;
	unsigned short _age;
public:

	home_pet(string petName, unsigned short age) :_petName(petName), _age(age){}
	home_pet() :_petName(""), _age(0){}

protected:
	void show() {
		cout << "Pet name: " << _petName << endl;
		cout << "Age: " << _age << endl;
	}
};

