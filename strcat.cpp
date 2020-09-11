#include <stdio.h>
#include <string.h>

//String.h kütüphanesinin içinde zaten olan strcat fonksiyonunu kullanmadan ayný iþlemi yapan kod.

void mystrcat(char *string1, char *string2){
	char *ptr1;
	char *ptr2=string2; char *ptr3;
	int uzunluk1 = strlen(string1);  int uzunluk2 = strlen(string2);
	ptr3 = string1+uzunluk1;
	while(*ptr2 != '\0'){
		*ptr3 = *ptr2;
		ptr3++; ptr2++;
	}
	ptr3='\0';
	for(ptr1=string1;ptr1<string1+uzunluk1+uzunluk2;ptr1++){
		printf("%c", *ptr1);
	}
  
}

int main(){
	char string1[]="kuru"; char string2[]="fasulye";
	mystrcat(string1, string2);
	
	
	return 0;
}
