#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int **matris; //iki boyutlu dizi olu�turma
	int satir, sutun;
	printf("Satir sayisini giriniz: ");
	scanf("%d", &satir);
	printf("Sutun sayisini giriniz: ");
	scanf("%d", &sutun);
	srand(time(NULL));
	
	matris = (int **)malloc(sizeof(int *)*satir); //sat�r say�s� kadar yer a�ma
	
	int i,k;
	for (i=0;i<satir;i++){
		matris[i]=(int *)malloc(sizeof(int)*sutun); //her sat�ra sutun say�s� kadar yer a�ma
	}
	for(i=0;i<satir;i++){
		for(k=0;k<sutun;k++){
			matris[i][k]=rand()%100; //rasgele de�er atama
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
