#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"turkish");
	int i,j;
	printf("1-10 Arasý Çarpým Taplosu\n\n");
	for(i=1;i<=10;i++)
	{
	 for(j=1;j<=10;j++)
	 {
	 printf("%2d x %2d = %3d\t",i,j,i*j);	
	 }
	printf("\n")	;	
	}
	return 0;	
}
