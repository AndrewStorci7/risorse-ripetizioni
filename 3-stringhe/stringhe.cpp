/**
 * Lezione 3: Stringhe
 */

#include <iostream>
#include <cstring> // Necessaria per utilizzare le funzioni sulle C-string

int main() {
    // Dichiarazione e inizializzazione di una C-string
    char nome[] = "Mario";

    // Utilizzo di strlen() per ottenere la lunghezza della stringa
    std::cout << "Lunghezza della stringa 'nome': " << strlen(nome) << std::endl; // Output: 5

    // Dichiarazione e inizializzazione di un'altra C-string
    char cognome[] = "Rossi";

    // Utilizzo di strcpy() per copiare una stringa in un'altra
    char nome_completo[20];
    strcpy(nome_completo, nome);
    strcat(nome_completo, " "); // Aggiunge uno spazio

    // Utilizzo di strcat() per concatenare due stringhe
    strcat(nome_completo, cognome);
    std::cout << "Nome completo: " << nome_completo << std::endl; // Output: Mario Rossi

    // Dichiarazione e inizializzazione di una std::string
    std::string gioco = "The Legend of Zelda";

    // Accesso ai caratteri di una std::string
    std::cout << "Primo carattere di 'gioco': " << gioco[0] << std::endl; // Output: T
    std::cout << "Ultimo carattere di 'gioco': " << gioco[gioco.length() - 1] << std::endl; // Output: a

    // Utilizzo di strcmp() per confrontare due stringhe
    char stringa1[] = "Ciao";
    char stringa2[] = "Mondo";
    if (strcmp(stringa1, stringa2) < 0) {
        std::cout << "La stringa '" << stringa1 << "' precede la stringa '" << stringa2 << "'" << std::endl;
    } else if (strcmp(stringa1, stringa2) > 0) {
        std::cout << "La stringa '" << stringa2 << "' precede la stringa '" << stringa1 << "'" << std::endl;
    } else {
        std::cout << "Le stringhe sono uguali" << std::endl;
    }

    return 0;
}
