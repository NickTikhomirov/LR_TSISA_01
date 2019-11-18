// tsisa1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <vector>
#include <iomanip>
#include "PassiveSearch.h"
#include "GoldenSearch.h"

using std::vector;
using std::cout;
using std::endl;



int main()
{
	vector<BasicSolver*> waysToCount;
	cout << "Epsilon equals 0.1 \n\n"<<endl;
	double epsilon = 0.1;
	waysToCount.resize(2);
	waysToCount[0] = new PassiveSearch(7, 10, epsilon);
	waysToCount[1] = new GoldenSearch(7, 10, epsilon);
	for (int i = 0; i < waysToCount.size(); i++) {
		waysToCount[i]->introduceYourself();
		waysToCount[i]->countMin();
		delete waysToCount[i];
		waysToCount[i] = nullptr;
	}
}