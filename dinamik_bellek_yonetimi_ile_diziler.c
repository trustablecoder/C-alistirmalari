#include <stdio.h>
#include <stdlib.h>


int main(){
	
	
	int elemanSayisi,i;
	printf("Kac adet eleman gerektigini giriniz: ");
	scanf("%d", &elemanSayisi);
	int *dizi=(int*)malloc(sizeof(int)*elemanSayisi); //eleman sayisi kadar olusturulmus yerin baslangýc adresini diziye atamak.
	for(i=0;i<elemanSayisi;i++){
		dizi[i]=i;
		printf("%d\n", dizi[i]);
	}
	
	
return 0;
}
