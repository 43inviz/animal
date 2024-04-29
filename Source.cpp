#include <iostream>
#include <string>
#include "home_pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"

using namespace std;


int main() {
	
	Dog dog("Bobby", 12, "Gav");
	Cat cat("Charlie", 9, "Black");
	Parrot parrot("Queue", 2, "YES!");
	dog.show();
	cat.show();
	parrot.show();
	
	return 0;
}