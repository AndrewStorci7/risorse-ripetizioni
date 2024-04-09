#include <iostream>
#include <string>

using namespace std;

int cmp(string&, string&);

int main() {

    string parola1;
    string parola2;

    cout << "Inserisci la prima parola: ";
    cin >> parola1;
    cout << "Inserisci la seconda parola: ";
    cin >> parola2;

    if (cmp(parola1, parola2) > 0) {
        cout << "La parola: " << parola2 << " viene prima della parola " << parola1 << endl;
    } else if (cmp(parola1, parola2) < 0) {
        cout << "La parola: " << parola1 << " viene prima della parola " << parola2 << endl;
    } else if (cmp(parola1, parola2) == 0) {
        cout << "Le parole sono simili o uguali" << endl;
    }

    return 0;
}

int cmp(string &s1, string &s2) {

    int max_length = (s1.length() > s2.length()) ? s1.length() : s2.length();

    for (int i = 0; i < max_length; ++i) {
        if (s1[i] < s2[i]) {
            return -1;
        } else if (s1[i] > s2[i]) {
            return 1;
        }
    }

    return 0;
}















