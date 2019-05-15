#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
	char nome[50];
	float nota[3], media;
	int numero;
}aluno;

int main (){
	int i;
	aluno al1;
	
	printf ("Entre com o nome do aluno \n");
	fflush(stdin);
	gets (al1.nome);
	
	printf ("Entre com o numero do aluno \n");
	scanf ("%d", &al1.numero);
	
	for (i = 0; i < 3; i++){
		printf ("Entre com a nota do aluno \n");
		scanf ("%f", &al1.nota[i]);
		al1.media += al1.nota[i];
	}
	
	al1.media = al1.media/3;
	
	printf ("%s %f % d", al1.nome, al1.media, al1.numero);
	
	
}
