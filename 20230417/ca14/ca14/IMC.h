#pragma once
#include <string>

namespace Nutricion {

	enum class NivelIMC
	{
		Inferior, Normal, Superior, Obesidad
	};

	struct IMC {
		float Peso;
		float Estatura;
		NivelIMC Nivel;
		float Resultado;
		void Calcular();
		std::string NivelDescripcion();
	};
}
