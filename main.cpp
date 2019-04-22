#pragma once
#include <conio.h>
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"

int sumArea(shape &Shape1,shape &Shape2)
{
	int sum =0 ;
	sum = Shape1.area() + Shape2.area();
	return sum;
}
 

int main()
{
	
	int count= 5;
	shape* shapesArray = new shape[count];
	for(int i=0; i<count;)
	{
  		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
  		switch (_getch())
  		{
        		case '1':
					int b,h;//get base from user as input
              		string clr;//get height from user as input
              		//get color from user as input
              		shapesArray[i] = new triangle(b,h,clr);
					// create new triangle object and add to shapesArray[i]
                                		i++;
              		break;
        		case '2':
              		//get length from user as input
              		//get width from user as input
              		//get color from user as input
              		// create new rectangle object and add to shapesArray[i]
                                		i++;
              		break;
 
        		case '3':
              	
              		//get radius from user as input
              		// create new circle object and add to shapesArray[i]
                                		i++;
              		break;
 
   	 		default:
              		cout<<"Invalid input. Enter again." <<endl<<endl;
              		break;
	}


}