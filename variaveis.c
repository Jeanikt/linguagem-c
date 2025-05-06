#include <stdio.h>

#define texto "Entrada e saida de dados"

	//VARIAVEIS 
	
	//Espaço em memoria para armazenar dados
	
	//	->SINTAXE declaração: <tipo> <nome>;
	//	
	//	-> NOMENCLATURA:
	//		|-> Não pode número na 1 posição
	//		|-> não pode caracteres especiais
	//		|-> não pode espaço
	//
	
//	* Operadores matemáticos:
//		|-> Soma: +
//		|-> Subtração: -
//		|-> Multiplicação: *
//		|-> Divisão: /
//		|-> Resto de divisão inteira: %
//	* Existe precedência entre os operadores!
	
//	* Operadores de atribuição aritmetica
//	|-> Incremento em 1 unidade ++
//	|-> Decremento em 1 unidade --
//	|-> Incremento genérico: +=
//	|-> Decremento genérico: -=
//	|-> Atribuição com multiplicação: *=
//	|-> Atribuição com divisão: /=
	

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
	
//	int A, B, soma, subtr, mult, divis;
//	
//	printf("Digite o primeiro valor:\n");
//	scanf("%d", &A);
//	printf("Digite o segundo valor:\n");
//	scanf("%d", &B);
//	
//	soma = A + B;
//	subtr = A - B;
//	mult = A * B;
//	divis = A / B;
//	
//	printf("Resultado:\n");
//	printf("Soma: %d.\n", soma);
//	printf("Subtra: %d.\n", subtr);
//	printf("Multiplic: %d.\n", mult);
//	printf("Divisao: %d.\n", divis);

	int dado = 10;
	printf("Dado antes do incremento: %d.\n", dado);
	
	dado++;
	printf("Depois do incremento: %d.\n", dado);
	
	dado--;
	printf("Depois do decremento: %d.\n", dado);	
	
	dado += 3;
	printf("Depois do incremento em 3 unidades: %d.\n",dado);
	
	dado -= 2;
	printf("Depois do decremento em 2 unidades: %d.\n", dado);
	
	dado *= 10;
	printf("Depois de multiplicar por 10: %d.\n", dado);
}
