## Lezione sulle Funzioni in C++

### Introduzione

Le funzioni sono blocchi di codice riutilizzabili che eseguono un'operazione specifica. Immaginatele come mini-programmi all'interno del programma principale. Sono fondamentali in C++ perché:

*   **Organizzazione:** suddividono il codice in parti più piccole e gestibili.
*   **Riutilizzo:** evitano la ripetizione di codice.
*   **Modularità:** semplificano la modifica e il debug del codice.

### Definizione di una Funzione

Una funzione in C++ si definisce con la seguente struttura:

```c++
tipo_ritorno nome_funzione(parametri) {
    // Corpo della funzione
    // ... istruzioni ...
    return valore_ritorno; // Facoltativo
}
```

**Analizziamo ogni parte:**

*   **Tipo di Ritorno (`tipo_ritorno`):** Indica il tipo di dato che la funzione restituirà al programma chiamante. Può essere un qualsiasi tipo di dato (int, double, string, etc.) oppure `void` se la funzione non restituisce alcun valore.
*   **Nome della Funzione (`nome_funzione`):** Identifica la funzione e deve essere un nome significativo che descrive la sua azione.
*   **Parametri (`parametri`):** Variabili che ricevono dati dal programma chiamante. Sono opzionali e, se presenti, sono racchiusi tra parentesi tonde e separati da virgole. Ogni parametro deve avere un tipo e un nome.
*   **Corpo della Funzione:** Contiene le istruzioni che la funzione esegue. È racchiuso tra parentesi graffe `{}`.
*   **Istruzione `return`:** Opzionale. Se presente, termina l'esecuzione della funzione e restituisce il `valore_ritorno` al programma chiamante. Il tipo del `valore_ritorno` deve corrispondere al `tipo_ritorno` specificato nella definizione.

### Firma di una Funzione

La firma di una funzione comprende il nome della funzione, il tipo di ritorno e i tipi dei parametri. La firma identifica univocamente la funzione, distinguendola da altre funzioni con lo stesso nome ma con parametri di tipo diverso (questo concetto si chiama *overloading*).

**Esempio:**

```c++
int somma(int a, int b);
```

La firma di questa funzione è: `somma(int, int)`.  Essa indica che la funzione si chiama `somma`, accetta due parametri di tipo intero e restituisce un valore intero.

### Invocazione di una Funzione

Per eseguire una funzione, la si *invoca* o *chiama* dal programma principale. Per farlo, si scrive il nome della funzione seguito da parentesi tonde che contengono gli argomenti (i valori concreti passati alla funzione).

**Esempio:**

```c++
int risultato = somma(5, 10);
```

In questo esempio, la funzione `somma` viene invocata con gli argomenti 5 e 10. Il valore di ritorno della funzione (15) viene assegnato alla variabile `risultato`.

### Parametri e Argomenti

*   **Parametri:** Variabili dichiarate nella definizione della funzione che rappresentano i dati in ingresso.
*   **Argomenti:** Valori concreti passati alla funzione durante l'invocazione.

**Esempio:**

```c++
int somma(int a, int b) { // a e b sono parametri
    return a + b;
}

int main() {
    int risultato = somma(5, 10); // 5 e 10 sono argomenti
    return 0;
}
```

### Passaggio di Parametri

In C++, i parametri possono essere passati in due modi:

1.  **Passaggio per Valore:** La funzione riceve una copia del valore dell'argomento. Modifiche al parametro all'interno della funzione non influenzano la variabile originale nel programma chiamante.
2.  **Passaggio per Riferimento:** La funzione riceve un riferimento alla variabile originale. Modifiche al parametro all'interno della funzione modificano direttamente la variabile originale. Si usa il simbolo `&` nella dichiarazione del parametro per indicare il passaggio per riferimento.

### Errori Comuni

*   **Tipo di Ritorno Errato:** La funzione restituisce un valore di un tipo diverso da quello dichiarato.
*   **Numero o Tipo di Argomenti Errati:** L'invocazione della funzione fornisce un numero o un tipo di argomenti non corrispondente alla sua definizione.
*   **Mancanza di Istruzione `return`:** La funzione dichiara un tipo di ritorno diverso da `void` ma non include un'istruzione `return`.
*   **Variabile Locale Restituita per Riferimento:** Restituire un riferimento ad una variabile dichiarata all'interno del corpo della funzione, poiché questa variabile non esisterà più una volta terminata la funzione.

### Esempio di Funzione

```c++
#include <iostream>
#include <cmath>

double calcolaAreaCerchio(double raggio) {
    return M_PI * pow(raggio, 2);
}

int main() {
    double raggio;
    std::cout << "Inserisci il raggio del cerchio: ";
    std::cin >> raggio;

    double area = calcolaAreaCerchio(raggio);
    std::cout << "L'area del cerchio è: " << area << std::endl;

    return 0;
}
```

Questa funzione `calcolaAreaCerchio` calcola l'area di un cerchio dato il suo raggio. Il parametro `raggio` è passato per valore e la funzione restituisce un valore di tipo `double`.

### Approfondimenti

*   **Funzioni `void`:** Funzioni che non restituiscono alcun valore.
*   **Prototipi di Funzioni:** Dichiarazioni di funzioni che specificano la firma senza il corpo. Servono a informare il compilatore sull'esistenza della funzione prima della sua definizione.
*   **Overloading:** Definizione di più funzioni con lo stesso nome ma con parametri di tipo diverso.

Questa lezione fornisce una panoramica generale delle funzioni in C++. Per approfondire l'argomento, si consiglia di consultare un manuale di programmazione C++ o risorse online.
