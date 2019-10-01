#pragma once

#include "BasicSolver.h"
#include <cmath>

class GoldenSearch: public BasicSolver
{
private:
	double goldenConst = 0.5 * (1 + sqrt(5));
	void out(int k, double x1, double f1, double x2, double f2);
public:
	GoldenSearch(double a1, double b1, double e);
	~GoldenSearch();
	double countLeftPoint();
	double countRightPoint();
	void countMin();
	void introduceYourself();
};

