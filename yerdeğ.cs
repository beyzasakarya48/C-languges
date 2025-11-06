using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace yerdegistirme
{
    internal class Program
    {
        static void Main(string[] args)
        {
			// Klayvyeden girilen a v b gibi iki değerin yerlerini değiştirerek ekrana yazan c# kodu
            Console.WriteLine("A sayı giriniz");
            int A = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("B sayı giriniz");
            int B = Convert.ToInt32(Console.ReadLine());

            int C;
            C = A;
            A = B;
            B = C;
            Console.WriteLine($"A:"+A);
            Console.WriteLine($"B:"+B);


        }
    }
}