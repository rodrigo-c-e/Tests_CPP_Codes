#include <iostream>

int main() {
    int datos[] = {12, 25, 30, 17, 19, 16};
    int* ptr = datos;
    int tamano = 6;
    int contadorMayores18 = 0;

    std::cout << "Inspeccionando valores y direcciones de memoria:" << std::endl;
    for (int i = 0; i < tamano; i++) {
        int valorActual = *(ptr + i);
        // (ptr + i) nos da la dirección de memoria del elemento
        void* direccion = (void*)(ptr + i); 

        std::cout << "Elemento " << i << " | Valor: " << valorActual << " | Dirección: " << direccion << std::endl;

        // Contamos si el valor es mayor que 18 
        if (valorActual > 18) {
            contadorMayores18++;
        }
    }

    std::cout << "\nTotal de valores mayores que 18: " << contadorMayores18 << std::endl;

    return 0;
}