/*
Kaç tane sayı girileceği ve aritmetik ortalaması alınacak olan sayıların kullanıcı tarafından girilip aritmetik ortalamanın bulunduğu C kodu.
*/
#include <stdio.h>

int main () {
	int n;
	printf("Lutfen sayi miktarini giriniz: \n");
	scanf ("%d", &n);
	int i;
	int k;
	int toplam = 0;
	int ortalama;
	int a[n];
	printf("Lutfen artimetik ortalamasi alinacak sayilari giriniz: \n");
	for (i=0; i<n; i+=1){
		scanf("%d", &a[i]);
	}
	
	for(k=0; k<n; k += 1){
      	toplam = a[k]+ toplam;}

	ortalama = toplam/n;
	printf("Ortalama: %d",ortalama);
	return 0;
}
