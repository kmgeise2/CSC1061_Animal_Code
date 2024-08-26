/*******************************************************************************
/ MODULE:  cat.h
/ AUTHOR:  Jeff Hemmes
/ PURPOSE: Defines a C++ cat class that is a subclass of the animal class
/
/          (c) 2020 CCCOnline
*******************************************************************************/

#ifndef _CAT_H_
#define _CAT_H_
#include "animal.h"

using namespace std;

class cat : public animal {
public:

	// Constructors to initialize class variables: one with no parameters, one with three
	cat();
	cat(string, int, bool);
};

#endif 

