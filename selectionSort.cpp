#include <iostream>

void mostrarArreglo(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void ordenarPorSeleccion(int arr[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        // Suponemos que el mínimo es el primer elemento de la parte desordenada
        int indiceMinimo = i;
        
        // Buscamos el verdadero mínimo en el resto del arreglo
        for (int j = i + 1; j < tam; j++) {
            if (arr[j] < arr[indiceMinimo]) {
                indiceMinimo = j; // Encontramos un nuevo mínimo
            }
        }
        
        // Intercambiamos el mínimo encontrado con el primer elemento de la parte desordenada
        int temp = arr[indiceMinimo];
        arr[indiceMinimo] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int miArreglo[] = {64, 25, 12, 22, 11};
    int tamano = 5;

    std::cout << "Arreglo original: ";
    mostrarArreglo(miArreglo, tamano);

    ordenarPorSeleccion(miArreglo, tamano);

    std::cout << "Arreglo ordenado: ";
    mostrarArreglo(miArreglo, tamano);

    return 0;
}