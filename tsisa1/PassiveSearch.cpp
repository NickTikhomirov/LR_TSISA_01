#include "PassiveSearch.h"
#include <cmath>

using std::cout;
using std::endl;

PassiveSearch::PassiveSearch(double a1, double b1, double e) : BasicSolver(a1,b1,e)
{}


PassiveSearch::~PassiveSearch()
{
}


void PassiveSearch::introduceYourself() {
	cout << "-----------------------------------" << endl;
	cout << " Now counting with: PASSIVE SEARCH " << endl;
	cout << "-----------------------------------" << endl;
}


void PassiveSearch::countMin() {
	cout << "Started searching points" << endl;
	double infinity = 0;
	infinity = 1.0 / infinity;
	double point_x;
	double point_f;
	double min_x = infinity;
	double min_f = infinity;
	double length = getB() - getA();
	double trueLength = length;
	int iterations = 0;
	while (length >= getEpsilon()) {
		min_f = infinity;
		point_x = 0;
		iterations++;
		length = trueLength / (iterations + 1);
		for (int i = 1; i <= iterations; i++) {
			point_x = getA() + i*length;
			point_f = getValueFor(point_x);
			if (min_f>point_f) {
				min_f = point_f;
				min_x = point_x;
			}
		}
		cout << "Points: " << iterations <<
			"\n  The value f=" << min_f << " is reached with x=" << min_x << "\n  Epsilon: " << length<<endl;
	}
	cout << "The final result:"<<endl;
	cout << "Points: " << iterations <<
		"\n  The value f=" << min_f << " is reached with x=" << min_x << "\n  Epsilon: " << length << endl;
}