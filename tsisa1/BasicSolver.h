#pragma once

#include <vector>
#include <iostream>

using std::vector;

class BasicSolver
{
private:
	double a = 0;
	double b = 1;
	double epsilon = 0.1;	
public:
	double getA();
	double getB();
	double getPrecision();
	void setA(double a1);
	void setB(double b1);
	double getEpsilon();
	BasicSolver(double a1, double b1, double e);
	static double getValueFor(double x);
	virtual void countMin()=0;
	virtual void introduceYourself()=0;
	~BasicSolver();
};

