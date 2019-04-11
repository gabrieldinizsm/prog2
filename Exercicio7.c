/*7) Dado um conjunto com n elementos, chama-se arranjo simples de taxa k, a todo agrupamento de k
elementos distintos dispostos numa certa ordem. A f�rmula para calcular o n�mero total de arranjos de
um conjunto de n elementos tomados k a k � dada por:

a) Fa�a um programa que contenha uma fun��o em C que receba como par�metro um n�mero
inteiro n�o negativo e retorne, como resultado da fun��o, o valor do seu fatorial.
b) Usando a fun��o fatorial do item (a), escreva um programa que capture via teclado dois n�meros
inteiros, representando n e k, e imprima o valor do n�mero total de arranjos, An,k. Pode-se
assumir que o usu�rio sempre fornecer� valores v�lidos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculaArranjo (int k, int n);

int fatorial (int x = 1);

int main (){
	
	calculaArranjo(5, 2);
	
	//printf("%d", fatorial(7));
	
	system("pause>null");
	
	return 0;

}

int fatorial (int x) {

	int i = x;
	while (i> 1){
		x *= (i-1);
		i--;
	}
	return x;
}

void calculaArranjo (int n, int k){
	float valor = (float)(fatorial (n)/fatorial (n-k));
	printf("%f \n", valor);
}


	
