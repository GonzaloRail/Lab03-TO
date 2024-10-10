#include "Rectangulo.h"

using namespace std;

int main() {
    // Crear instancias de Rectangulo en memoria dinámica utilizando std::unique_ptr
    unique_ptr<Rectangulo> x = make_unique<Rectangulo>();  // Constructor por defecto
    cout << "Dibujar(): \n";
    x->Dibujar();

    unique_ptr<Rectangulo> y = make_unique<Rectangulo>(30, 5);  // Constructor parametrizado
    cout << "Dibujar(30, 5): \n";
    y->Dibujar();

    cout << "Dibujar(40, 2): \n";
    x->Dibujar(40, 2);

    // Copiar objetos
    unique_ptr<Rectangulo> obj1 = make_unique<Rectangulo>(*x);  // Constructor de copia
    obj1->Dibujar();

    unique_ptr<Rectangulo> obj2 = make_unique<Rectangulo>(*y);  // Constructor de copia
    obj2->Dibujar();

    return 0;
}
