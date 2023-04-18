#include "IMC.h"
#include <string>
#include <cmath>
#include <vector>

using namespace std;

namespace Nutricion {

	void IMC::Calcular()
	{
        Resultado = Peso / static_cast<float>(pow(Estatura, 2));

        auto imc{ Resultado };
        if (imc < 18.5)
        {
            Nivel = NivelIMC::Inferior;
		}
        else if (18.5 <= imc && imc <= 24.9) {
            Nivel = NivelIMC::Normal;
        }
        else if (25 <= imc && imc <= 29.9) {
            Nivel = NivelIMC::Obesidad;
        }
        else {
            Nivel = NivelIMC::Superior;
        }
	}

	string IMC::NivelDescripcion()
	{
        vector<string> levelDesc{
        "Peso inferior al normal. Menos de 18.5",
        "Normal. 18.5 - 24.9",
        "Peso superior al normal. 25.0 - 29.9",
        "Obesidad. Más de 30.0"
        };

		return levelDesc[static_cast<short>(Nivel)];
	}
}

//std::string Nutricion::IMC::NivelDescripcion()
//{
//	return "";
//}