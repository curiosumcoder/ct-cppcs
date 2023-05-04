namespace ca20
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // cout << "Hello, World!" << endl;

            Console.WriteLine("Type your name: ");
            // string nullable
            string? name = Console.ReadLine();

            if (name != null)
            {
                Console.WriteLine("Your name is: {0}",name);
            }

            Console.WriteLine("READY!");            
        }
    }
}