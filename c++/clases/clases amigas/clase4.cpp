/*
Ejercicio 1: Banco y Cliente

Crea una clase Cliente y una clase Banco. Haz que la clase Banco
sea amiga de la clase Cliente. Los clientes tienen información
privada como nombre, saldo y número de cuenta. La clase Banco
debe tener la capacidad de acceder a esta información
para realizar operaciones bancarias como transferencias y consultas de saldo.*/
#include <iostream>
using namespace std;
class Banco;
class Cliente
{
private:
    string nombre;
    int saldo;
    long numero_de_cuenta;

public:
    friend class Banco;
};
class Banco
{
    private:
    long destino;
public:
void transferencias( Cliente &c){
    destino=4684984;
    c.numero_de_cuenta=986111;
    cout<<"El deposito de la cuenta "<< c.numero_de_cuenta <<"hacia "<< destino<<endl;
    cout<<"****LA OPERACION FUE EXITOSA****"<<endl;
}
void consultas(Cliente &c)
{
    c.nombre="juan";
    c.numero_de_cuenta=564646;
    c.saldo=8000;
    cout<<"***CONSULTA DE SALDO***"<<endl;
    cout<<"NOMBRE: "<<c.nombre<<endl;
    cout<<"NUMERO DE CUENTA: "<<c.numero_de_cuenta<<endl;
    cout<<"SALDO: "<<"$"<<c.saldo<<endl;
    
}
};
int main()
{
    Banco b1;
    Cliente c1;
    b1.consultas(c1);
    b1.transferencias(c1);

    return 0;
}