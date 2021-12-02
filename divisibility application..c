#include <stdio.h>

int main()
{
	int sayi;
	
	printf("Lütfen bir sayı giriniz: ");
	scanf("%d" , &sayi);
	
	printf(" Girdiğiniz sayı 2 ye bölünür mü? %d\n " , sayi%2==0 );
	printf("Girdiğiniz sayı 3 ye bölünür mü? %d\n " , sayi%3==0 );
	printf("Girdiğiniz sayı 5 ye bölünür mü? %d   " , sayi%5==0 );
	
	return 0 ;
	
	
}
