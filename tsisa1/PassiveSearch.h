#pragma once
#include "BasicSolver.h"
class PassiveSearch : public BasicSolver
{
	int getPoints();
	double getPoint_i(int, int);
public:
	PassiveSearch(double a1, double b1, double e);
	~PassiveSearch();
	void countMin();
	void introduceYourself();
};

