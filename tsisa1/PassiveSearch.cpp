#include "PassiveSearch.h"

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