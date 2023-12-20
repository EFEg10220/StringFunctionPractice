#include "String.h"

int main() {
    String myString;

    string original = "Hola mundo";
    int start = 5;
    int charsToReturn = 5;

    string result = myString.substring(original, start, charsToReturn);

    cout << "Original: " << original << endl;
    cout << "Substring: " << result << endl;

    string textExample = "Esto_es_un_texto_de_prueba";
    cout << "\nReverse Substring: " << myString.reverseSubstring(textExample, 10, 5) << endl;

    string ammount = "3265346.46";

    cout << "\nLeft 1: " << myString.left(ammount, 5) << endl;
    cout << "Right 2: " << myString.right(ammount, 7) << endl;

    string fullname = " erick figueroa elizondo ";

    cout << "\nTrim Right: \"" << myString.trimRight(fullname, 1) << "\"" << endl;
    cout << "Trim Left: \"" << myString.trimLeft(fullname, 7) << "\"" << endl;
    cout << "Trim: \"" << myString.trim(fullname, 1) << "\"" << endl;

    string sentence = "erick figueroa elizondo";
    cout << "\n" << sentence << endl;
    int resultSentence = myString.findLast(sentence, "zon");

    string original1 = "abcd";
    string modified1 = "abcde";
    cout << "\n" << original1 << " ----- " << modified1 << endl;
    cout << "Result 1: " << myString.findNaughtyStep(original1, modified1) << endl;

    string original2 = "stepfor";
    string modified2 = "stepor";
    cout << original2 << " ----- " << modified2 << endl;
    cout << "Result 2: " << myString.findNaughtyStep(original2, modified2) << endl;

    string original3 = "abcde";
    string modified3 = "abcde";
    cout << original3 << " ----- " << modified3 << endl;
    cout << "Result 3: " << myString.findNaughtyStep(original3, modified3) << endl;

    string palindromeExample = "reconocer";

    cout << "\nLa palabra " << palindromeExample << endl;

    if (myString.isPalindrome(palindromeExample)) {
        cout << "Es un palindromo" << endl;
    }
    else {
        cout << "No es un palindromo" << endl;
    }

    cout << "\nEscriba una frase: ";
    string phraseText;
    getline(cin, phraseText);

    int cantidadPalabras = myString.countOfWord(phraseText);
    int countSpace = myString.countOfWhiteSpace(phraseText);
    cout << "La cantidad de palabras es: " << cantidadPalabras << endl;
    cout << "La cantidad de espacios en blanco son: " << countSpace << endl;

    string email = "elizondofigueroa0403@gmail.com";
    cout << "\nCorreo: " << email << endl;

    if (myString.isValidEmail(email)) {
        cout << "El correo es valido" << endl;
    }
    else {
        cout << "El correo no es valido" << endl;
    }

    string fullName = "erick gerardo figueroa elizondo";
    string inverseName = myString.inverseName(fullName);

    cout << "\nNombre original: " << fullName << endl;
    cout << "Nombre invertido: " << inverseName << endl;


    return 0;
}