#include <iostream>
#include <string>

int main() {

    string parola1;
    string parola2;

    cout << "Inserisci la prima parola: ";
    cin >> parola1;
    cout << "Inserisci la seconda parola: ";
    cin >> parola2;

    if (strcmp(parola1, parola2) > 0) {
        cout << "La parola: " << parola2 << " viene prima della parola " << parola1 << endl;
    } else if (strcmp(parola1, parola2) < 0) {
        cout << "La parola: " << parola1 << " viene prima della parola " << parola2 << endl;
    }

    return 0;
}