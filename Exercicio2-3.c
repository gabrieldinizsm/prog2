/* 2 - Escreva uma função chamada de potencia que calcula a potência entre dois números inteiros não
negativos (base e expoente) passados como parâmetros e retorna este valor. */

/*Faça um programa completo que utilize a função potencia. O programa deve ler a base e o expoente
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
