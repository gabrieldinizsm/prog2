/*4- Escreva uma fun��o que calcule a soma dos n�meros pares e a soma dos n�meros impares de 0 at� um
n�mero inteiro n passado como par�metro. A fun��o deve exibir a soma dos pares e a soma dos
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



