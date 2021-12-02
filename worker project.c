


#include <stdio.h>

int main()
{
	float saat, ucret, saatlikUcret ;
	
	printf(" Günde kaç saat çalışıyosunuz? ");
	scanf("%f",&saat );
	
	printf(" Haftalık ücretiniz ne kadar ? ");
	scanf("%f",&ucret );
	
	saatlikUcret = ucret/(6*saat);
	
	printf("Saatlik ücretiniz : %f ", saatlikUcret);
	
	
	return 0;
}

