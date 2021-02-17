#include <stdio.h>


/* kullanýcýdan alýnan matrisin satýr ve sütunlarýnýn çarpýmýný bulma */

void satir_carpim(int matris[][3]){
	
	int i,k,m; int satir_carpim[3];
	int carpim=1;
	for(i=0;i<3;i++){
		for(k=0;k<3;k++){
			carpim=carpim*matris[i][k];
		}
		satir_carpim[i]=carpim;
		carpim=1;
	}
	
	for(m=0;m<3;m++){
	printf("%d. satir carpimi: %d\n", m+1, satir_carpim[m]);
    }
    
    
}

void sutun_carpim(int matris[][3]){
	
	int i,k,m; int sutun_carpim[3];
	int carpim=1;
	for(k=0;k<3;k++){
		for(i=0;i<3;i++){
			carpim=carpim*matris[i][k];
		}
		sutun_carpim[k]=carpim;
		carpim=1;
	}
	
	for(m=0;m<3;m++){
	printf("%d. sutun carpimi: %d\n", m+1, sutun_carpim[m]);
    }
    
    
}
int main(){
	int i,k; 	
	int matris[3][3];
	printf("Matrisi giriniz: ");
	for(i=0;i<3;i++){
		for(k=0;k<3;k++){
			scanf("%d", &matris[i][k]);
		}
	}
	
	satir_carpim(matris);
	sutun_carpim(matris);


return 0;
	
}
