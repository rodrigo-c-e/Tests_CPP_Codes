#include <iostream>

int main() {
    char cadena1[] = "Hola ";
    char cadena2[] = "Mundo!";
    char resultado[50]; // Arreglo con espacio suficiente

    char* ptrRes = resultado; // Puntero al inicio del resultado
    char* ptr1 = cadena1;     // Puntero al inicio de la cadena 1
    char* ptr2 = cadena2;     // Puntero al inicio de la cadena 2

    // Copiar la primera cadena
    while (*ptr1 != '\0') {
        *ptrRes = *ptr1;
        ptrRes++;
        ptr1++;
    }

    // Copiar la segunda cadena
    while (*ptr2 != '\0') {
        *ptrRes = *ptr2;
        ptrRes++;
        ptr2++;
    }

    // Añadir el carácter nulo final
    *ptrRes = '\0';

    std::cout << "Cadenas concatenadas: " << resultado << std::endl;

    return 0;
}