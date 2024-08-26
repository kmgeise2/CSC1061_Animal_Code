/*******************************************************************************
/ MODULE:  cat.cpp
/ AUTHOR:  Jeff Hemmes
/ PURPOSE: Implements the C++ cat class defined in cat.h. The class maintains
/          information about a cat using fields and methods inherited from the
/          animal superclass.
/
/          (c) 2020 CCCOnline
*******************************************************************************/

#include <sstream>
#include "cat.h"

using namespace std;

// Constructor that initializes the fields of the cat class to default values

cat::cat() : animal() {
    this->species = "cat";
    this->name = "Tabby";
    this->age = 0;
    this->neutered = false;
}

// Constructor that initializes three of the four fields of the cat class to
// values passed as parameters using the superclass constructor. The species
// field is set to "cat" and should not be modified.

cat::cat(string name, int age, bool neutered) : animal(name, age, neutered) {
    this->species = "cat";
}

