using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Suma
{
    class Program
    {
        static void Main(string[] args)
        {
            int n1, n2,suma;
            string n1str, n2str;
            Console.Write("Ingrese un numero:");
            n1str = Console.ReadLine();
            n1 = int.Parse(n1str);
            Console.Write("Ingrese un numero:");
            n2str = Console.ReadLine();
            n2 = int.Parse(n2str);
            suma = n1 + n2;
            Console.Write("la sumas es:" + suma);
            Console.ReadKey();
        }
    }
}
