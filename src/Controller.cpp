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
	int evenInt [5] = { 2, 4, 6, 8, 10};
	double numbersOfDouble [5] = { 2.2, 4.4, 6.6, 8.8, 10.10};
	string names [5] = {"Jem", "Jack", "Parsley", "Pandama", "Cerci"};

	for (int index = 0; index <= 4; index++)
	{
		cout << "My name is " << name << endl;

		cout << nameptr << endl;
	}

	for (int index = 13; index <= 31; index++)
	{
		cout << index << endl;
	}

	for (int count : evenInt)
	{
		cout << "This array has " << count << " as a even number." << endl;
	}

	for (double count : numbersOfDouble)
	{
		cout << "Decimals are weird looking." << count << endl;
	}

	for (string count : names)
	{
		cout << "These are names that I randomly found: " << count << endl;
	}

}
