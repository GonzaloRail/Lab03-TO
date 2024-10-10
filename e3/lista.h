#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

class Lista {
public:
    Lista();
    void copiaArreglo(int arreglo[], int size, Nodo **inicio);
    void imprimeListaDesdeAdelante(Nodo *inicio);
    void imprimeListaDesdeAtras(Nodo *inicio);
    void destruyeLista(Nodo *inicio);
    Nodo* buscarDesdeAdelante(Nodo *inicio, int valor);
    Nodo* buscarDesdeAtras(Nodo *inicio, int valor);
    ~Lista() {}
};

#endif
