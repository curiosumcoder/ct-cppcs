#include <iostream>
#include <format>
#include "IMC.h"

using namespace std;
using namespace Nutricion;

int main()
{
    IMC persona1{};

    persona1.Peso = 100;
    persona1.Estatura = 1.80f;
    persona1.Calcular();

    cout << format("{:0.2}, {}\n",
        persona1.Resultado,
        persona1.NivelDescripcion());

    cout << "READY!\n";
}