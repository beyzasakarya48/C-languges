using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace mukemmelsayi
{
    internal class Program
    {
        public static double pi_sayisi = 3.14;
        static void Main(string[] args)
        {
            Console.WriteLine("Bir sayı giriniz:");
            int girilen_sayi = Convert.ToInt32(Console.ReadLine());
            int toplam = 0;

            for(int i=1;i<girilen_sayi;i++)
            {
                if (girilen_sayi % i == 0)
                {
                    toplam += i;
                }
            }
            if(toplam==girilen_sayi)
            {
                Console.WriteLine("Mükemmel sayıdır.");
            }
            else
            {
                Console.WriteLine("Mükemmel sayı değildir.");
            }


        }
    }
}