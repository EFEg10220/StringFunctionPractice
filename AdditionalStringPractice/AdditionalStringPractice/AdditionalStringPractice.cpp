#include "String.h"

int main() {
    String myString;

    string original = "Hola mundo";
    int start = 5;
    int charsToReturn = 5;

    string result = myString.substring(original, start, charsToReturn);

    cout << "Original: " << original << endl;
    cout << "Substring: " << result << endl;

    string phrase = "Esto_es_un_texto_de_prueba";
    cout << "Reverse Substring: " << myString.reverseSubstring(phrase, 10, 5) << endl;

    string ammount = "3265346.46";

    cout << "Left 1: " << myString.left(ammount, 5) << endl;
    cout << "Right 2: " << myString.right(ammount, 7) << endl;

    string fullname = " erick figueroa elizondo ";

    cout << "Trim Right: \"" << myString.trimRight(fullname, 1) << "\"" << endl;
    cout << "Trim Left: \"" << myString.trimLeft(fullname, 7) << "\"" << endl;
    cout << "Trim: \"" << myString.trim(fullname, 1) << "\"" << endl;

    return 0;
}