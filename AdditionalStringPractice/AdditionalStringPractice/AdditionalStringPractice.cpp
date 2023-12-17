#include "String.h"

int main() {
    String myString;

    string original = "Hello, World!";
    int start = 7;
    int charsToReturn = 5;

    string result = myString.substring(original, start, charsToReturn);

    cout << "Original: " << original << endl;
    cout << "Substring: " << result << endl;

    string phrase = "Esto_es_un_texto_de_prueba";
    cout << "Reverse Substring: " << myString.reverseSubstring(phrase, 15, 2) << endl;

    return 0;
}