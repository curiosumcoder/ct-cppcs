#include <iostream>
#include <format>
#include <string>
#include <cmath>
#include <windows.h>
#include <vector>

using namespace std;

enum class NivelIMC
{
    Inferior, Normal, Superior, Obesidad
};

struct ResultIMC
{
    float IMC;
    NivelIMC Level;
};

ResultIMC IMC(float peso, float estatura);

int main()
{
    SetConsoleOutputCP(1252);

    vector<string> levelDesc{
        "Peso inferior al normal. Menos de 18.5",
        "Normal. 18.5 - 24.9",
        "Peso superior al normal. 25.0 - 29.9",
        "Obesidad. Más de 30.0"
    };
    //levelDesc.push_back("")

    NivelIMC nivel{ };

    // IMC = peso (kg)/ [estatura (m)]^2
    float peso{}, estatura{};

    cout << "\nDigite su peso en Kg: ";
    cin >> peso;

    cout << "\nDigite su estatura en m: ";
    cin >> estatura;

    ResultIMC imc{ };
    imc = IMC(peso, estatura);

    cout << format("Su IMC es {:.2f} = {}/{}^2. {}\n",
        imc.IMC, peso, estatura, levelDesc[(short)imc.Level]);

    //switch (imc.Level)
    //{
    //case NivelIMC::Inferior:
    //    cout << "Peso inferior al normal. Menos de 18.5";
    //    break;
    //case NivelIMC::Normal:
    //    cout << "Normal. 18.5 - 24.9";
    //    break;
    //case NivelIMC::Obesidad:
    //    cout << "Peso superior al normal. 25.0 - 29.9";
    //    break;
    //case NivelIMC::Superior:
    //    cout << "Obesidad. Más de 30.0";
    //    break;
    //default:
    //    break;
    //}

    cout << "\nREADY!\n";
}

// ResultIMC
ResultIMC IMC(float peso, float estatura)
{
    //ResultIMC result{ 1, NivelIMC::Inferior };
    ResultIMC result{};

    result.IMC = peso / (float)pow(estatura, 2);

    auto imc{ result.IMC };
    if (imc < 18.5)
    {
        result.Level = NivelIMC::Inferior;
    }
    else if (18.5 <= imc && imc <= 24.9) {
        result.Level = NivelIMC::Normal;
    }
    else if (25 <= imc && imc <= 29.9) {
        result.Level = NivelIMC::Obesidad;
    }
    else {
        result.Level = NivelIMC::Superior;
    }

    return result;
}

// void
// auto
float IMC0(float peso, float estatura)
{
    //return peso / pow(estatura, 2); 

    auto result{ 0.0f };
    result = peso / (float)pow(estatura, 2);

    return result;
}