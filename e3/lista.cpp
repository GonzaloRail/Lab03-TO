#include "lista.h"

// CONSTRUCTOR POR DEFECTO
Lista::Lista() {
    cout << "Constructor por defecto\n";
}

void Lista::copiaArreglo(int arreglo[], int size, Nodo **inicio) {
    Nodo *iNodo = new Nodo;
    *inicio = iNodo;
    (*inicio)->valor = arreglo[0];
    (*inicio)->siguiente = nullptr;
    (*inicio)->anterior = nullptr; // Inicializa el puntero anterior

    int i = 1;
    while (i < size) {
        Nodo *nuevoNodo = new Nodo; // Crear un nuevo nodo
        nuevoNodo->valor = arreglo[i];
        nuevoNodo->siguiente = nullptr;

        // Enlazar el nodo anterior y el nuevo nodo
        iNodo->siguiente = nuevoNodo;
        nuevoNodo->anterior = iNodo;

        // Mover el puntero al nuevo nodo
        iNodo = nuevoNodo;
        i++;
    }
}

void Lista::imprimeListaDesdeAdelante(Nodo *inicio) {
    Nodo *iNodo = inicio;
    while (iNodo != nullptr) {
        cout << iNodo->valor << " ";
        iNodo = iNodo->siguiente;
    }
    cout << endl;
}

void Lista::imprimeListaDesdeAtras(Nodo *inicio) {
    Nodo *iNodo = inicio;
    // Ir al último nodo
    while (iNodo->siguiente != nullptr) {
        iNodo = iNodo->siguiente;
    }
    // Imprimir desde el último nodo
    while (iNodo != nullptr) {
        cout << iNodo->valor << " ";
        iNodo = iNodo->anterior;
    }
    cout << endl;
}

void Lista::destruyeLista(Nodo *inicio) {
    Nodo *iNodo = inicio;
    Nodo *AuxNodo;
    while (iNodo != nullptr) {
        AuxNodo = iNodo->siguiente;
        delete iNodo;
        iNodo = AuxNodo;
    }
}

Nodo* Lista::buscarDesdeAdelante(Nodo *inicio, int valor) {
    Nodo *iNodo = inicio;
    while (iNodo != nullptr) {
        if (iNodo->valor == valor) {
            return iNodo; // Retorna el nodo si se encuentra
        }
        iNodo = iNodo->siguiente;
    }
    return nullptr; // Retorna nullptr si no se encuentra
}

Nodo* Lista::buscarDesdeAtras(Nodo *inicio, int valor) {
    Nodo *iNodo = inicio;
    // Ir al último nodo
    while (iNodo && iNodo->siguiente != nullptr) {
        iNodo = iNodo->siguiente;
    }
    // Buscar hacia atrás
    while (iNodo != nullptr) {
        if (iNodo->valor == valor) {
            return iNodo; // Retorna el nodo si se encuentra
        }
        iNodo = iNodo->anterior;
    }
    return nullptr; // Retorna nullptr si no se encuentra
}
