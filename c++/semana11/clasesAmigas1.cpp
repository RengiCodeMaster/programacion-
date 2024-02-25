#include <iostream>

using namespace std;

class Vehicle; // Forward declaration

class Animal {
private:
    string name;
public:
    Animal(string name) : name(name) {}

    friend class Vehicle; // Vehicle is a friend class of Animal

    void display() {
        cout << "Animal: " << name << endl;
    }
};

class Vehicle {
private:
    string model;
public:
    Vehicle(string model) : model(model) {}

    friend class Animal; // Animal is a friend class of Vehicle

    void display() {
        cout << "Vehicle: " << model << endl;
    }
};

int main() {
    Animal animal("Lion");
    Vehicle vehicle("Car");

    animal.display();
    vehicle.display();

    return 0;
}
