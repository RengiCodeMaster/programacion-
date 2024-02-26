#include <iostream>

int main() {
    int i = 6;
    int resultado1 = i++ * 2 + i; // (5 * 2) + 6 = 16
    std::cout << "Resultado 1: " << resultado1 << std::endl;

    int j = 8;
    int resultado2 = j++ + ++j; // 3 + (4 + 1) = 8
    std::cout << "Resultado 2: " << resultado2 << std::endl;

    return 0;
}
