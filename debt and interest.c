#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Bundan baðýmsýz olarak bir banka hesabý Template i aç
Bir hesapta borc bakiye gibi
Borca faiz hesaplayan bir fonksiyon yaz
Bakiyeden borc odeyen fonksiyon
Para yatirma fonksiyonu
Atm den yatiriyormus gibi
Bunu yaparken struct kullan 
*/

struct veriler {
	
	int borc;
	int bakiye;
};


void parayatirmafonksiyon(int bakiye1){
	int yatirilicakpara;
	printf("\nKac para yatiricaksiniz?:");
	scanf("%d",&yatirilicakpara);
	bakiye1 = bakiye1 + yatirilicakpara;
	printf("\nYeni bakiyeniz = %d",bakiye1);
	
}
void paracekmefonksiyon(int bakiye1){
	int cekilecekpara;
	printf("\nKac para cekiceksiniz?:");
	scanf("%d",&cekilecekpara);
	if(cekilecekpara <= bakiye1){

	bakiye1 = bakiye1 - cekilecekpara;
	printf("Yeni bakiyeniz = %d",bakiye1);
}
    else{
    	printf("Yetersiz bakiye!");}
	}
void borcodemefonksiyon(int borc1,int ay,int bakiye1){
	int odememiktari;
	borc1 = (((borc1 * 18) / 100) * ay) + borc1;
	printf("Borcunuz:%d",borc1);
    printf("Odemek istediginiz miktar:");
	scanf("%d",&odememiktari);
	bakiye1 = bakiye1 - odememiktari;
	borc1= borc1-odememiktari;	
	printf("Borcunuz odenmistir, kalan miktar %d, kalan bakiyeniz %d",borc1,bakiye1);
	
		
		
	}
	




int main(){
	char secim;
	struct veriler x;
	x.borc=500;
	x.bakiye = 5000;
	int islem=1;
	char tekrarMi;
	while(islem==1)
	{
	
  	    printf("Yapmak istediginiz islemi seciniz: 1-) Para yatirma, 2-)Para cekme, 3-)Borc odeme");
  	    scanf("%c",&secim);
	        switch(secim){
	  	        case '1':
	  	   	        parayatirmafonksiyon(x.bakiye);
	  	   	        break;
	  	        case '2':
	  		        paracekmefonksiyon(x.bakiye);
	  				break;
	  	
				case '3':	
		    		borcodemefonksiyon(x.borc,3,x.bakiye);
		    		break;
		printf("Tekrar islem yapmak istiyor musunuz? (E/H):");
		scanf("%c",&tekrarMi);
		if(tekrarMi == 'E')
		{
			islem = 1;
			
		}
		else{
			islem = 0;
		}

	}
  		
  		
	  
	
	return 0;
}
}
