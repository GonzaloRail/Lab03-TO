#ifndef NODO_H
#define NODO_H

#include <string>

class Nodo {
public:
    std::string valor; // Almacena el valor del nodo (operador o número)
    Nodo *izquierda;   // Puntero al hijo izquierdo
    Nodo *derecha;     // Puntero al hijo derecho

    Nodo(const std::string &val) : valor(val), izquierda(nullptr), derecha(nullptr) {}
};

#endif
