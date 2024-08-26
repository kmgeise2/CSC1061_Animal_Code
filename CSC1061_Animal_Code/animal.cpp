/*******************************************************************************
/ MODULE:  animal.cpp
/ AUTHOR:  Jeff Hemmes
/ PURPOSE: Implements the C++ animal class defined in animal.h. The class
/          maintains information about any type of animal in subclasses derived
/          from this class.
/
/          (c) 2020 CCCOnline
*******************************************************************************/

#include <sstream>
#include "animal.h"

using namespace std;

// Default constructor that initializes the three fields of the animal class to 
// compiler default values

animal::animal() {
}

// Constructor that initializes the three fields of the animal class to values
// passed as parameters

animal::animal(string name, int age, bool neutered) {
    this->name = name;
    this->age = age;
    this->neutered = neutered;
}

// Get methods for all four class variables (fields)

string animal::getName() {
    return this->name;
}

string animal::getSpecies() {
    return this->species;
}

int animal::getAge() {
    return this->age;
}

bool animal::getNeutered() {
    return this->neutered;
}

// Set methods for three of the four class variables (fields). The species field
// is immutable once set

void animal::setName(string name) {
    this->name = name;
}

void animal::setAge(int age) {
    this->age = age;
}

void animal::setNeutered(bool neutered) {
    this->neutered = neutered;
}

// Creates a string representation of an animal object. Useful for printing.

string animal::toString() {
    stringstream values;

    values << "Name: " << this->name << ", Age: " << this->age << ", Neutered: ";
    if (neutered)
        values << "Yes";
    else
        values << "No";

    return values.str();
}

