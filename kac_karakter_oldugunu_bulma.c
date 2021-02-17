/*

Soru-> Dizide kaç karakter bulunduðunu sayan algoritmayý yazýnýz(dizide birden fazla olan karakterler bir kere sayýlýr.)

*/

#include <stdio.h>
#include <string.h>


int harfSay( char metin[]){

int  toplam=0,i,k;
int uzunluk = strlen(metin);
for(i=0;i<uzunluk;i++)
   {
		for(k=0;k<i;k++)
		{
			if (metin[i]==metin[k])
			{	
				toplam = toplam +1;
				break;
			}
		
		}
	}
	
return toplam;

}


int main(){

	char metin[]= "cprogramlamaalistirmasi";

	int sonuc = harfSay(metin);
	printf("%d", strlen(metin)-sonuc);
	

	return 0;
}
