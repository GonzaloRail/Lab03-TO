#include "lista.h"

int main(int argc, char const *argv[]) {
    int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    const int longitud = sizeof(arreglo) / sizeof(*arreglo);
    Nodo *inicio = nullptr;

    Lista lista1; // Llama al constructor por defecto
    lista1.copiaArreglo(arreglo, longitud, &inicio);
    
    cout << "Impresion desde adelante: ";
    lista1.imprimeListaDesdeAdelante(inicio);
    
    cout << "Impresion desde atras: ";
    lista1.imprimeListaDesdeAtras(inicio);
    
    int valorBuscado = 5;
    Nodo *resultadoAdelante = lista1.buscarDesdeAdelante(inicio, valorBuscado);
    Nodo *resultadoAtras = lista1.buscarDesdeAtras(inicio, valorBuscado);

    if (resultadoAdelante) {
        cout << "Encontrado desde adelante: " << resultadoAdelante->valor << endl;
    } else {
        cout << "No encontrado desde adelante." << endl;
    }

    if (resultadoAtras) {
        cout << "Encontrado desde atras: " << resultadoAtras->valor << endl;
    } else {
        cout << "No encontrado desde atras." << endl;
    }

    lista1.destruyeLista(inicio);

    int espera;
    cin >> espera;

    return 0;
}
