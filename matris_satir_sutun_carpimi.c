#include <stdio.h>


/* kullanıcıdan alınan matrisin satır ve sütunlarının çarpımını bulma */

int satir, sutun;


void satir_carpim(int matris[satir][sutun]){
	
	int i,k,m; int satir_carpim[satir];
	int carpim=1;
	for(i=0;i<satir;i++){
		for(k=0;k<sutun;k++){
			carpim=carpim*matris[i][k];
		}
		satir_carpim[i]=carpim;
		carpim=1;
	}
	
	for(m=0;m<satir;m++){
	printf("%d. satir carpimi: %d\n", m+1, satir_carpim[m]);
    }
    
    
}

void sutun_carpim(int matris[satir][sutun]){
	
	int i,k,m; int sutun_carpim[sutun];
	int carpim=1;
	for(k=0;k<satir;k++){
		for(i=0;i<sutun;i++){
			carpim=carpim*matris[i][k];
		}
		sutun_carpim[k]=carpim;
		carpim=1;
	}
	
	for(m=0;m<sutun;m++){
	printf("%d. sutun carpimi: %d\n", m+1, sutun_carpim[m]);
    }
    
    
}
int main(){
	int i,k; 	
	printf("satir ve sutun sayisini giriniz: ");
	scanf("%d %d", &satir, &sutun);
	int matris[satir][sutun];
	printf("Matrisi giriniz: ");
	for(i=0;i<satir;i++){
		for(k=0;k<sutun;k++){
			scanf("%d", &matris[i][k]);
		}
	}
	
	satir_carpim(matris);
	sutun_carpim(matris);


return 0;
	
}
