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
	for (int index = 0; index < 10; index++)
	{
		cout << "This is the " << index + 1 << " time in the loop." << endl;
	}

}
