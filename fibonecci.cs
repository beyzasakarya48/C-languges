using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace fibonecci
{
    internal class Program
    {
        static void Main(string[] args)
        {
			// Klavyeden girilecek N değerine kadar fibonecci dizisini bulan c# kodu
            Console.WriteLine("Bir sayı giriniz:");
            int N=int.Parse(Console.ReadLine());
            Console.WriteLine("Fibonacci Dizisi:");
            int ilk_say = 1, ikinci_say = 1;

            Console.WriteLine(ilk_say+"");
            if (N > 1)
            {
                Console.WriteLine(ikinci_say + "");
            }
            for(int i=3;i<=N; i++)
            {
                int son_say = ilk_say+ ikinci_say;
              Console.WriteLine(son_say+"");
                ilk_say = ikinci_say;
                ikinci_say = son_say;
            }
        }
    }
}
