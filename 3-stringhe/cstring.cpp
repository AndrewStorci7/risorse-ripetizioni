/**
 * Lezione 3: Stringhe
 * C-String
 */

#include <iostream>
#include <cstring>

int main() {
    // Dichiarazione di una C-string
    char frase[] = "Questa e' una C-string di esempio.";
    
    // Utilizzo di strlen() per ottenere la lunghezza
    std::cout << "Lunghezza della C-string: " << strlen(frase) << std::endl; // Output: 32
    
    // Utilizzo di strcpy() per copiare una C-string
    char copia[50];
    strcpy(copia, frase);
    std::cout << "Copia della C-string: " << copia << std::endl; // Output: Questa e' una C-string di esempio.
    
    // Utilizzo di strcat() per concatenare C-string
    char altra_frase[] = " Concatenata alla prima.";
    strcat(copia, altra_frase);
    std::cout << "C-string concatenata: " << copia << std::endl; // Output: Questa e' una C-string di esempio. Concatenata alla prima.
    
    // Utilizzo di strcmp() per confrontare C-string
    char str1[] = "Ciao";
    char str2[] = "Mondo";
    if (strcmp(str1, str2) < 0) {
        std::cout << "La stringa '" << str1 << "' precede la stringa '" << str2 << "'" << std::endl;
    } else if (strcmp(str1, str2) > 0) {
        std::cout << "La stringa '" << str2 << "' precede la stringa '" << str1 << "'" << std::endl;
    } else {
        std::cout << "Le stringhe sono uguali" << std::endl;
    }
    
    return 0;
}
