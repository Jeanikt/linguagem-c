#include <stdio.h>

int main(){
	#ENTRADA DE DADOS
	printf("Oi, tudo bem? Tenho 6 anos e programo.\n");
	
	printf("Valor inteiro: %d. \n", 10);
	printf("Valor real: %f. \n", 3.14159265);
	printf("Valor real com apenas duas casas: %.2f. \n", 3.14159265);
	printf("Dado de texto: %c. \n", 'a');
	printf("Dado de texto: %s. \n", "testando");
	#SAIDA DE DADOS
	
	int idade = 0;
	
	printf("Valor inicial da idade: %d. \n", idade);
	
	printf("Digite uma idade:\n");
	scanf("%d", &idade);
	
	printf("Idade informada: %d. \n", idade);
}
