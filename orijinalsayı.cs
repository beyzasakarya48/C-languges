using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _4bsamaklısayi
{
    internal class Program
    {
        public static double pi_sayisi = 3.14; 
        static void Main(string[] args)
        {
            int sayi = 0;
            Console.WriteLine("4 basamkalı sayı giriniz:");
            sayi = Convert.ToInt32(Console.ReadLine());

            int ilkikibas = sayi / 100;
            int sonikibas = sayi % 100;
            int toplam = ilkikibas + sonikibas;
            int toplamkaresi = toplam * toplam;
            if(toplamkaresi==sayi)
            {
                Console.WriteLine("Orijinal bir sayıdır.");
            }
            else
            {
                Console.WriteLine("Orijinal bir sayı değildir.");
            }
        }
    }
}