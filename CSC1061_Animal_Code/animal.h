/*******************************************************************************
/ MODULE:  animal.h
/ AUTHOR:  Jeff Hemmes
/ PURPOSE: Defines a C++ animal class that represents any kind of animal
/
/          (c) 2020 CCCOnline
*******************************************************************************/

#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <string>
using namespace std;

class animal {
protected:
	string name;
	string species;
	int age;
	bool neutered;
public:

	// Constructors to initialize class variables: one with no parameters, one with three
	animal();
	animal(string, int, bool);

	// Class methods.  The modifier virtual means the method can be overridden in a subclass
	virtual string getName();
	virtual string getSpecies();
	virtual int getAge();
	virtual bool getNeutered();
	virtual void setName(std::string name);
	virtual void setAge(int age);
	virtual void setNeutered(bool neutered);
	virtual string toString();
};

#endif 

