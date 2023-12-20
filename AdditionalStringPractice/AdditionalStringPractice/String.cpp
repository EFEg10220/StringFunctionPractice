#include "String.h"

String::String(){

}

string String::substring(string sentence, int start, int charsToReturn){
    if ((start < 0) || (start >= sentence.length()) || (charsToReturn < 0)) {
        cerr << "Indices fuera de rango" << endl;
        return "";
    }

    int originalLength = sentence.length();
    int end = start + charsToReturn - 1;

    if (end >= originalLength) {
        cerr << "Indice final fuera de rango" << endl;
        end = originalLength - 1;
    }

    string result = "";
    for (int i = start; i <= end; i++) {
        result += sentence.at(i);
    }

    return result;
}

string String::reverseSubstring(string sentence, int start, int charsToReturn) {
    if (start < 0 || start >= sentence.length() || charsToReturn < 0) {
        cerr << "Indices fuera de rango" << endl;
        return "";
    }

    int originalLength = sentence.length();
    int end = start - charsToReturn + 1;

    if (end < 0) {
        cerr << "Indice final fuera de rango" << endl;
        end = 0;
    }

    string result = "";
    for (int i = start; i >= end; i--) {
        result += sentence.at(i);
    }

    return result;
}

string String::left(string sentence, int charsToReturn) {
    return substring(sentence, 0, charsToReturn);
}

string String::right(string sentence, int charsToReturn) {
    int start = sentence.length() - charsToReturn;

    if (start < 0) {
        start = 0;
    }
    return substring(sentence, start, charsToReturn);
}

string String::trimRight(string sentence, int charsToTrim) {
    int length = sentence.length();

    if (charsToTrim > length) {
        cerr << "El numero de caracteres a recortar es mayor" << endl;
        charsToTrim = length;
    }
    return substring(sentence, 0, length - charsToTrim);
}

string String::trimLeft(string sentence, int charsToTrim) {
    int length = sentence.length();

    if (charsToTrim > length) {
        cerr << "El numero de caracteres a recortar es mayor" << endl;
        charsToTrim = length;
    }
    return substring(sentence, charsToTrim, length - charsToTrim);
}

string String::trim(string sentence, int charsToTrim) {
    int length = sentence.length();

    if (charsToTrim > length) {
        cerr << "El numero de caracteres a recortar es mayor" << endl;
        charsToTrim = length;
    }
    return substring(sentence, charsToTrim, length - 2 * charsToTrim);
}

int String::findLast(string sentence, string wordToFind) {
    size_t found = sentence.rfind(wordToFind);
    if (found != string::npos) {
        cout << "La parte '" << wordToFind << "' se encuentra a partir del caracter " << static_cast<int>(found) << endl;
        return static_cast<int>(found);
    }
    else {
        cout << "'" << wordToFind << "' no fue encontrado" << endl;
        return -1;
    }
}

char String::findNaughtyStep(const string& original, const string& modified) {
    size_t minLength = min(original.length(), modified.length());

    for (size_t i = 0; i < minLength; ++i) {
        if (original[i] != modified[i]) {
            return modified[i]; 
        }
    }

    if (original.length() < modified.length()) {
        return modified.back();
    }

    return '\0';
}

bool String::isValidEmail(const string& email) {
    size_t posArroba = email.find('@');

    if (posArroba == string::npos || posArroba == 0 || posArroba == email.length() - 1) {
        return false;
    }

    size_t posPunto = email.find('.', posArroba);

    if (posPunto == string::npos || posPunto == email.length() - 1) {
        return false;
    }

    return true;
}

bool String::isPalindrome(string& text){
    int start = 0;
    int endText = text.length() - 1;

    while (start < endText) {
        if (text[start] != text[endText]) {
            return false;
        }
        start++;
        endText--;
    }
    return true;
}

int String::countOfWord(string& phrase){
    stringstream ss(phrase);
    string word;
    int countWord = 0;

    while (ss >> word) {
        countWord++;
    }

    return countWord;
}

int String::countOfWhiteSpace(const string& phrase) {
    int countWhiteSpace = 0;

    for (char character : phrase) {
        if (character == ' ') {
            countWhiteSpace++;
        }
    }

    return countWhiteSpace;
}

string String::transformWord(const string& word) {
    if (word.empty()) {
        return "";
    }

    string result = word;
    result[0] = toupper(result[0]);

    return result;
}

string String::inverseName(const string& fullname) {
    istringstream iss(fullname);
    string name, secondName, lastName, secondLastName;

    iss >> name;
    if (!iss.eof()) {
        iss >> secondName;
    }
    iss >> lastName;
    if (!iss.eof()) {
        iss >> secondLastName;
    }

    string result = transformWord(lastName) + " " + transformWord(secondLastName) + " " + transformWord(secondName) + " " +
        transformWord(name);

    return result;
}