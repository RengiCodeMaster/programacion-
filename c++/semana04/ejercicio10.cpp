#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void ContadorDeVocales(string palabra) {
    transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower);
    vector<int> contadorVocales(5, 0);

    for (int i = 0; i < palabra.length(); i++) {
        if (palabra[i] == 'a') {
            contadorVocales[0]++;
        } else if (palabra[i] == 'e') {
            contadorVocales[1]++;
        } else if (palabra[i] == 'i') {
            contadorVocales[2]++;
        } else if (palabra[i] == 'o') {
            contadorVocales[3]++;
        } else if (palabra[i] == 'u') {
            contadorVocales[4]++;
        }
    }

    cout << "Contador de vocales: " << endl;
    cout << "a: " << contadorVocales[0] << endl;
    cout << "e: " << contadorVocales[1] << endl;
    cout << "i: " << contadorVocales[2] << endl;
    cout << "o: " << contadorVocales[3] << endl;
    cout << "u: " << contadorVocales[4] << endl;
}

int main() {
    string palabra;
    cout << "Ingrese una oracion: ";
    getline(cin, palabra);
    ContadorDeVocales(palabra);
    return 0;
}