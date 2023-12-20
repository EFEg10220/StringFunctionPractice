#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class String {
private:

public:
	String();
	string substring(string sentence, int start, int charsToReturn);
	string reverseSubstring(string sentence, int start, int charsToReturn);
	string left(string sentence, int charsToReturn);
	string right(string sentence, int charsToReturn);
	string trimRight(string sentence, int charsToTrim);
	string trimLeft(string sentence, int charsToTrim);
	string trim(string sentence, int charsToTrim);
	int findLast(string sentence, string wordToFind);
	char findNaughtyStep(const string& original, const string& modified);
	bool isValidEmail(const string& correo);
	bool isPalindrome(string& text);
	int countOfWord(string& phrase);
	int countOfWhiteSpace(const string& phrase);
	string transformWord(const string& word);
	string inverseName(const string& fullname);
	string decodeMessage(const string& message);
};