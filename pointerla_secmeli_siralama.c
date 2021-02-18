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
	
}
