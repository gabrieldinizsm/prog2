/*4- Escreva uma função que calcule a soma dos números pares e a soma dos números impares de 0 até um
número inteiro n passado como parâmetro. A função deve exibir a soma dos pares e a soma dos
impares.*/

#include <stdio.h>
#include <stdlib.h>

void calculaSoma(int x);

int main (){
	
	calculaSoma(1024);
	
	system("pause>null");
	
	return 0;
	
}

void calculaSoma(int x){
	
	int numerosPares = 0, numerosImpares = 0;
	
	for (int i = 0; i <= x; i++){
		if (i % 2){
			numerosImpares += i;
		}
		else {
			numerosPares += i;
		}
	}
	
	printf("\nPares: %d", numerosPares);
	printf("\nImpares: %d \n", numerosImpares);
}



