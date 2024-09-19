#include <stdio.h>
#include <string.h> 

int main () {
	char s1[100], s2[100], s3[100];
	
	printf("digite um texto para s1: ");
	fgets(s1, 100, stdin);
	
	printf("digite um texto para s2: ");
	fgets(s2, 100, stdin);
	
	printf("digite um texto para s2: ");
	fgets(s3, 100, stdin);
	
	printf("tamanho de (s1): %d\n", strlen(s1));
	printf("tamanho de (s2): %d\n", strlen(s2));
	
	
	return 0;
}
