#include <stdio.h>
#include <stdlib.h>


int simetrik_mi(int **matris, int satir, int sutun){
	int i,j;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			if(matris[i][j] != matris[j][i]){
				return 0;
			}
			if((i==j && matris [i][j] == 0) == 0){
				return 0;	
			}
			else{
				return 1;
			}
		}
	}
}


int main(){
	int **matris;
	puts("Matrisin satir ve sutun sayisini giriniz: ");
	int satir, sutun; int i,j;
	scanf("%d%d", &satir, &sutun);
	matris=(int**)malloc(sizeof(int*)*satir);
	for(i=0; i<satir;i++){
		matris[i]=(int *)malloc(sizeof(int)*sutun);
	}	
	puts("\nMatris degerlerini giriniz: ");
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			scanf("%d", &matris[i][j]);
		}
	}
	puts("\nGirilen matris: ");
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	
	int sonuc = simetrik_mi(matris,satir,sutun);
	if(sonuc == 1){
		puts("Matris simetriktir. ");
	}
	else{
		puts("Matris simetrik degildir. ");
	}


return 0;
}
