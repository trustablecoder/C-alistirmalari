#include <stdio.h>
#include <ctype.h>

int main(){
	char karakter;
	int sayac=-1,sayac1=0,sayac2=0,sayac3=0;
	printf("Sifre giriniz: \n");
	
	do{
		karakter =getchar();
		sayac++;
		if (isdigit(karakter)){
			sayac1++;
		}
		if (islower(karakter)){
			sayac2++;
		}
		if (isupper(karakter)){
			sayac3++;
		}
	}while(karakter != '\n');
//printf("uzunluk: %d, sayi: %d, buyuk harf: %d, kucuk harf: %d\n", sayac,sayac1,sayac3,sayac2);	
if (sayac>=8 && sayac<=16 && sayac1 && sayac2 && sayac3 )	
{
	printf("sifreniz uygundur.");
}
else
{
	printf("sifreniz uygun degildir\n");
	if(sayac1==0){
		printf("sifreniz rakam icermelidir.\n");
	}
	if(sayac2==0){
		printf("sifreniz kucuk harf icermelidir.\n");
	}
	if(sayac3==0){
		printf("sifreniz buyuk harf icermelidir.\n");
	}
	if(sayac<8 || sayac>16){
		printf("sifreniz 8 ile 16 uzunlugunda olmalidir.\n");
	}
}

	
return 0;	
}
