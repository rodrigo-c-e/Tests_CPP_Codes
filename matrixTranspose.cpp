#include <iostream>

int main() {
    const int FILAS = 2;
    const int COLUMNAS = 3;

    int matrizOriginal[FILAS][COLUMNAS] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    // La matriz transpuesta tendrá las dimensiones invertidas
    int matrizTranspuesta[COLUMNAS][FILAS];

    // Lógica de transposición
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            matrizTranspuesta[j][i] = matrizOriginal[i][j];
        }
    }

    std::cout << "Matriz Original (2x3):" << std::endl;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            std::cout << matrizOriginal[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nMatriz Transpuesta (3x2):" << std::endl;
    for (int i = 0; i < COLUMNAS; ++i) {
        for (int j = 0; j < FILAS; ++j) {
            std::cout << matrizTranspuesta[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}