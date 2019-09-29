#include "GoldenSearch.h"
#include <cmath>

using std::cout;
using std::endl;

GoldenSearch::GoldenSearch(double a1, double b1, double e): BasicSolver(a1,b1,e)
{}


GoldenSearch::~GoldenSearch()
{
}


void GoldenSearch::introduceYourself() {
	cout << "----------------------------------" << endl;
	cout << " Now counting with: GOLDEN SEARCH " << endl;
	cout << "----------------------------------" << endl;
}

double GoldenSearch::countLeftPoint() {
	return (getA() + getB()*(1-1/goldenConst));
}

double GoldenSearch::countRightPoint() {
	return (getA() + getB()/goldenConst);
}

void GoldenSearch::countMin() {
	double goldenConst = 0.5 * (1 + sqrt(5));
	double x1 = countLeftPoint();
	double x2 = countRightPoint();
	double fx1 = getValueFor(x1);
	double fx2 = getValueFor(x2);
	int k = 1;
	if (fx1 > fx2) {
		setA(x1);
		x1 = x2;
		x2 = 1 / 0;
	} else {
		setB(x2);
		x2 = x1;
		x1 = 1 / 0;
	}
	while(getA()+getB()>=getEpsilon()) {
		k++;
	}
}