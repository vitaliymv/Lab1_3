#include "equation.h"
#include <cmath>

using namespace std;


equation::equation(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}



void equation::solve()
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->al = al;
	al = log(pow(y, -sqrt(abs(x))))*(x - (y / 2)) + pow(sin(atan(z)), 2);
}

double equation::getResult()
{
	double result = al;
	return result;
}

equation::~equation()
{

}

