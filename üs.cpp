#include<stdio.h>
#include<math.h>
int main()
{
	int taban,us,i=1;
	printf("taban sayýyý giriniz");
	scanf("%d",&taban);
	printf("üs sayýyý giriniz");
	scanf("%d",&us);
	
	for(i=1;i<=us;i++)
	{
	i=i*taban;
    }
	printf("%d",i);
}
