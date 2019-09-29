#pragma once

#include <string>

using std::string;

class Reader
{
private:
	static string readString();
public:
	static double readDouble();
};

