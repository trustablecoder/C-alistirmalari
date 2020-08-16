//DIŞARIDAN GİRİLEN SAYININ BASAMAKLARININ ÇARPIMINI ÇIKTI OLARAK VEREN C KODU

#include <stdio.h>
#include <string.h>
int main(){
	while(1){
	int sayi;
	char dizi[100];
	printf("Sayiyi giriniz: \n");
	scanf("%d", &sayi);
	sprintf(dizi, "%d", sayi);
	int uzunluk = strlen(dizi);
	//printf("%d %d",uzunluk,sayi);
	int basa
#include <stdio.h>
#include <string.h>
int main(){
	while(1){
	int sayi;
	char dizi[100];
	printf("Sayiyi giriniz: \n");
	scanf("%d", &sayi);
	sprintf(dizi, "%d", sayi);
	int uzunluk = strlen(dizi);
	//printf("%d %d",uzunluk,sayi);
	int basamak[uzunluk];
	int i;
	for(i=0; i<uzunluk; i+=1){
		basamak[i]=sayi%10;
		sayi= sayi/10;
		}
	int k;
	int carpim=1;
	/*for(k=0;k<uzunluk;k+=1){
		printf("%d",basamak[k]);
	}*/
	for(k=0;k<uzunluk;k+=1){
	carpim = carpim * basamak[k];
	}
	printf("Carpim: %d\n",carpim);
}
return 0;	
}
