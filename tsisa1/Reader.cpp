#include "Reader.h"
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

string Reader::readString() {
	string s;
	cout << "> ";
	do getline(cin, s);
	while(s.empty());
	return s;
}

double Reader::readDouble(){
	double d = 0.1;
	string s;
	bool ready = true;
	do {
		ready = true;
		s = readString();
		try{
			d = stod(s);
		} catch(...){
			ready = false;
			cout << "Only numbers!" << endl;
		}
	} while (!ready);
	return d;
}
