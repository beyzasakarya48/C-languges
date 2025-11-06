#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"turkish");
	
	int dizi[3][3]={1,2,3,4,5,6,7,8,9};
	int i,j;
	
	for(i=0;i<=2;i++)
	{
	 for(j=2;j<=0;j--)
	 {
	 	printf("%d\t",dizi[i][j]);
	 }
	 printf("%d\n",dizi[i][j]);
	}  	
	
	

}
