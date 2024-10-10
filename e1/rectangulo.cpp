#include "rectangulo.h"

// CONSTRUCTOR POR DEFECTO
Rectangulo::Rectangulo() {
    cout << "Constructor por defecto\n";
    miancho = make_unique<USHORT>(10);
    mialto = make_unique<USHORT>(2);
    val1 = make_unique<int>(0);
    val2 = make_unique<int>(0);
    val3 = make_unique<int>(0);
}

// CONSTRUCTOR PARAMETRIZADO
Rectangulo::Rectangulo(USHORT ancho, USHORT alto) {
    cout << "Constructor parametrizado\n";
    miancho = make_unique<USHORT>(ancho);
    mialto = make_unique<USHORT>(alto);
    val1 = make_unique<int>(0);
    val2 = make_unique<int>(0);
    val3 = make_unique<int>(0);
}

// CONSTRUCTOR COPIA
Rectangulo::Rectangulo(const Rectangulo& R) {
    cout << "Constructor de copia\n";
    miancho = make_unique<USHORT>(*R.miancho);
    mialto = make_unique<USHORT>(*R.mialto);
    val1 = make_unique<int>(*R.val1);
    val2 = make_unique<int>(*R.val2);
    val3 = make_unique<int>(*R.val3);
}

// MÉTODO DIBUJAR
void Rectangulo::Dibujar() {
    *val1 = 1;
    *val2 = 4;
    *val3 = 8;
    Dibujar(*miancho, *mialto);
}

// MÉTODO SOBRECARGADO PARA DIBUJAR
void Rectangulo::Dibujar(USHORT xancho, USHORT xalto) {
    for (USHORT i = 0; i < xalto; i++) {
        for (USHORT j = 0; j < xancho; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
