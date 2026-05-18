#include <iostream>
using namespace std;

class Figura {
public:
    virtual double calcularArea() = 0;
};

class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(double r) { radio = r; }
    double calcularArea() { return 3.1416 * radio * radio; }
};

class Rectangulo : public Figura {
private:
    double base, altura;
public:
    Rectangulo(double b, double h) { base = b; altura = h; }
    double calcularArea() { return base * altura; }
};

void mostrarArea(Figura& f) {
    cout << "Area: " << f.calcularArea() << endl;
}

int main() {
    int opcion;
    double radio, base, altura;
    
    cout << "1. Circulo" << endl;
    cout << "2. Rectangulo" << endl;
    cout << "Eliga una opcion: ";
    cin >> opcion;
    
    if(opcion == 1) {
        cout << "Radio: ";
        cin >> radio;
        Circulo c(radio);
        mostrarArea(c);
    }
    else if(opcion == 2) {
        cout << "Base: ";
        cin >> base;
        cout << "Altura: ";
        cin >> altura;
        Rectangulo r(base, altura);
        mostrarArea(r);
    }
    else {
        cout << "Opcion no valida" << endl;
    }
    
    return 0;
}