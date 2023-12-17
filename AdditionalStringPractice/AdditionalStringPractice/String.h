#pragma once
#include <iostream>

using namespace std;

class String {
private:

public:
	String();
	string substring(string sentence, int start, int charsToReturn);
	string reverseSubstring(string sentence, int start, int charsToReturn);
};