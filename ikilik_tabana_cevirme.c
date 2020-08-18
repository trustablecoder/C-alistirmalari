/*Klavyeden ikilik (binary – 2) tabanda girilen 8 bitlik sayının onluk (Decimal -10) tabandaki karşılığını ekrana yazan program*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	int basamak[100];
	int ikilik,i,islem=0;
	char dizi[100];
	printf("Onluk tabana cevrilmesi istenen ikilik sayiyi yaziniz: \n");
	scanf("%d", &ikilik);
	sprintf(dizi, "%d", ikilik); //int tipinde olan sayıyı diziye dönüştürdü.
    int uzunluk = strlen(dizi);
    	
		if ((ikilik<0) || (ikilik !=0) || (ikilik !=1) || (uzunluk != 8)){
		printf("Yanlis karakter girdiniz.");
		return 0; }
		
		else{
    		for (i=0; i<uzunluk; i++){
    			basamak[i]=ikilik % 10;
    			ikilik = ikilik/10;
    			if (basamak[i]==1)
    			{
    		islem = islem + pow(2,i);
		}
	}
	
	printf("Ondalik tabanda: %d",islem);}
	
return 0;
}
	
	
	
	
	
	
	
	
	
	

