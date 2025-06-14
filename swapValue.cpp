#include <iostream>

// La función recibe las direcciones de dos variables enteras.
void intercambiar(int* ptrA, int* ptrB) {
    // Usamos el operador * para acceder a los valores en esas direcciones.
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    int a = 10;
    int b = 99;

    std::cout << "Valores originales: a=" << a << ", b=" << b << std::endl;
    
    // Pasamos las direcciones de 'a' y 'b' a la función.
    intercambiar(&a, &b);
    
    std::cout << "Valores intercambiados: a=" << a << ", b=" << b << std::endl;

    return 0;
}