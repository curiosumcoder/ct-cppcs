using Nutricion.Tools;

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