#include <stdio.h>
#include <stdlib.h>
                            /* Döngüler bir süre sonra tekrarladığı için sadece ilk kullanımlarında açıkladım hocam malum biraz fazla satır oldu  */

int main()
 {
	   int id, stajyerid, tamzamanliid, secim, adet, ucret2, ucret5; /* tam zayı olarak kullandığım değişkenleri int olarak tanımladım */
	   float   paraustu,  eklenen, bakiye, ucret4 ; /* ondalıklı olarak kullandığım değikenleri float olarak tanımladım */
	 
	   printf(" Lutfen ID gırınız: ");
       scanf("%d",&id);
      
       tamzamanliid = id>2999 && id<3601 && id%3==0 ;
       stajyerid = id>49 && id<151 && id%5==0 ;
       
       
       if(stajyerid==1)                        /* stajyer idsi girildiğinde izlenicek yolu tanımladım */
       { 
		printf("Hoş geldiniz:\n\n");
		printf("Su icin 1 e basin (1 TL)\n");
        printf("Cikolata icin 2'ye basin (2TL)\n");
        printf("Maske icin 3'e basin (1TL)}\n");
        scanf("%d", &secim);
        
        switch (secim)                         /* yapılan seçime göre olan fiyatlandırma için switch case metodunu kullandım */
        {
        
        case 1 :                               /* seçim 1 olduğunda izlenecek yolu tanımladım */
        printf("Su seçtiniz. Lütfen adet giriniz:");
        scanf("%d",&adet);
        printf("%d adet ürün için %d TL ödemeyi yapınız\n",adet,adet);
        printf("Lütfen ücret giriniz:");
        scanf("%f",&bakiye);
        if (bakiye==adet)                      /*ödenmesi gereken ücret bakiye ile eşit ise ki durum için bu metodu kullandım */
        {
			printf("Ödemeniz alınmıştır.\n İyi günler");
			}
		else if (bakiye>adet)                  /*eğer ki bakiye ücretten fazla ise ki durum için bu metodu kullandım */
		{	
			paraustu=bakiye-adet;
			printf("Ödemeniz alınmıştır. %f para üstünüzü alabilirsin. İyi günler",paraustu);
			}
		else                                  /*Diğer durum için de elsei kullandım */
		{
		    while(adet>bakiye)                /*bakiyenin eksik olduğu durumlarda while dögüsünü kullanım ücret tam olana kadar bakiye girişi sağladım */
		    {
				printf("Yetersiz ücret girdiniz ekleme yapınız:\n");
				scanf("%f",&eklenen);
				bakiye = bakiye+eklenen;
				printf("Yeni bakiyeniz %f TL\n",bakiye);
				if (bakiye == adet)
				{
					printf("Ödemeniz alınmıştır. İyi günler");
					break;
					}
				else if (bakiye>adet)
				{
					paraustu= bakiye-adet;
					printf("Ödemeniz alınmıştır. %f Tl para üstünüzü alabilirsiniz.\n İyi günler",paraustu); 
					break;
					}
				}
		    	
			}
         case 2:
        printf("Çikolata seçtiniz. Lütfen adet giriniz:");
        scanf("%d",&adet);
        ucret2=adet*2;
        printf("%d adet ürün için %d TL ödemeyi yapınız\n",adet,ucret2);
        printf("Lütfen ücret giriniz:");
        scanf("%f",&bakiye);
        if (bakiye==ucret2)
        {
			printf("Ödemeniz alınmıştır.\n İyi günler");
			}
		else if (bakiye>ucret2)
		{	
			paraustu=bakiye-ucret2;
			printf("Ödemeniz alınmıştır. %f para üstünüzü alabilirsin. İyi günler",paraustu);
			}
		else 
		{
		    while(ucret2>bakiye)
		    {
				printf("Yetersiz ücret girdiniz ekleme yapınız:\n");
				scanf("%f",&eklenen);
				bakiye = bakiye+eklenen;
				printf("Yeni bakiyeniz %f TL\n",bakiye);
				if (bakiye == ucret2)
				{
					printf("Ödemeniz alınmıştır. İyi günler");
					break;
					}
				else if (bakiye>ucret2)
				{
					paraustu= bakiye-ucret2;
					printf("Ödemeniz alınmıştır. %f Tl para üstünüzü alabilirsiniz.\n İyi günler",paraustu); 
					break;
					}
				}
		    	
			}
			case 3 :
	    printf("Maske seçtiniz. Lütfen adet giriniz:");
        scanf("%d",&adet);
        printf("%d adet ürün için %d TL ödemeyi yapınız\n",adet,adet);
        printf("Lütfen ücret giriniz:");
        scanf("%f",&bakiye);
        if (bakiye==adet)
        {
			printf("Ödemeniz alınmıştır.\n İyi günler");
			}
		else if (bakiye>adet)
		{	
			paraustu=bakiye-adet;
			printf("Ödemeniz alınmıştır. %f para üstünüzü alabilirsin. İyi günler",paraustu);
			}
		else 
		{
		    while(adet>bakiye)
		    {
				printf("Yetersiz ücret girdiniz ekleme yapınız:\n");
				scanf("%f",&eklenen);
				bakiye = bakiye+eklenen;
				printf("Yeni bakiyeniz %f TL\n",bakiye);
				if (bakiye == adet)
				{
					printf("Ödemeniz alınmıştır. İyi günler");
					break;
					}
				else if (bakiye>adet)
				{
					paraustu= bakiye-adet;
					printf("Ödemeniz alınmıştır. %f Tl para üstünüzü alabilirsiniz.\n İyi günler",paraustu); 
					break;
					}
				}
		    	
			}
	    }
	   }
	   
	   
	   else if (tamzamanliid==1)       /* tam zamanlı id girildiğinde farklı ücretlendirmeye yönlendirdim  */
	   {
	   printf("Hoş geldiniz:\n\n");
		
		printf("Su icin 1 e basin (1,5 TL)\n");
        printf("Cikolata icin 2'ye basin (3TL)\n");
        printf("Maske icin 3'e basin (1TL)}\n");
        scanf("%d", &secim);
        
        switch (secim)
        {
			case 1 :
        printf("Su seçtiniz. Lütfen adet giriniz:");
        scanf("%d",&adet);
        ucret4=adet*1.5;
        printf("%d adet ürün için %f TL ödemeyi yapınız\n",adet,ucret4);
        printf("Lütfen ücret giriniz:");
        scanf("%f",&bakiye);
        if (bakiye==ucret4)
        {
			printf("Ödemeniz alınmıştır.\n İyi günler");
			}
		else if (bakiye>ucret4)
		{	
			paraustu=bakiye-adet;
			printf("Ödemeniz alınmıştır. %f para üstünüzü alabilirsin. İyi günler",paraustu);
			}
		else 
		{
		    while(ucret4>bakiye)
		    {
				printf("Yetersiz ücret girdiniz ekleme yapınız:\n");
				scanf("%f",&eklenen);
				bakiye = bakiye+eklenen;
				printf("Yeni bakiyeniz %f TL\n",bakiye);
				if (bakiye == ucret4)
				{
					printf("Ödemeniz alınmıştır. İyi günler");
					break;
					}
				else if (bakiye>ucret4)
				{
					paraustu= bakiye-ucret4;
					printf("Ödemeniz alınmıştır. %f Tl para üstünüzü alabilirsiniz.\n İyi günler",paraustu); 
					break;
					}
				}
		    	
			}
			case 2:
        printf("Çikolata seçtiniz. Lütfen adet giriniz:");
        scanf("%d",&adet);
        ucret5=adet*3;
        printf("%d adet ürün için %d TL ödemeyi yapınız\n",adet,ucret5);
        printf("Lütfen ücret giriniz:");
        scanf("%f",&bakiye);
        if (bakiye==ucret5)
        {
			printf("Ödemeniz alınmıştır.\n İyi günler");
			}
		else if (bakiye>ucret5)
		{	
			paraustu=bakiye-ucret5;
			printf("Ödemeniz alınmıştır. %f para üstünüzü alabilirsin. İyi günler",paraustu);
			}
		else 
		{
		    while(ucret5>bakiye)
		    {
				printf("Yetersiz ücret girdiniz ekleme yapınız:\n");
				scanf("%f",&eklenen);
				bakiye = bakiye+eklenen;
				printf("Yeni bakiyeniz %f TL\n",bakiye);
				if (bakiye == ucret5)
				{
					printf("Ödemeniz alınmıştır. İyi günler");
					break;
					}
				else if (bakiye>ucret5)
				{
					paraustu= bakiye-ucret5;
					printf("Ödemeniz alınmıştır. %f Tl para üstünüzü alabilirsiniz.\n İyi günler",paraustu); 
					break;
					}
				}
		    	
			}
			case 3 :
	    printf("Maske seçtiniz. Lütfen adet giriniz:");
        scanf("%d",&adet);
        printf("%d adet ürün için %d TL ödemeyi yapınız\n",adet,adet);
        printf("Lütfen ücret giriniz:");
        scanf("%f",&bakiye);
        if (bakiye==adet)
        {
			printf("Ödemeniz alınmıştır.\n İyi günler");
			}
		else if (bakiye>adet)
		{	
			paraustu=bakiye-adet;
			printf("Ödemeniz alınmıştır. %f para üstünüzü alabilirsin. İyi günler",paraustu);
			}
		else 
		{
		    while(adet>bakiye)
		    {
				printf("Yetersiz ücret girdiniz ekleme yapınız:\n");
				scanf("%f",&eklenen);
				bakiye = bakiye+eklenen;
				printf("Yeni bakiyeniz %f TL\n",bakiye);
				if (bakiye == adet)
				{
					printf("Ödemeniz alınmıştır. İyi günler");
					break;
					}
				else if (bakiye>adet)
				{
					paraustu= bakiye-adet;
					printf("Ödemeniz alınmıştır. %f Tl para üstünüzü alabilirsiniz.\n İyi günler",paraustu); 
					break;
					}
				}
		    	
			}
			}
	   }
	   
	   else             
	   {
		   while (tamzamanliid==0 && stajyerid==0)    /* Geçerli ID girilene kadar ID istemek için while döngüsünü kullandım */
		   {
			   printf("Yanlış ID girdiniz. Lütfen tekrar deneyin:");
			   scanf("%d",&id);
			   
		   if(id>49 && id<151 && id%5==0)
			   {
				   printf("Hoş geldiniz:\n\n");
		printf("Su icin 1 e basin (1 TL)\n");
        printf("Cikolata icin 2'ye basin (2TL)\n");
        printf("Maske icin 3'e basin (1TL)}\n");
        scanf("%d", &secim);
        
        switch (secim)
        {
        
        case 1 :
        printf("Su seçtiniz. Lütfen adet giriniz:");
        scanf("%d",&adet);
        printf("%d adet ürün için %d TL ödemeyi yapınız\n",adet,adet);
        printf("Lütfen ücret giriniz:");
        scanf("%f",&bakiye);
        if (bakiye==adet)
        {
			printf("Ödemeniz alınmıştır.\n İyi günler");
			}
		else if (bakiye>adet)
		{	
			paraustu=bakiye-adet;
			printf("Ödemeniz alınmıştır. %f para üstünüzü alabilirsin. İyi günler",paraustu);
			}
		else 
		{
		    while(adet>bakiye)
		    {
				printf("Yetersiz ücret girdiniz ekleme yapınız:\n");
				scanf("%f",&eklenen);
				bakiye = bakiye+eklenen;
				printf("Yeni bakiyeniz %f TL\n",bakiye);
				if (bakiye == adet)
				{
					printf("Ödemeniz alınmıştır. İyi günler");
					break;
					}
				else if (bakiye>adet)
				{
					paraustu= bakiye-adet;
					printf("Ödemeniz alınmıştır. %f Tl para üstünüzü alabilirsiniz.\n İyi günler",paraustu); 
					break;
					}
				}
		    	
			}
			break;
         case 2:
        printf("Çikolata seçtiniz. Lütfen adet giriniz:");
        scanf("%d",&adet);
        ucret2=adet*2;
        printf("%d adet ürün için %d TL ödemeyi yapınız\n",adet,ucret2);
        printf("Lütfen ücret giriniz:");
        scanf("%f",&bakiye);
        if (bakiye==ucret2)
        {
			printf("Ödemeniz alınmıştır.\n İyi günler");
			}
		else if (bakiye>ucret2)
		{	
			paraustu=bakiye-ucret2;
			printf("Ödemeniz alınmıştır. %f para üstünüzü alabilirsin. İyi günler",paraustu);
			}
		else 
		{
		    while(ucret2>bakiye)
		    {
				printf("Yetersiz ücret girdiniz ekleme yapınız:\n");
				scanf("%f",&eklenen);
				bakiye = bakiye+eklenen;
				printf("Yeni bakiyeniz %f TL\n",bakiye);
				if (bakiye == ucret2)
				{
					printf("Ödemeniz alınmıştır. İyi günler");
					break;
					}
				else if (bakiye>ucret2)
				{
					paraustu= bakiye-ucret2;
					printf("Ödemeniz alınmıştır. %f Tl para üstünüzü alabilirsiniz.\n İyi günler",paraustu); 
					break;
					}
				}
		    	
			}
			break;
			
			case 3 :
	    printf("Maske seçtiniz. Lütfen adet giriniz:");
        scanf("%d",&adet);
        printf("%d adet ürün için %d TL ödemeyi yapınız\n",adet,adet);
        printf("Lütfen ücret giriniz:");
        scanf("%f",&bakiye);
        if (bakiye==adet)
        {
			printf("Ödemeniz alınmıştır.\n İyi günler");
			}
		else if (bakiye>adet)
		{	
			paraustu=bakiye-adet;
			printf("Ödemeniz alınmıştır. %f para üstünüzü alabilirsin. İyi günler",paraustu);
			}
		else 
		{
		    while(adet>bakiye)
		    {
				printf("Yetersiz ücret girdiniz ekleme yapınız:\n");
				scanf("%f",&eklenen);
				bakiye = bakiye+eklenen;
				printf("Yeni bakiyeniz %f TL\n",bakiye);
				if (bakiye == adet)
				{
					printf("Ödemeniz alınmıştır. İyi günler");
					break;
					}
				else if (bakiye>adet)
				{
					paraustu= bakiye-adet;
					printf("Ödemeniz alınmıştır. %f Tl para üstünüzü alabilirsiniz.\n İyi günler",paraustu); 
					break;
					}
				}
		    	
			}
			break ;
	    }
				   break ;
				   }
		   else if (id>2999 && id<3601 && id%3==0 )
			   {
				   printf("Hoş geldiniz:\n\n");
		
		printf("Su icin 1 e basin (1,5 TL)\n");
        printf("Cikolata icin 2'ye basin (3TL)\n");
        printf("Maske icin 3'e basin (1TL)}\n");
        scanf("%d", &secim);
        
        switch (secim)
        {
			case 1 :
        printf("Su seçtiniz. Lütfen adet giriniz:");
        scanf("%d",&adet);
        ucret4=adet*1.5;
        printf("%d adet ürün için %f TL ödemeyi yapınız\n",adet,ucret4);
        printf("Lütfen ücret giriniz:");
        scanf("%f",&bakiye);
        if (bakiye==ucret4)
        {
			printf("Ödemeniz alınmıştır.\n İyi günler");
			}
		else if (bakiye>ucret4)
		{	
			paraustu=bakiye-adet;
			printf("Ödemeniz alınmıştır. %f para üstünüzü alabilirsin. İyi günler",paraustu);
			}
		else 
		{
		    while(ucret4>bakiye)
		    {
				printf("Yetersiz ücret girdiniz ekleme yapınız:\n");
				scanf("%f",&eklenen);
				bakiye = bakiye+eklenen;
				printf("Yeni bakiyeniz %f TL\n",bakiye);
				if (bakiye == ucret4)
				{
					printf("Ödemeniz alınmıştır. İyi günler");
					break;
					}
				else if (bakiye>ucret4)
				{
					paraustu= bakiye-ucret4;
					printf("Ödemeniz alınmıştır. %f Tl para üstünüzü alabilirsiniz.\n İyi günler",paraustu); 
					break;
					}
				}
		    	
			}
			break ;
			
			case 2:
        printf("Çikolata seçtiniz. Lütfen adet giriniz:");
        scanf("%d",&adet);
        ucret5=adet*3;
        printf("%d adet ürün için %d TL ödemeyi yapınız\n",adet,ucret5);
        printf("Lütfen ücret giriniz:");
        scanf("%f",&bakiye);
        if (bakiye==ucret5)
        {
			printf("Ödemeniz alınmıştır.\n İyi günler");
			}
		else if (bakiye>ucret5)
		{	
			paraustu=bakiye-ucret5;
			printf("Ödemeniz alınmıştır. %f para üstünüzü alabilirsin. İyi günler",paraustu);
			}
		else 
		{
		    while(ucret5>bakiye)
		    {
				printf("Yetersiz ücret girdiniz ekleme yapınız:\n");
				scanf("%f",&eklenen);
				bakiye = bakiye+eklenen;
				printf("Yeni bakiyeniz %f TL\n",bakiye);
				if (bakiye == ucret5)
				{
					printf("Ödemeniz alınmıştır. İyi günler");
					break;
					}
				else if (bakiye>ucret5)
				{
					paraustu= bakiye-ucret5;
					printf("Ödemeniz alınmıştır. %f Tl para üstünüzü alabilirsiniz.\n İyi günler",paraustu); 
					break;
					}
				}
		    	
			}
			break ;
			
			case 3 :
	    printf("Maske seçtiniz. Lütfen adet giriniz:");
        scanf("%d",&adet);
        printf("%d adet ürün için %d TL ödemeyi yapınız\n",adet,adet);
        printf("Lütfen ücret giriniz:");
        scanf("%f",&bakiye);
        if (bakiye==adet)
        {
			printf("Ödemeniz alınmıştır.\n İyi günler");
			}
		else if (bakiye>adet)
		{	
			paraustu=bakiye-adet;
			printf("Ödemeniz alınmıştır. %f para üstünüzü alabilirsin. İyi günler",paraustu);
			}
		else 
		{
		    while(adet>bakiye)
		    {
				printf("Yetersiz ücret girdiniz ekleme yapınız:\n");
				scanf("%f",&eklenen);
				bakiye = bakiye+eklenen;
				printf("Yeni bakiyeniz %f TL\n",bakiye);
				if (bakiye == adet)
				{
					printf("Ödemeniz alınmıştır. İyi günler");
					break;
					}
				else if (bakiye>adet)
				{
					paraustu= bakiye-adet;
					printf("Ödemeniz alınmıştır. %f Tl para üstünüzü alabilirsiniz.\n İyi günler",paraustu); 
					break;
					}
				}
		    	
			}
			break ;
			}
				   break;
			   }
					   
			   
			   }
	   }
	   
        
	return 0;
}

