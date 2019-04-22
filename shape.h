#pragma once
#include <iostream>
#include <string>
using namespace std;

class shape
{
protected:
	string type;
public:
	shape();
	shape(string);
	virtual float area()
	{
		return 0.0;
	};
	string color;
};