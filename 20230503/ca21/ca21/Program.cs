#define CONSTANTE_PI

using Nutricion;
using System.Diagnostics;
using System.Runtime.Intrinsics;

namespace ca21
{
    internal class Program
    {
        static void Main(string[] args)
        {
            for (int i = 0; i < 10; i++)
            {
                Console.WriteLine($"{i,+10} {0,+10} {i%2:0.00}", i);
            }

#if CONSTANTE_PI
            var n1 = 0;
#endif
            const int v1 = 123;

            var msg = "";
            switch (msg)
            {
                case "ok":
                    break;
                case "fail":
                    break;
                default:
                    break;
            }

            int n = 0;
            Function1(ref n, "DEMO");

            IMC persona1 = new IMC();

            Console.WriteLine("Type weight: ");
            var dato = Console.ReadLine();
            persona1.Peso = Convert.ToInt32(dato);

            Console.WriteLine("Type heigth: ");
            dato = Console.ReadLine();
            persona1.Estatura = (float)Convert.ToDouble(dato);

            persona1.Calcular();

            Console.WriteLine("{0}, {1}",
                persona1.Resultado,
                persona1.NivelDescripcion());

            Console.WriteLine("READY!");
        }

        /// <summary>
        /// Value Types: bool, int, double, Int16, ...
        /// Reference Types: object (class), ...
        /// </summary>
        /// <param name="a"></param>
        /// <param name="s"></param>
        static void Function1(ref int a, string s)
        {
            List<int> list = new List<int>() { 1, 2, 3 };
            list.Add(5);
            list.Add(6);

            foreach (var n in list)
            {
                Console.WriteLine(n);
            }
        }

        static void Function2(int a, string s)
        {
            List<int> list = new List<int>() { 1, 2, 3 };

            foreach (var n in list)
            {
                Console.WriteLine(n);
            }
        }
    }
}