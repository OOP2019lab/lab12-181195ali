#pragma once
#include "shape.h"

class triangle : public shape
{
	float base;
	float height;
public:
	triangle(float,float,string);
	float area()
	{
		float temp;
		temp = 0.5*base*height;
		return temp;
	};
};