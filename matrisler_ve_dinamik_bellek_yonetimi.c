#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int **matris; //iki boyutlu dizi oluþturma
	int satir, sutun;
	printf("Satir sayisini giriniz: ");
	scanf("%d", &satir);
	printf("Sutun sayisini giriniz: ");
	scanf("%d", &sutun);
	srand(time(NULL));
	
	matris = (int **)malloc(sizeof(int *)*satir); //satýr sayýsý kadar yer açma
	
	int i,k;
	for (i=0;i<satir;i++){
		matris[i]=(int *)malloc(sizeof(int)*sutun); //her satýra sutun sayýsý kadar yer açma
	}
	for(i=0;i<satir;i++){
		for(k=0;k<sutun;k++){
			matris[i][k]=rand()%100; //rasgele deðer atama
		}
	}
	
	for(i=0;i<satir;i++){
		for(k=0;k<sutun;k++){
			printf("%d ", matris[i][k]);
		}
		printf("\n");
	}






return 0;

	
}
