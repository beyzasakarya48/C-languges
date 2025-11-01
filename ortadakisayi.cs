using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ortadakisayi
{
    internal class Program
    {
        static void Main(string[] args)
        {
		//ortadaki sayıyı bulma 
            int sayi1, sayi2, sayi3;
            Console.WriteLine("Say 1 'i giriniz:");
            sayi1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Say 2 'i giriniz:");
            sayi2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Say 3 'i giriniz:");
            sayi3 = Convert.ToInt32(Console.ReadLine());

            if(sayi1<sayi2 && sayi1<sayi3)
            {
                if (sayi2 < sayi3)
                {
                    Console.WriteLine("Ortanca sayı"+sayi2);
                }
                else
                {
                    Console.WriteLine("Ortanca sayı" + sayi3);
                }
            }



            Console.ReadLine();



        }
    }
}
