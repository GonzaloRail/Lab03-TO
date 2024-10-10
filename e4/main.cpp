#include "binary_expression_tree.h"
#include <iostream>

int main() {
    BinaryExpressionTree tree;

    // Ejemplo de expresión: "(3 + (4 * 5))"
    // Representada en notación postfija: "3 4 5 * +"
    std::string expresion = "3 4 5 * +";
    
    tree.construir(expresion);
    
    std::cout << "Resultado de la expresion: " << tree.evaluar() << std::endl;

    return 0;
}
