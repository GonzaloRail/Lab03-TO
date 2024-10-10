#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
#include <memory>  // Para usar punteros inteligentes

typedef unsigned short int USHORT;

using namespace std;

class Rectangulo {
private:
    // Atributos privados como punteros
    unique_ptr<USHORT> miancho;
    unique_ptr<USHORT> mialto;
    unique_ptr<int> val1, val2, val3;

public:
    // Constructores y Destructor
    Rectangulo();  // Constructor por defecto
    Rectangulo(USHORT ancho, USHORT alto);  // Constructor parametrizado
    Rectangulo(const Rectangulo& R);  // Constructor de copia
    ~Rectangulo() {}  // Destructor (unique_ptr gestiona automáticamente la memoria)

    // Métodos
    void Dibujar();
    void Dibujar(USHORT xancho, USHORT xalto);
};

#endif
