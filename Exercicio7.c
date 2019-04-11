/*7) Dado um conjunto com n elementos, chama-se arranjo simples de taxa k, a todo agrupamento de k
elementos distintos dispostos numa certa ordem. A fórmula para calcular o número total de arranjos de
um conjunto de n elementos tomados k a k é dada por:

a) Faça um programa que contenha uma função em C que receba como parâmetro um número
inteiro não negativo e retorne, como resultado da função, o valor do seu fatorial.
b) Usando a função fatorial do item (a), escreva um programa que capture via teclado dois números
inteiros, representando n e k, e imprima o valor do número total de arranjos, An,k. Pode-se
assumir que o usuário sempre fornecerá valores válidos.*/

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


	
