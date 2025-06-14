#include <iostream>

// La función retorna un puntero al carácter encontrado, o nullptr
const char* encontrarCaracter(const char* cadena, char caracterBuscado) {
    // Recorremos la cadena mientras no lleguemos al final ('\0')
    while (*cadena != '\0') {
        if (*cadena == caracterBuscado) {
            return cadena; // ¡Encontrado! Retornamos la dirección actual
        }
        cadena++; // Avanzamos al siguiente carácter
    }
    return nullptr; // No se encontró, retornamos un puntero nulo
}

int main() {
    const char* miTexto = "programacion con punteros";
    char letra = 'p';

    const char* encontrado = encontrarCaracter(miTexto, letra);

    if (encontrado != nullptr) {
        // 'encontrado' ahora apunta al lugar de la 'p' en 'miTexto'
        std::cout << "El carácter '" << letra << "' fue encontrado." << std::endl;
        std::cout << "El resto de la cadena desde ahí es: \"" << encontrado << "\"" << std::endl;
    } else {
        std::cout << "El carácter '" << letra << "' no fue encontrado." << std::endl;
    }

    return 0;
}