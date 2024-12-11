#include "console.h"
#include "giocatore.h"
#include <iostream>

/**
 * Questa è una firma di una funzione
 * tipo_di_ritorno nome(tipo_param1, tipo_param2 ...)
 */
void stampaVita(giocatore&);
// void stampaVita(giocatore);
// void stampaVita(const giocatore&);

int main() {
    enableANSI();

    giocatore giocatore1 = {"Leonardo", 78};
    giocatore giocatore2 = {"Andrea", 21};
    giocatore giocatore3 = {"Michele", 55};

    stampaVita(giocatore1);
    stampaVita(giocatore2);
    stampaVita(giocatore3);

    return 0;
}

void stampaVita(giocatore& g) {
    std::cout << GREEN << "Vita del giocatore " << RESET;
    std::cout << BLUE << g.nome << RESET << ": ";
    if (g.hp <= 30)
        std::cout << RED << g.hp << "hp" << RESET;
    else if (g.hp > 30 && g.hp <= 60)
        std::cout << YELLOW << g.hp << "hp" << RESET;
    else
        std::cout << GREEN << g.hp << "hp" << RESET;

    std::cout << std::endl;
}
