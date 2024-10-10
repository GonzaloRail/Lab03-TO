#ifndef BINARY_EXPRESSION_TREE_H
#define BINARY_EXPRESSION_TREE_H

#include "nodo.h"
#include <iostream>
#include <memory>
#include <string>

class BinaryExpressionTree {
private:
    Nodo *raiz; // Raíz del árbol

    // Método recursivo para evaluar el árbol
    int evaluar(Nodo *nodo);

public:
    BinaryExpressionTree() : raiz(nullptr) {}

    // Método para construir el árbol
    void construir(const std::string &expresion);
    // Método para evaluar la expresión
    int evaluar();
    // Método para liberar memoria
    void destruir(Nodo *nodo);
    ~BinaryExpressionTree() { destruir(raiz); }
};

#endif
