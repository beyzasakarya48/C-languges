using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace basamaksayısı
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Sayı giriniz:");
            int girilen_sayi = Convert.ToInt32(Console.ReadLine());
            int basamak_say=0;


            if(girilen_sayi==0)
            {
                Console.WriteLine("1 basamklıdır");
            }
            else
            {
                while (girilen_sayi>0)
                {
                    girilen_sayi/= 10;
                  basamak_say++ ;
                }
                Console.WriteLine("basamak sayısı\n" + basamak_say);
            }
           
        }
    }
}
