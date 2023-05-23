#pragma once
#include <string>

#ifdef NUTRICIONDYNAMICLIBRAY_EXPORTS
#define NUTRICION_DLL __declspec(dllexport)
#else
#define NUTRICION_DLL __declspec(dllimport)
#endif

namespace Nutricion {

	enum class NUTRICION_DLL NivelIMC
	{
		Inferior, Normal, Superior, Obesidad
	};

	class NUTRICION_DLL IMC {
	public:
		float Peso;
		float Estatura;
		NivelIMC Nivel;
		float Resultado;
		void Calcular();
		std::string NivelDescripcion();
	};
}
