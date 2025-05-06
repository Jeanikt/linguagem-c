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
	
int main(){
	printf("%s\n",texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	
	printf("Digite a altura:\n");
	scanf("%f", &altura);
	
	printf("Digite o nome:\n");
	scanf("%s", &nome);
	
	printf("Dados Informados:\n");
	printf("Idade: %d.\n", idade);
	printf("Altura: %f.\n", altura);
	printf("Nome: %s.\n", nome);
	
}
