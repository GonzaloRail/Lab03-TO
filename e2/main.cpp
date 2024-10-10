#include <iostream>
#include <memory> // Para std::unique_ptr
#include "time.h"
using namespace std;

int main() {
    // Instancias usando punteros inteligentes
    auto t1 = std::make_unique<Time>(10, 50, 59); // Instancia en memoria dinámica
    t1->print(); // Imprime: 10:50:59

    auto t2 = std::make_unique<Time>(); // Instancia en memoria dinámica con valores por defecto
    t2->print(); // Imprime: 00:00:00
    t2->setTime(6, 39, 9);
    t2->print(); // Imprime: 06:39:09

    if (t1->equals(*t2)) {
        cout << "Dos objetos son IGUALES\n";
    } else {
        cout << "Dos objetos NO son IGUALES\n";
    }

    return 0;
}
