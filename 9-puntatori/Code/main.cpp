/**
 * Lezione 02/10/2024 - Puntatori vs Riferimenti
 * In questo codice vi sono delle applicazioni delel regole dei riferimenti e dei puntatori
 *
 * @author Andrea Storci aka dreean
 */

#include "console.h"
#include <iostream>

int main() {
    enableANSI();

    // Codici ANSI per i colori
    const std::string RESET = "\033[0m";  // Resetta il colore
    const std::string RED = "\033[31m";  // Rosso
    const std::string GREEN = "\033[32m";  // Verde
    const std::string YELLOW = "\033[33m";  // Giallo
    const std::string BLUE = "\033[34m";  // Blu
    const std::string MAGENTA = "\033[35m";  // Magenta
    const std::string CYAN = "\033[36m";  // Ciano





    int* p; // dichiarazione di puntatore
    int* p_null = nullptr;  // dichiarazioen e definizione di un puntatore
                            // che punta a nullptr

    std::cout << "Puntatore non definito: \n\t" << GREEN << "Indirizzo di memoria: " << RESET << p << BLUE << "\n\tValore assegnato (casuale): " << RESET << (*p) << std::endl << std::endl;
    std::cout << "Puntatore definito con nullptr: \n\t" << GREEN << "Indirizzo di memoria: " << RESET << p_null << BLUE << "\n\tValore assegnato: " << RESET << RED << "Errore: un puntatore nullptr non ha valore" << RESET << std::endl << std::endl;

    int i = 10;
    p_null = &i;
    int& r = i;
    // int& r_error; // ERRORE: un riferimento non può essere nullo
    bool sonoUguali = p_null == &i;
    bool sonoUguali2 = &r == &i;
    bool sonoUguali3 = p == p_null;

    std::cout << "Riferimento di i (&i) e il suo valore: \n\t" << GREEN << "Indirizzo di memoria: " << RESET << &i << BLUE << "\n\tValore assegnato: " << RESET << i << std::endl << std::endl;
    std::cout << "Puntatore definito con nullptr: \n\t" << GREEN << "Indirizzo di memoria: " << RESET << p_null << BLUE << "\n\tValore assegnato: " << RESET << (*p_null) << std::endl << std::endl;
    std::cout << "Riferimento di r : \n\t" << GREEN << "Indirizzo di memoria: " << RESET << &r << BLUE << "\n\tValore assegnato: " << RESET << r << std::endl << std::endl;

    std::cout << "Prova del nove: \n\t" << "L'indirizzo di memoria di " << BLUE << "p_null(" << p_null << ")" << RESET << " e' uguale all'indirizzo di memoria di " << BLUE << "i(" << &i << ") "<< RESET << "?" << std::endl;
    std::cout << "\t" << sonoUguali << " = " << ((sonoUguali) ? "Vero" : "Falso") << std::endl;

    std::cout << "\n\t" << "L'indirizzo di memoria di " << BLUE << "r(" << &r << ")" << RESET << " e' uguale all'indirizzo di memoria di " << BLUE << "i(" << &i << ") "<< RESET << "?" << std::endl;
    std::cout << "\t" << sonoUguali2 << " = " << ((sonoUguali2) ? "Vero" : "Falso") << std::endl;

    std::cout << "\n\t" << "L'indirizzo di memoria di " << BLUE << "p(" << p << ")" << RESET << " e' uguale all'indirizzo di memoria di " << BLUE << "p_null(" << p_null << ") "<< RESET << "?" << std::endl;
    std::cout << "\t" << sonoUguali3 << " = " << ((sonoUguali3) ? "Vero" : "Falso") << std::endl;

    return 0;
}
