#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int numeroSecreto = rand() % 100 + 1;
    int intento, intentos = 0;

    do {
        std::cout << "Adivina el número (entre 1 y 100): ";
        std::cin >> intento;
        intentos++;

    if (intento < numeroSecreto)
            std::cout << "Muy bajo. Intenta de nuevo." << std::endl;
        else if (intento > numeroSecreto)
            std::cout << "Muy alto. Intenta de nuevo." << std::endl;
        else
            std::cout << "¡Correcto! Has adivinado en " << intentos << " intentos." << std::endl;

    } while (intento != numeroSecreto);

    return 0;
}
