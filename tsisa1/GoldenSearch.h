#pragma once

#include "BasicSolver.h"
#include <cmath>

class GoldenSearch: public BasicSolver
{
private:
	double goldenConst = 0.5 * (1 + sqrt(5));
public:
	GoldenSearch(double a1, double b1, double e);
	~GoldenSearch();
	double countLeftPoint();
	double countRightPoint();
	void countMin();
	void introduceYourself();
};

