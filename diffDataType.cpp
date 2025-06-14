#include <iostream>
#include <string>

int main() {
    int numero = 42;
    double decimal = 3.1416;
    std::string texto = "Hola";

    // Creamos punteros para cada tipo
    int* ptrNumero = &numero;
    double* ptrDecimal = &decimal;
    std::string* ptrTexto = &texto;
    
    // Esto daría un error de compilación, porque un puntero a int
    // no puede guardar la dirección de un double.
    // int* ptrError = &decimal; // ¡ERROR!

    std::cout << "--- Manipulando datos con punteros ---" << std::endl;

    std::cout << "Valor original de 'numero': " << *ptrNumero << std::endl;
    *ptrNumero = 100;
    std::cout << "Nuevo valor de 'numero': " << numero << std::endl;

    std::cout << "\nLongitud original del texto: " << (*ptrTexto).length() << std::endl;
    // La notación -> es un atajo para (*puntero).miembro
    *ptrTexto += " Mundo";
    std::cout << "Nuevo texto: " << *ptrTexto << std::endl;
    std::cout << "Nueva longitud del texto: " << ptrTexto->length() << std::endl;

    return 0;
}