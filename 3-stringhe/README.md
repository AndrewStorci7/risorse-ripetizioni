# Lezione 3: Stringhe

### Indice:

- [Introduzione](#introduzione)
- [C-Stringhe](#c-string-array-di-caratteri)
- [Classe string](#string-classe)

## Introduzione

In C++, le stringhe sono **sequenze di caratteri** che vengono utilizzate per memorizzare e manipolare dati testuali. Le stringhe possono essere gestite in diversi modi, inclusi gli array di caratteri tradizionali (**C-string**) e le classi stringhe della libreria standard di C++. In questa lezione, esploreremo entrambi i concetti.

## C-String (Array di caratteri)

Le C-string sono array di caratteri terminati da un carattere nullo (`'\0'`), che indica la fine della stringa. Ecco un esempio di dichiarazione di una C-string:

```c++
char nome[20]; // Dichiarazione di una C-string di max 20 caratteri
```

Le operazioni comuni che possono essere eseguite con le C-string includono:

- **Input/output**: Utilizzando le funzioni cin e cout per leggere e scrivere stringhe.
- **Manipolazione**: Utilizzando funzioni come strlen per trovare la lunghezza di una stringa e strcpy per copiare una stringa in un'altra.

```c++
#include <iostream>
#include <cstring>

int main() {
    char nome[20];
    std::cout << "Inserisci il tuo nome: ";
    std::cin >> nome;

    std::cout << "Il tuo nome ha " << strlen(nome) << " caratteri." << std::endl;

    return 0;
}
```

## `String` (Classe)

La libreria standard di C++ fornisce la classe `std::string` per gestire le stringhe in modo più sicuro e flessibile rispetto alle **C-string**. Ecco un esempio di dichiarazione di una stringa:

```c++
#include <string>

std::string nome = "Matteo";
```

Le operazioni comuni eseguite con le classi stringhe includono:

- **Input/output**: Utilizzando gli operatori di inserimento (`<<`) e di estrazione (`>>`) per leggere e scrivere stringhe.
- **Manipolazione**: Utilizzando i metodi della classe stringa come length() per trovare la lunghezza di una stringa e `substr()` per estrarre una sottostringa.

```c++
#include <iostream>
#include <string>

int main() {
    std::string nome;
    std::cout << "Inserisci il tuo nome: ";
    std::cin >> nome;

    std::cout << "Il tuo nome ha " << nome.length() << " caratteri." << std::endl;

    return 0;
}
```

## Conclusione

Confronto tra **C-string** e **Classi Stringhe**

Le classi stringhe di C++ offrono molte funzionalità aggiuntive rispetto alle C-string, come il supporto per gli operatori di confronto, la concatenazione e la gestione automatica della memoria. Le classi stringhe sono anche più sicure, poiché evitano problemi come il buffer overflow.

In conclusione, se possibile, è consigliabile utilizzare le classi stringhe di C++ anziché le C-string, per un codice più sicuro e più flessibile.