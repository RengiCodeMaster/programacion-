#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Vuelo {
public:
    string origen;
    string destino;
    string hora_salida;
    string hora_llegada;
    int capacidad;

    Vuelo(string org, string dest, string dep, string arr, int cap)
        : origen(org), destino(dest), hora_salida(dep), hora_llegada(arr), capacidad(cap) {}
};

class SistemaReservas {
private:
    vector<Vuelo> vuelos;

public:
    void agregarVuelo(Vuelo vuelo) {
        vuelos.push_back(vuelo);
    }

    void cancelarVuelo(string origen, string destino) {
        for (int i = 0; i < vuelos.size(); i++) {
            if (vuelos[i].origen == origen && vuelos[i].destino == destino) {
                vuelos.erase(vuelos.begin() + i);
                break;
            }
        }
    }

    void verReservas() {
        for (const auto& vuelo : vuelos) {
            cout << "Vuelo desde " << vuelo.origen << " hasta " << vuelo.destino << "\n";
        }
    }
};

int main() {
    SistemaReservas sistema;
    Vuelo vuelo1("Lima", "Cusco", "08:00", "10:00", 100);
    sistema.agregarVuelo(vuelo1);
    sistema.verReservas();
    sistema.cancelarVuelo("Lima", "Cusco");
    sistema.verReservas();
    return 0;
}
