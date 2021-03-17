#include <stdio.h>

int main()
{
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;
	raduisOfCircle=6; 
	sideOfSquare=8;
	legthOfRectangle=4;
	breadthOfRectangle=8;
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));
	printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));
	printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));
	return 0;
}