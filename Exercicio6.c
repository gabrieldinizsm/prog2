/*6) Considerando a f�rmula para o c�lculo da dist�ncia entre dois pontos (x1; y1) e (x2; y2), escreva um
programa que contenha uma fun��o que receba como par�metros as coordenadas de dois pontos e
retorne a dist�ncia entre eles: */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculaDistancia (double a, double b, double x, double y);

int main (){
	
	calculaDistancia(2, 1, 2, 2);
	
	system("pause>null");
	
	return 0;

}

void calculaDistancia (double a, double b, double x, double y){
	
	double distancia = 0;
	
	a -= b;
	x -= y;
	
	pow (a, 2);
	pow (x, 2);
	
	distancia = (a-x)/2;
	
	printf ("\t Distancia %f\n", distancia);
}
