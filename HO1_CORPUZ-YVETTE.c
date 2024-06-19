// CCPROG1 - Hands-on Exam 1

// Instructions:
// 1. You're not allowed to use arrays, conditonal and iterative statements.
// Using arrays, conditional, and iterative statements will result in 0 credited for that function.
// 2. Functions containing codes that causes your solution to not compile will result in 0 credit for that function.
// 3. Codes placed in comments will not be checked
// 4. You may answer the items in any order.
// You may still get full credit for items where the needed function was not correctly implemented.
// 5. You're only allowed to use the following math.h function:
// - float fabsf(float arg)
// returns the absolute value of arg
// 6. Total score: 45 / 40

// NOTE: This code base should run and compile at its default state.
// Name: LASTNAME, FIRSTNAME

#include<stdio.h>
#include<math.h>
/* 5 pts.

	extractCoordinates() - extracts the coordinates of a given point stored in a
4-digit integer and stores it in *x and *y
@param: point - 4-digit integer where the first two digits are the x-
coordinate and the next two digits are the y-coordinate of the point
- You may assume that the coordinates of point will always be
positive
@param: *x - store the x-coordinate of point to this variable
@param: *y - store the y-coordinate of point to this variable
	Example: extractCoordinates(1122) results to x=11 and y=22
			 extractCoordinates(2345) results to x=23 and y=45
			 extractCoordinates(9898) results to x=98 and y=98
*/
void extractCoordinates(int point, int *x, int *y)
{
	/* TODO: fill your code */
	/* You may declare as many variables as you like */
	*x = point / 100;
	*y = point % 100;
}
/* 8 pts.
getManhattanDistance() - returns the computed distance between point1 and
point2 using the Manhattan Distance Formula
Manhattan Distance = |x1 - x2| + |y1 - y2|
@param: point1 - 4-digit integer where the first two digits are the x-
coordinate and the next two digits are the y-coordinate of the point1
@param: point2 - 4-digit integer where the first two digits are the x-
coordinate and the next two digits are the y-coordinate of the point2
- You may assume that the coordinates of point1 and point2 will
always be positive
Hard Requirements: 1. Use extractCoordinates(int point, int* x, int* y)
function
2. Use fabsf() function of math.h. Below is the function
prototype of the function.
float fabsf(float arg)
- returns the absolute value of arg
Example: getManhattanDistance(1122, 2233) returns 22
getManhattanDistance(1122, 1122) returns 0
getManhattanDistance(1234, 5678) returns 88
*/
float getManhattanDistance(int point1, int point2)
{
/* TODO: fill your code */
/* You may declare as many variables as you like */
	int x1, y1, x2, y2;
	extractCoordinates(point1, &x1, &y1);
	extractCoordinates(point1, &x2, &y2);

	return fabs(x1-x2) + fabsf(y1 - y2); // Revise this line accordingly
}
/* 6 pts.
getSlope() - returns the slope between point1 and point2
slope = [y2-y1] / [x2-x1]
@param: x1 - x-coordinate of point 1
@param: y1 - y-coordinate of point 1
@param: x2 - x-coordinate of point 2
@param: y2 - y-coordinate of point 2
Example: getSlope(-2,-1,4,3) returns 0.666667
getSlope(1,1,2,2) returns 1
getSlope(1,2,5,-4) returns -1.5
*/
float getSlope(int x1, int y1, int x2, int y2)
{
/* TODO: fill your code */
/* You may declare as many variables as you like */

	return (float)(y2 - y1)/(x2 - x1); // Revise this line accordingly
}
/* 10 pts.
Debugging Problem. The code below contains syntax and logical errors.
Revise the code in this function for it to work according to its description.
getDistance() - prints the first two points and the next three values of the
line using the line formula, y = slope * x + yIntercept
@param: point1 - 4-digit integer where the first two digits are the x-
coordinate and the next two digits are the y-coordinate of the point1
@param: point2 - 4-digit integer where the first two digits are the x-
coordinate and the next two digits are the y-coordinate of the point2
- You may assume that the coordinates of point1 and point2 will
always be positive
*/
void printNextThreeValues(int point1, int point2)
{
	// Uncomment the code below when you're ready to answer this item
	float x1, y1, x2, y2;
	int yIntercept, slope;
	extractCoordinates(point2, &x2, &y2)
	extractCoordinates(point1, &x1, &y1)
	slope = getSlope(x1, y1, x2, y2);
	// TODO: Derive the expression for yIntercept with respect to the line equation:
	// y2 = slope * x2 + yIntercept. 
	yIntercept = y2 - slope * x2;
	// The expected output of lines LINE A to LINE B are shown below when point1 = 1011 and point2 = 1213.
	// Format shown must be followed for full credit.
	// Point 1: (10.00, 11.00)
	// Point 2: (12.00, 13.00)
	// Point 3: (14.00, 15.00)
	// Point 4: (16.00, 17.00)
	// Point 5: (18.00, 19.00)
	
	// prints the coordinates of point 1 // LINE A
	printf("Point 1: %d %d", x1, y1);
	// prints the coordinates of point 2
	printf("Point 2: %d %d", x2, y2);
	
	// prints the coordinates in x2 + 2 according to line equation y3 = slope *
	//(x2 + 2) + yIntercept
	printf("Point 3: %d %d", x2 + 2, slope * (x2 + 2) + yIntercept);
	// prints the coordinates in x2 + 4 according to line equation y4 = slope *
	//(x2 + 4) + yIntercept
	printf("Point 4: %d %d", x2 + 4, slope * (x2 + 4) + yIntercept);
	// prints the coordinates in x2 + 6 according to line equation y5 = slope *
	//(x2 + 6) + yIntercept
	printf("Point 5: %d %d", x2 + 6, slope * (x2 + 6) + yIntercept); // LINE B
}
/* 8 pts.
getSlopeDirection() - returns 1 if the slope is positive, -1 if the slope is
negative, and 0 if the slope is zero
@param: x1 - x-coordinate of point 1
@param: y1 - y-coordinate of point 1
@param: x2 - x-coordinate of point 2
@param: y2 - y-coordinate of point 2
Hard Requirement: Use getSlope(int x1, int y1, int x2, int y2) function
Example: getSlope(-2,-1,4,3) returns 1
getSlope(1,2,5,-4) returns -1
getSlope(1,1,2,1) returns 0
*/
int getSlopeDirection(int x1, int y1, int x2, int y2)
{
/* TODO: fill your code */
/* You may declare as many variables as you like */
	float slope = getSlope(x1, y1, x2, y2);
	
	if(slope>0)
		return 1;
	else if(slope<0)
		return -1;
	else	
		return 0; // Revise this line accordingly
}
/* 8 pts.
getChebyshevDistance() - returns the computed distance between point1 and
point2 using the Chebyshev Distance Formula
Chebyshev Distance = max(|x1 - x2|, |y1 - y2|)
@param: point1 - 4-digit integer where the first two digits are the x-
coordinate and the next two digits are the y-coordinate of the point1
@param: point2 - 4-digit integer where the first two digits are the x-
coordinate and the next two digits are the y-coordinate of the point2
- You may assume that the coordinates of point1 and point2 will
always be positive
Hard Requirements: 1. Use extractCoordinates(int point, int* x, int* y)
function
2. Use fabsf() function of math.h. Below is the function
prototype of the function.
float fabsf(float arg)
- returns the absolute value of arg
Example: getChebyshevDistance(1122, 2233) returns 11
getChebyshevDistance(1122, 1122) returns 0
getChebyshevDistance(1133, 4499) returns 66
*/
float getChebyshevDistance(int point1, int point2)
{
/* TODO: fill your code */
/* You may declare as many variables as you like */
	
	int x1, y1, x2, y2;
	extractCoordinates(point1, &x1, &y1);
	extractCoordinates(point1, &x2, &y2);
	
	int pX = fabs(x1 - x2);
	int pY = fabs(y1 - y2);
	
	return dx > dy ? dx : dy;
}
int main()
{
// This function will not be checked. You're allowed to modify the codes below for testing.
// You may leave your scratchwork as it is for this function upon submission.
// Codes in this function do not contain any logical or syntax error provided all of the required functions are implemented correctly
// Screen output on its default configuration is:
// Coordinate 1 - 10 11
// Coordinate 2 - 12 13
// Manhattan Distance Between Pt1 and Pt2 is 4.00 units
// Chebyshev Distance Between Pt1 and Pt2 is 2.00 units
// Slope between Pt1 and Pt2 is 1.00 units
// Line is on an upward trend.
// Point 1: (10.00, 11.00)
// Point 2: (12.00, 13.00)
// Point 3: (14.00, 15.00)
// Point 4: (16.00, 17.00)
// Point 5: (18.00, 19.00)

	int psi, omega, alpha, beta, direction;
	int coor1 = 1011;
	int coor2 = 1213;
	
	extractCoordinates(coor2, &psi, &omega);
	extractCoordinates(coor1, &alpha, &beta);
	
	printf("Coordinate 1 - %d %d\n", alpha, beta);
	printf("Coordinate 2 - %d %d\n", psi, omega);
	
	printf("Manhattan Distance Between Pt1 and Pt2 is %.2f units\n",
		getManhattanDistance(coor2, coor1));
	printf("Chebyshev Distance Between Pt1 and Pt2 is %.2f units\n",
		getChebyshevDistance(coor1, coor2));
		
	printf("Slope between Pt1 and Pt2 is %.2f units\n",
		getSlope(alpha,beta,psi,omega));
	
	
		direction = getSlopeDirection(alpha, beta, psi, omega);
		if(direction == -1){
		printf("Line is on a downward trend.\n");
		} else if (direction == 1){
		printf("Line is on an upward trend.\n");
		} else {
		printf("Line is neither going up or down.\n");
		}
		printNextThreeValues(coor1, coor2);
		
		return 0;
}
