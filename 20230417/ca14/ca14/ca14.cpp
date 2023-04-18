#include <iostream>
#include <format>
#include "IMC.h"
#include <functional>
#include <cmath>

using namespace std;
using namespace Nutricion;

float potencia(float a, float b)
{
    return pow(a, b);
}

void operar(function<float(float, float)> fn, float a, float b)
{
    cout << "El resultado es " << fn(a, b) << endl;
}

int main()
{
    //Nutricion::IMC
    IMC persona1{};
    
    persona1.Peso = 100;
    persona1.Estatura = 1.80f;
    persona1.Calcular();

    cout << format("{:0.2}, {}\n", 
        persona1.Resultado,
        persona1.NivelDescripcion());

    // Lambda expressions
    function<void()> f1 = []() { cout << "Hi from Lambda"; };
    f1();

    function<float(float, float)> f2 = 
        [](float peso, float estatura) -> float {
        return peso / static_cast<float>(pow(estatura, 2));
    };

    cout << f2(100, 1.8);
    auto suma = [](float a, float b) {return a + b; };
    auto resta = [](float a, float b) {return a - b; };
    auto mult = [](float a, float b) {return a * b; };
    auto div = [](float a, float b) {return a / b; };

    operar(suma, 3, 2);
    operar(resta, 3, 2);
    operar(mult, 3, 2);
    operar(div, 3, 2);
    operar(potencia, 3, 2);

    cout << "READY!\n";
}
