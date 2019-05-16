/*a) Fa�a um programa que pe�a do usu�rio 2 pontos de um ret�ngulo e 3 pontos livres: `p1`, `p2` e  `p3`.  

- O ret�ngulo � definido por seus pontos de v�rtices:  superior esquerdo v1, inferior direito v2.

b) Fa�a uma fun��o que deve imprimir quais pontos livres est�o localizados dentro do ret�ngulo ou n�o. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct retangulo{
	int v1[2], v2[2], ponto[3];
}retangulo;

bool checaPonto();

retangulo rt;

int main (){
	
	int i;
	
	for (i = 0; i < 2; i++){
		printf ("De o primeiro vertice \n");
		scanf ("%d", &rt.v1[i]);
		
		printf ("De o segundo vertice \n");
		scanf ("%d", &rt.v2[i]);
	}	
	
	for (i = 0; i < 3; i++){
		printf ("De o primeiro ponto livre \n");
		scanf ("%d", &rt.ponto[i]);
	}
	
	checaPonto();
	
	return 0;

}

bool checaPonto (){
	int i;
	
	for (i = 0; i < 3; i++){ 
		if (rt.ponto[i] >= rt.v1[0] || rt.ponto[i] <= rt.v2[0]){
			if (rt.ponto [i] >= rt.v1[1] ||rt.ponto[i] <= rt.v2[1]){
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
}
