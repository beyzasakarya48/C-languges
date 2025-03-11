#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"turkish");
	int sayi1,bassay=0;
	
	printf("Bir sayý giriniz:");
	scanf("%d",&sayi1);
	
	if(sayi1<0)
	{
		sayi1=-sayi1;
	}	
	do{
	bassay++;  
	sayi1/=10;    
	}while(sayi1>0);  
	
	printf("Girilen sayý %d basamaklidir",bassay);
	
}
