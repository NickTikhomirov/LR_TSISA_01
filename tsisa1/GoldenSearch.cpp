#include "GoldenSearch.h"
#include <cmath>
#include <iomanip>

using std::cout;
using std::endl;

GoldenSearch::GoldenSearch(double a1, double b1, double e): BasicSolver(a1,b1,e)
{}


GoldenSearch::~GoldenSearch()
{}


void GoldenSearch::introduceYourself() {
	cout << "----------------------------------" << endl;
	cout << " Now counting with: GOLDEN SEARCH " << endl;
	cout << "----------------------------------" << endl;
}

double GoldenSearch::countLeftPoint() {
	return (getB()+(getA()-getB())/goldenConst);
}

double GoldenSearch::countRightPoint() {
	return (getA() + (getB()-getA())/goldenConst);
}

void GoldenSearch::out(int k, double x1, double f1, double x2, double f2){
	if (isinf(x1) || isinf(x2)) {
		cout <<"Steps taken: "<< k << ". Limits: (" << getA() << "; " << getB() << "), length: " << getB() - getA() << endl;
		return;
	}
	//cout << k ;
	//cout << ". Limits: (" << getA() << "; " << getB() << "), length: " << getB() - getA() <<
	//	",  points: (" << x1 << "," << f1 << "), (" << x2 << "," << f2 << ")." << endl;
	cout << k << " |\t" << getA() << " |\t" << getB() << " |\t" << x1 << " |\t" << f1 << " |\t" << x2 <<" |\t" << f2 << " |\t" << 0.5*(getB()-getA()) <<endl;
}


void GoldenSearch::countMin() {
	double infinity = 0.0;
	infinity = 1.0 / infinity;
	double x1 = countLeftPoint();
	double x2 = countRightPoint();
	double fx1 = getValueFor(x1);
	double fx2 = getValueFor(x2);
	int k = 1;
	//out(k, x1, fx1, x2, fx2);
	cout << "k |\t    a  |\t    b  |\t   x1  |\t   fx1  |\t   x2  |\t   fx2  |\t0.5*(b-a) \n";
	cout << "______________________________________________________________________________________________________________________\n";
	while(getB()-getA()>2*getEpsilon()) {
		out(k, x1, fx1, x2, fx2);
		k++;
		if (fx1 > fx2) {
			setA(x1);
			x1 = x2;
			fx1 = fx2;
			x2 = infinity;
		}
		else {
			setB(x2);
			x2 = x1;
			fx2 = fx1;
			x1 = infinity;
		}

		if (x1 == infinity) {
			x1 = countLeftPoint();
			fx1 = getValueFor(x1);
		} else {
			x2 = countRightPoint();
			fx2 = getValueFor(x2);
		}
	}
	out(k, x1, fx1, x2, fx2);
	cout << "result: \n";
	out(k, x1, fx1, x2, fx2);
	cout << "With " << k << " iterrations we have the result: x = " << 0.5 * (x1 + x2) << "+-"<<0.5*(getB()-getA())<<", f(x)="<<getValueFor(0.5 * (x1 + x2))<<endl;

}