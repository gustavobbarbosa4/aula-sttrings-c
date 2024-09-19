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
	
    if(strcmp(s1,s2)==0) {
         printf("string s2 recebe s3: %s", strcpy(s2,s3));
	}else{
	     strcat(s3,s2);
	     strcat(s3,s1);
	     printf("%s", s3);
	}
	
	
}
