#include <stdio.h>

#define texto "Entrada e saida de dados"

	//VARIAVEIS 
	
	//Espa�o em memoria para armazenar dados
	
	//	->SINTAXE declara��o: <tipo> <nome>;
	//	
	//	-> NOMENCLATURA:
	//		|-> N�o pode n�mero na 1 posi��o
	//		|-> n�o pode caracteres especiais
	//		|-> n�o pode espa�o
	//
	
//	* Operadores matem�ticos:
//		|-> Soma: +
//		|-> Subtra��o: -
//		|-> Multiplica��o: *
//		|-> Divis�o: /
//		|-> Resto de divis�o inteira: %
//	* Existe preced�ncia entre os operadores!
	
int main(){
	
//	printf("%s\n",texto);
//	
//	int idade = 0;
//	float altura = 0.0;
//	char nome[50] = "";
//	
//	printf("Digite a idade:\n");
//	scanf("%d", &idade);
//	
//	printf("Digite a altura:\n");
//	scanf("%f", &altura);
//	
//	printf("Digite o nome:\n");
//	scanf("%s", &nome);
//	
//	printf("Dados Informados:\n");
//	printf("Idade: %d.\n", idade);
//	printf("Altura: %.2f.\n", altura);
//	printf("Nome: %s.\n", nome);
	
	int A, B, soma, subtr, mult, divis;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &A);
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;
	
	printf("Resultado:\n");
	printf("Soma: %d.\n", soma);
	printf("Subtra: %d.\n", subtr);
	printf("Multiplic: %d.\n", mult);
	printf("Divisao: %d.\n", divis);
}
