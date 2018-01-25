//============================================================================
// Name        : Controller.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Controller.hpp"

Controller :: Controller()
{

}

void Controller :: start()
{
	string name = "Jeremy Saysanasy";
	string * nameptr = &name;

	for (int index = 0; index <= 4; index++)
	{
		cout << "My name is " << name << endl;

		cout << nameptr << endl;
	}

	for (int index = 13; index <= 31; index++)
	{
		cout << index << endl;
	}

}
