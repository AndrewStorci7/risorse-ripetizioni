# Lezione (o diagrammi a blocchi)

## Indice
- [Introduzione](#introduzione)
- [Tipi di casting](#tipi-di-casting)
    - [Casting Statico](#casting-statico)
    - [Casting Dinamico](#casting-dinamico)
    - [Casting di Reinterpretazione](#casting-di-reinterpretazione)
    - [Casting Implicito vs. Casting Esplicito]()
- [Conclusioni](#conclusioni)
    - [Vantaggi](#vantaggi)
    - [Svantaggi](#svantaggi)
    - [Considerazioni](#considerazioni-da-fare-durante-lutilizzo-del-casting)

## Introduzione

Il casting, o conversione di tipo, è un concetto fondamentale nella programmazione C++. Consiste nell'alterare il tipo di un oggetto da uno a un altro. Questo può essere utile in molte situazioni, ma richiede una certa attenzione poiché può portare a comportamenti indesiderati se non utilizzato correttamente.

## Tipi di Casting

In C++, ci sono diversi tipi di casting, ognuno con le proprie regole e implicazioni:

### Casting Statico 

Questo è il tipo più semplice di casting e coinvolge la conversione esplicita da un tipo a un altro utilizzando l'operatore appropriato. Ad esempio:

```cpp
int numIntero = 10;
double numDouble = static_cast<double>(numIntero);
```

Il casting statico viene risolto a tempo di compilazione e viene preferito quando possibile poiché offre maggiori garanzie di sicurezza.

### Casting Dinamico

Il casting dinamico coinvolge la conversione tra tipi di oggetti collegati da ereditarietà (ad esempio, classi base e derivate). Viene eseguito utilizzando operatori specifici come `dynamic_cast`. Questo tipo di casting può generare un'eccezione `std::bad_cast` se il cast non è possibile.

```cpp
class Base { virtual void foo() {} };
class Derivata : public Base {};

Base* basePtr = new Derivata();
Derivata* derivedPtr = dynamic_cast<Derivata*>(basePtr);
if (derivedPtr) {
    // Conversione riuscita
} else {
    // Conversione fallita
}
```

### Casting di Reinterpretazione

Questo tipo di casting consente di interpretare i bit di memoria di un oggetto in modo diverso, senza alcuna conversione di valore. È estremamente pericoloso e dovrebbe essere utilizzato solo quando si ha una comprensione molto chiara delle implicazioni.

```cpp
int numero = 65;
char carattere = reinterpret_cast<char>(numero);
```

### Casting Implicito vs. Casting Esplicito

#### Casting Esplicito:

Il casting esplicito è quando il programmatore dichiara esplicitamente l'intenzione di convertire un tipo di dato in un altro. Questo viene fatto utilizzando gli operatori di casting appropriati come `static_cast`, `dynamic_cast`, `reinterpret_cast` o `const_cast`.

```cpp
int numIntero = 10;
double numDouble = static_cast<double>(numIntero);
```

Nell'esempio sopra, il cast da `int` a `double` è esplicitamente indicato dall'uso di `static_cast`, il che rende chiaro che il programmatore è consapevole della conversione e la sta richiedendo attivamente.

Il casting esplicito offre maggiore chiarezza nel codice e rende evidenti le conversioni di tipo, aiutando così a prevenire errori di interpretazione.

#### Castin Implicito:

Il casting implicito, al contrario, avviene automaticamente dal compilatore senza richiesta esplicita del programmatore. Si verifica quando viene eseguita una conversione di tipo in modo implicito in determinate situazioni, ad esempio durante le operazioni aritmetiche o di assegnazione.

```cpp
int numIntero = 10;
double numDouble = numIntero; // Conversione implicita da int a double
```

Nell'esempio sopra, il compilatore esegue una conversione implicita dal tipo `int` al tipo `double` durante l'assegnazione della variabile numIntero alla variabile `numDouble`. Questo avviene perché il compilatore è in grado di gestire la conversione senza indicazioni esplicite da parte del programmatore.

Il casting implicito può essere comodo in molte situazioni, ma può anche portare a errori se non tenuto in considerazione. Può anche rendere il codice meno chiaro poiché le conversioni di tipo avvengono senza essere facilmente individuabili.

#### Considerazioni

- Il casting esplicito è preferibile quando si desidera rendere chiara la conversione di tipo e quando si desidera essere sicuri che la conversione avvenga come previsto.
- Il casting implicito può essere comodo ma potenzialmente rischioso se non considerato attentamente, specialmente in situazioni complesse o ambigue.
- È importante comprendere quando avviene il casting implicito e quando è meglio utilizzare il casting esplicito per mantenere il codice chiaro e sicuro.

## Conclusioni

### Vantaggi

- Permette la conversione tra tipi per adattarsi alle esigenze del programma.
- Può facilitare l'interoperabilità tra librerie o moduli che utilizzano tipi diversi.
- Aiuta a gestire situazioni in cui è necessario modificare il tipo di dati.

### Svantaggi

- Può introdurre errori nel programma se non utilizzato correttamente.
- Il casting può nascondere problemi di progettazione o logica nel codice.
- In alcuni casi, può compromettere le prestazioni o l'integrità dei dati.

### Considerazioni da fare durante l'utilizzo del casting

Quando si esegue il casting in C++, è importante tenere presente diverse considerazioni:

1. **Sicurezza**: Assicurarsi che il casting non introduca comportamenti indefiniti o errori nel programma.
2. **Compatibilità**: Verificare che i tipi siano compatibili e che il casting non perda informazioni importanti.
3. **Performance**: Considerare l'impatto sulle prestazioni del programma, specialmente per operazioni di casting frequenti o complesse.
4. **Leggibilità**: Utilizzare il casting in modo parsimonioso e comprensibile, evitando situazioni ambigue o difficili da seguire per altri sviluppatori.