/* 2 - Escreva uma fun��o chamada de potencia que calcula a pot�ncia entre dois n�meros inteiros n�o
negativos (base e expoente) passados como par�metros e retorna este valor. */

/*Fa�a um programa completo que utilize a fun��o potencia. O programa deve ler a base e o expoente
e imprimir o resultado. */

#include <stdio.h>
#include <stdlib.h>

void potencia (int base, int expoente);

int main (){
	
	int base, expoente;
	
	printf ("\tDe a base \n");
	scanf ("%d", &base);
	
	printf ("\tDe o expoente \n");
	scanf ("%d", &expoente);
	
	potencia (base, expoente);
	
	system ("pause>null");
	
	return 0;

}

void potencia (int base, int expoente){
	              
	int potencia = 1;
	
	for (int i = 0; i < expoente; i++)
		potencia *= base;	
			
	printf ("\tPotencia \n %d", potencia);
}
