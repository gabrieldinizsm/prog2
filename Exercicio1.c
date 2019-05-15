/*1. Faça um programa que armazene em uma estrutura os dados de um funcionário de uma empresa, compostos de:
Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Código do Setor onde trabalha (0 até 99), Cargo que ocupa 
(até 30 caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela. */

#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario {
	char nome[50];
	char dataNascimento [50];
	char sexo [2];
	char cpf [20];
	int codigoSetor;
	char cargo [30];
	float salario;
}funcionario;

int main (){
	int i;
	funcionario f1;
	
	printf ("Entre com o nome do funcionario \n");
	fflush(stdin);
	gets (f1.nome);
	
	printf ("Entre com a data de nascimento (apenas numeros) \n");
	fflush(stdin);
	gets (f1.dataNascimento);
	
	printf ("Entre com o sexo do Funcionario (F ou M) \n");
	fflush(stdin);
	gets (f1.sexo);
	
	printf ("Entre com o nome o cpf (apenas numeros) \n");
	fflush(stdin);
	gets (f1.cpf);
	
	printf ("Entre com o codigo do setor (0 a 99) \n");
	scanf ("%d", &f1.codigoSetor);
	
	printf ("Entre com o cargo do funcionario \n");
	fflush(stdin);
	gets (f1.cargo);
	
	printf ("Entre com o salario do funcionario \n");
	scanf ("%f", &f1.salario);
	
	printf ("%s - %s - %s - %s - %d - %s - %f", f1.nome, f1.dataNascimento, f1.sexo, f1.cpf, f1.codigoSetor, f1.cargo, f1.salario);
	
	return 0;
	
}
