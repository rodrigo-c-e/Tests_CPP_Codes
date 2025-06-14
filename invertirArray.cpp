#include <iostream>

int main() {
    const int TAMANO = 5;
    int arregloOriginal[TAMANO];
    int arregloInvertido[TAMANO];

    std::cout << "Ingrese " << TAMANO << " números para el arreglo:" << std::endl;
    for (int i = 0; i < TAMANO; i++) {
        std::cin >> arregloOriginal[i];
    }

    // Lógica para invertir el arreglo
    for (int i = 0; i < TAMANO; i++) {
        // El elemento en la posición 'i' del arreglo invertido
        // será el elemento en la posición 'TAMANO - 1 - i' del original.
        arregloInvertido[i] = arregloOriginal[TAMANO - 1 - i];
    }

    std::cout << "\nArreglo Original: ";
    for (int i = 0; i < TAMANO; i++) {
        std::cout << arregloOriginal[i] << " ";
    }

    std::cout << "\nArreglo Invertido: ";
    for (int i = 0; i < TAMANO; i++) {
        std::cout << arregloInvertido[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}