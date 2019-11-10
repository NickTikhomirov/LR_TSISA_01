// tsisa1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <vector>
#include "PassiveSearch.h"
#include "GoldenSearch.h"
#include "Reader.h"
#include <iomanip>

using std::vector;
using std::cout;
using std::endl;



int main()
{
	vector<BasicSolver*> waysToCount;
	cout << "Please, type epsilon's value"<<endl;
	double epsilon = Reader::readDouble();
	epsilon = epsilon / 2;
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