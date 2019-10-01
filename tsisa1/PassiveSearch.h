#pragma once
#include "BasicSolver.h"
class PassiveSearch : public BasicSolver
{
public:
	PassiveSearch(double a1, double b1, double e);
	~PassiveSearch();
	void countMin();
	void introduceYourself();
};

