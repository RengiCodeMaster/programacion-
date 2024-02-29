#include<iostream>
using namespace std;
class Pet
{
private:
    string name;

public:
    Pet(string _name) : name(_name) {}
    void run()
    {
        cout << " yo estoy corriendo. \n";
    }
};
class cat : public Pet
{
public:
    cat(string n) : Pet(n) {}
    void sonido()
    {
        cout << "Miau miau\n";
    }
};
class dog : public Pet
{
public:
    dog(string n) : Pet(n) {}
    void sonido()
    {
        cout << "Wauuu\n";
    }
};
int main()
{
    Pet *a_pet1 = new cat("gato");
    a_pet1->run();
    static_cast<cat *>(a_pet1)->sonido();
    Pet *a_pet2 = new dog("perro");
    a_pet2->run();
    static_cast<dog *>(a_pet2)->sonido();
    return 0;
}