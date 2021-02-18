#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int **matris; //iki boyutlu dizi oluşturma
	int satir, sutun;
	printf("Satir sayisini giriniz: ");
	scanf("%d", &satir);
	printf("Sutun sayisini giriniz: ");
	scanf("%d", &sutun);
	srand(time(NULL));
	
	matris = (int **)malloc(sizeof(int *)*satir); //satır sayısı kadar yer açma
	
	int i,k;
	for (i=0;i<satir;i++){
		matris[i]=(int *)malloc(sizeof(int)*sutun); //her satıra sutun sayısı kadar yer açma
	}
	for(i=0;i<satir;i++){
		for(k=0;k<sutun;k++){
			matris[i][k]=rand()%100; //rasgele değer atama
		}
	}
	
	for(i=0;i<satir;i++){
		for(k=0;k<sutun;k++){
			printf("%d ", matris[i][k]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<satir;i++){
		free(matris[i]);
	}
	free(matris);






return 0;

	
}
