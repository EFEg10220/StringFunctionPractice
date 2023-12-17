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