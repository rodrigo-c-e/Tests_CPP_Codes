#include <iostream>

// Esta función recibe un número 'n' y retorna su factorial.
// Es del tipo "con parámetros y con retorno".
long long calcularFactorial(int n) {
    if (n < 0) {
        return 0; // Factorial no definido para negativos
    }
    
    long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int numero;
    std::cout << "Ingrese un numero para calcular su factorial: ";
    std::cin >> numero;
    
    long long resultado = calcularFactorial(numero);
    
    std::cout << "El factorial de " << numero << " es " << resultado << std::endl;
    
    return 0;
}