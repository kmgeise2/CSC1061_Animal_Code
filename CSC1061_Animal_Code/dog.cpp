/*******************************************************************************
/ MODULE:  dog.cpp
/ AUTHOR:  Jeff Hemmes
/ PURPOSE: Implements the C++ dog class defined in dog.h. The class maintains
/          information about a dog using fields and methods inherited from the
/          animal superclass.
/
/          (c) 2020 CCCOnline
*******************************************************************************/

#include <sstream>
#include "dog.h"

// Constructor that initializes the fields of the dog class to default values

dog::dog() : animal() {
	this->species = "dog";
	this->name = "Fido";
	this->age = 0;
	this->neutered = false;
}

// Constructor that initializes the fields of the dog class to values passed as
// parameters. Three of the four fields as set using the superclass constructor
// while the species field is set to "dog" and should not be modified.

dog::dog(string name, int age, bool neutered) : animal(name, age, neutered) {
	this->species = "dog";
}

