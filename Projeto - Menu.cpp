// PROJETO AGENDA EM C
// ESTUDANTES: HENRIQUE S., YAGO,YURI, GABRIEL FLÔR, EMANOEl.

// BIBLIOTECAS UTILIZADAS
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

typedef struct
{
    char nome[50];
    int idade;
    
} Contato;

// FUNÇÃO procurar contato
int procurar_contato(char nome[], Contato contatos[], int total){
			for(int i = 0; i < total; i++){
				if (strcmp(contatos[i].nome, nome) == 0){
					return i;
				}
			}
			
			return -1;
		}

// FUNÇÃO PRINCIPAL
int main(void){
	Contato contatos[15];
	char nome[50];
	int opcao;
	
	do {
	
		printf(" _______________________________________________________\n");
		printf("|                                                       |\n");
		printf("|                    AGENDA DE CONTATO                  |\n");
		printf("|_______________________________________________________|\n");
		printf("|                                                       |\n");	
		printf("| 1 |                    ADICIONAR                      |\n");
		printf("| 2 |                     EXCLUIR                       |\n");
		printf("| 3 |                    PESQUISAR                      |\n");
		printf("| 4 |                     LISTAR                        |\n");
		printf("| 5 |                      SAIR                         |\n");
		printf("|_______________________________________________________|\n");
		printf("|                                                       |\n");	
		printf("|                DIGITE O NUMERO DESEJADO               |\n");
		printf("|_______________________________________________________|\n");
		
		scanf("%i", &opcao);                                               
		
		switch(opcao){
			
			case 1:
				system("cls");
				//adicionar função
				break;
				
			case 2:
				system("cls");
				//adicionar função
				break;
				
			case 3:
				system("cls");
				
				printf("Qual contanto voce procura? \n");
				fgets(nome, 50, stdin);
				
				int posicao = procurar_contato(nome, contatos, 15);
				
				if (posicao == -1){
					printf("Contato nao encontrado\n");
				} else {
					printf("Nome: %c\n", contatos[posicao].nome);
					printf("Idade: %i\n", contatos[posicao].idade);
				}
				break;
				
			case 4:
				system("cls");
				//adicionar função
				break;
				
			case 5:
				system("cls");
				printf("Saindo...");
				return 0;
				break;
				
			default:
				printf("Valor invalido");
				
		}
		

	} while (opcao !=5);

}
 