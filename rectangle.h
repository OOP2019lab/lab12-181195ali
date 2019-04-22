#pragma once
#include "shape.h"


class rectangle : public shape
{
	float height;
	float width;
public:
	rectangle(float,float,string);
	float area()
	{
		float temp;
		temp = height*width;
		return temp;
	};
};