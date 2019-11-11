#include "PassiveSearch.h"
#include <cmath>
#include <iomanip>

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

int PassiveSearch::getPoints() {
	return (getB() - getA()) / getEpsilon() - 1;
}

double PassiveSearch::getPoint_i(int i, int N){
	return getA() + 1.0 * i * (getB() - getA()) / (N + 1);
}




void PassiveSearch::countMin() {
	int N = getPoints();
	cout << "For our task we need " <<N<<" points"<< endl;
	double infinity = 0;
	infinity = 1.0 / infinity;
	double point_x;
	double point_f;
	double min_x = infinity;
	double min_f = infinity;
	int min_i = -1;
	double delta = 1.0*(getB() - getA())/(N+1);
	cout << " k |\t f(x)  |\t x " << endl;
	for(int iterations=1; iterations<N+1; iterations++){
		point_x = getPoint_i(iterations,N);
		point_f = getValueFor(point_x);
		if (point_f<min_f) {
			min_f = point_f;
			min_x = point_x;
			min_i = iterations;
		}
		cout << std::fixed << std::setprecision(4)
			<< iterations << "|\t " << point_f << "|\t " << point_x << "+-" << delta << endl;
	}
	cout << "\n\nThe final result:"<<endl;
	cout << "The value f=" << min_f << " is reached with x=" << min_x << "+-" << delta << endl<<endl;
}