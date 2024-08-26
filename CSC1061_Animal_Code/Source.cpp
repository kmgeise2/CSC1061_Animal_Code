// CSC1061 Inheritance example 
// Base class is animal
// dog and cat are derived classes and inherit from animal
// Main() created by Kathy Geise
// Date: 8/25/24

#include<iostream>
#include "animal.h";
#include "dog.h";
#include "cat.h";

using namespace std;

int main() {
	// Create a dog object and a cat object 
	// Using the default constructor
	dog Fido;
	cat Kitty;

	// Create a dog object and a cat object
	// Using passed parameters
	dog Oliver("Oliver", 1, 0);
	cat Elle("Elle", 3, 1);

	// Print values for each object
	cout << "Animals with default values" << endl;
	cout << Fido.toString() << endl;
	cout << Kitty.toString() << endl;
	cout << "\nPassed parameters" << endl;
	cout << Oliver.toString() << endl;
	cout << Elle.toString() << endl;

}