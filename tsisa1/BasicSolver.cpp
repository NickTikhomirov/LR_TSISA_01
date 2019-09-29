#include "BasicSolver.h"
#include <cmath>



BasicSolver::BasicSolver(double a1, double b1, double e)
{
	a = a1;
	b = b1;
	epsilon = e;
}


BasicSolver::~BasicSolver()
{
}


double BasicSolver::getValueFor(double x) {
	return cos(x) + log10(x);
}

double BasicSolver::getA() {
	return a;
}

double BasicSolver::getB() {
	return b;
}

double BasicSolver::getEpsilon(){
	return epsilon;
}

void BasicSolver::setA(double a1) {
	if (a1 > a) a = a1;
}

void BasicSolver::setB(double b1) {
	if (b1 < b) b = b1;
}