#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"turkish");
	int n=10; 
	int a=0,b=1,degisken;
	int sayac=0; 
	
	printf("Fibonacci Dizisi:");
	
	while(sayac<n){		
	printf("%d",a); 
	degisken=a+b; 
	a=b;
	b=degisken;
	sayac++;	
	}
	printf("\n");
}
