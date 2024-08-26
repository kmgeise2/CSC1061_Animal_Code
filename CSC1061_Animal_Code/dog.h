/*******************************************************************************
/ MODULE:  dog.h
/ AUTHOR:  Jeff Hemmes
/ PURPOSE: Defines a C++ dog class that is a subclass of the animal class
/
/          (c) 2020 CCCOnline
*******************************************************************************/

#ifndef _DOG_H_
#define _DOG_H_

#include "animal.h"

class dog : public animal {
public:

	// Constructors to initialize class variables: one with no parameters, one with three
	dog();
	dog(string, int, bool);
};

#endif  

