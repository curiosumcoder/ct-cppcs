using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Nutricion.Tools
{
    public enum NivelIMC
    {
        Inferior, Normal, Superior, Obesidad
    };

    public class IMC
    {
        public int Peso;
        public float Estatura;
        public NivelIMC Nivel;
        public float Resultado;
        public void Calcular()
        {
            // Convert.
            Resultado = (float)(Peso / Math.Pow(Estatura, 2));

            var imc = Resultado;
            if (imc < 18.5)
            {
                Nivel = NivelIMC.Inferior;
            }
            else if (18.5 <= imc && imc <= 24.9)
            {
                Nivel = NivelIMC.Normal;
            }
            else if (25 <= imc && imc <= 29.9)
            {
                Nivel = NivelIMC.Obesidad;
            }
            else
            {
                Nivel = NivelIMC.Superior;
            }
        }
        public string NivelDescripcion()
        {
            List<string> levelDesc = new List<string>() {
                "Peso inferior al normal. Menos de 18.5",
                "Normal. 18.5 - 24.9",
                "Peso superior al normal. 25.0 - 29.9",
                "Obesidad. Más de 30.0"};

            return levelDesc[(int)Nivel];
        }
    }
}
