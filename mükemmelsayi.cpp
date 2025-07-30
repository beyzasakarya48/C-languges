#include<locale.h>
#include<math.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL,"turkish");
    int girilen_sayi,toplam=0;
    printf("Bir sayý giriniz:");
    scanf("%d",&girilen_sayi);
       for(int i=1;i<girilen_sayi;i++)
        {
        if (girilen_sayi % i == 0)
        {
             toplam += i;
         }
        }
            if(toplam==girilen_sayi)
            {
                printf("Mükemmel sayýdýr.");
            }
            else
            {
                printf("Mükemmel sayý deðildir.");
            }
  }
