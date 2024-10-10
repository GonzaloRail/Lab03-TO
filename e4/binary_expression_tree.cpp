#include "binary_expression_tree.h"
#include <sstream>
#include <stack>
#include <string>


// Método para construir el árbol de expresión
void BinaryExpressionTree::construir(const std::string &expresion) {
    std::istringstream stream(expresion);
    std::string token;
    std::stack<Nodo *> pila;

    while (stream >> token) {
        // Si el token es un número, crea un nodo
        if (isdigit(token[0])) {
            Nodo *nuevoNodo = new Nodo(token);
            pila.push(nuevoNodo);
        } else {
            // Es un operador, crea un nodo para el operador
            Nodo *nuevoNodo = new Nodo(token);
            nuevoNodo->derecha = pila.top(); // Operando derecho
            pila.pop();
            nuevoNodo->izquierda = pila.top(); // Operando izquierdo
            pila.pop();
            pila.push(nuevoNodo); // Agrega el nodo al stack
        }
    }
    // La raíz será el único nodo restante en la pila
    raiz = pila.top();
}

// Método para evaluar el árbol de expresión
int BinaryExpressionTree::evaluar(Nodo *nodo) {
    if (nodo == nullptr) return 0;

    // Si es un número, devuelve su valor como entero
    if (isdigit(nodo->valor[0])) {
        return std::stoi(nodo->valor);
    }

    // Evalúa los subárboles izquierdo y derecho
    int izquierda = evaluar(nodo->izquierda);
    int derecha = evaluar(nodo->derecha);

    // Realiza la operación correspondiente
    if (nodo->valor == "+") {
        return izquierda + derecha;
    } else if (nodo->valor == "*") {
        return izquierda * derecha;
    }

    return 0; // En caso de un operador no reconocido
}

// Método público para evaluar la expresión
int BinaryExpressionTree::evaluar() {
    return evaluar(raiz);
}

// Método para liberar memoria
void BinaryExpressionTree::destruir(Nodo *nodo) {
    if (nodo) {
        destruir(nodo->izquierda);
        destruir(nodo->derecha);
        delete nodo;
    }
}
