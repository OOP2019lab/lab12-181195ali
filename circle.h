#pragma once
#include "shape.h"

class circle : public shape
{
	float radius;
public:
	circle(float,string);
	float area()
	{
		float temp;
		temp = 3.14*radius*radius;
		return temp;
	};
};