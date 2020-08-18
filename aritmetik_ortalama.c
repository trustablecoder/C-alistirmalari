/*
Sayı miktarı ve sayıların kullanıcı tarafından girilip aritmetik ortalamasının hesaplanandığı c kodu.
*/
#include <stdio.h>

	int main () 
    {
		
	 	int n=0, toplam = 0, i, ortalama;
		
		printf("Lutfen sayi miktarini giriniz: \n");
		scanf ("%d", &n);
		
        	int a[n];
		
        	printf("Lutfen artimetik ortalamasi alinacak sayilari giriniz: \n");
		
        	for (i=0; i<n; i++)
			{
			scanf("%d", &a[i]);
			toplam = a[i]+ toplam;
			}
	
		ortalama = toplam/n;
		
		printf("Ortalama: %d",ortalama);
        	return 0;
	}
