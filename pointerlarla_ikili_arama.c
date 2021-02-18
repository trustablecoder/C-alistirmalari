#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void secmeSiralama(int *dizi, int elemanSayisi){
	int *ptr, *ptr2, *enKucuk;
	
	for(ptr=dizi;ptr<dizi+elemanSayisi;ptr++){
		enKucuk = dizi+elemanSayisi-1;
		for(ptr2=ptr;ptr2<dizi+elemanSayisi;ptr2++){
			if(*ptr2<*enKucuk){
				enKucuk = ptr2;
			}
		}
		
		int gecici = *enKucuk;
		*enKucuk = *ptr;
		*ptr = gecici;
	}
	
}

void diziyiYazdir(int *dizi, int elemanSayisi){
	int *ptr;
	for(ptr=dizi;ptr<dizi+elemanSayisi;ptr++){
		printf("%d ", *ptr);
	}
	printf("\n");
}


void ikiliArama(int *dizi, int elemanSayisi, int arananSayi){
	int *sag = dizi+elemanSayisi-1;
	int *sol = dizi;
	int *ortanca; int x=0;
	while(sag>=sol){
		ortanca=sol+(sag-sol)/2;
		if(*ortanca == arananSayi){
			x = 1;
			break;
		}
		else if(*ortanca > arananSayi){
			sag = ortanca-1;
		}
		else{
			sol = ortanca + 1;
		}
	}
	
	if ( x==1 ){
		puts("Aranan sayi bulundu. ");
	}
	else if (x == 0){
		puts("Aranan sayi bulunamadi. ");
	}
}




int main(){
	
	int elemanSayisi;
	puts("Eleman sayisini giriniz: ");
	scanf("%d", &elemanSayisi);
	int *dizi =(int *)malloc(sizeof(int)*elemanSayisi);
	srand(time(NULL));
	int *ptr;
	for(ptr=dizi;ptr<dizi+elemanSayisi;ptr++){
		*ptr=rand()%100;
	}
	diziyiYazdir(dizi, elemanSayisi);
	secmeSiralama(dizi, elemanSayisi);
	diziyiYazdir(dizi, elemanSayisi);
	puts("Dizide aranacak degeri giriniz: ");
	int arananDeger;
	scanf("%d", &arananDeger);
	ikiliArama(dizi,elemanSayisi, arananDeger);
	
	
}
