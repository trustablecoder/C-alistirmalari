#include <stdio.h>


int fibonacciRecursive( int sayi)
{
	
	if(sayi==0 || sayi==1){
		return sayi;
	}
	else
	{
		return fibonacciRecursive(sayi-1)+fibonacciRecursive(sayi-2);
	}
	
}

int main() {


	int i,ustlimit;
	printf("Fibonacci icin ust limit giriniz \n");
	scanf("%d", &ustlimit);

    for(i=0;i<ustlimit;i++){
    	
    	printf("%d ", fibonacciRecursive(i));
    	
	}

	return 0;
}
