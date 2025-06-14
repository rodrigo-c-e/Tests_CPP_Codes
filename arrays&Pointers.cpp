#include <iostream>

int main() {
    int valores[] = {5, 8, 12, 3, 7};
    int* ptr = valores; // El puntero apunta al inicio del arreglo
    int tamano = 5;
    int suma = 0;

    std::cout << "Recorriendo el arreglo con punteros:" << std::endl;
    for (int i = 0; i < tamano; i++) {
        // *(ptr + i) accede al valor en la posición i
        int valorActual = *(ptr + i);
        std::cout << "Valor: " << valorActual << std::endl;
        suma += valorActual;
    }

    std::cout << "\nLa suma total de los elementos es: " << suma << std::endl;

    return 0;
}