#include <stdio.h>
#include <string.h>

int main () {
    int i;
    char s1[] = "teste";
    char s2[100];
    
    printf("digite seu nome: ");
    fgets(s2, 100, stdin);
    
    printf("tamanho do texto (%s): %d\n", s1, strlen(s1));
    printf("tamanho do texto (%s): %d\n", s2, strlen(s2));
    
	return 0;
}
