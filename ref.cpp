#include <iostream>

// 'a' es una referencia (modifica el original)
// 'b' es un valor (una copia)
void cambiar(int &a, int b) {
    a = a + 10;
    b = b + 10;
}

int main() {
    int x = 5, y = 5;

    std::cout << "Valores iniciales: x=" << x << ", y=" << y << std::endl;
    
    cambiar(x, y); // x se pasa por referencia, y por valor

    // x se modifica porque se pasó su referencia.
    // y no se modifica porque se pasó una copia.
    std::cout << "Valores finales: ";
    std::cout << x << " " << y << std::endl; // Imprime "15 5" 

    return 0;
}