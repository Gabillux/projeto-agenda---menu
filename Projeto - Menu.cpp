// PROJETO AGENDA EM C
// ESTUDANTES: HENRIQUE S., YAGO,YURI, GABRIEL FLÔR, EMANOEl.

// BIBLIOTECAS UTILIZADAS
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int idade;
    
} Contato;

// FUNÇÃO PRINCIPAL
int main(void)
{
	int opcao;
	
	printf("|-------------------------------------------------------|\n");
	printf("|                    AGENDA DE CONTATO                  |\n");
	printf("|-------------------------------------------------------|\n");
	printf("| 1 |                    ADICIONAR                      |\n");
	printf("| 2 |                     EXCLUIR                       |\n");
	printf("| 3 |                    PESQUISAR                      |\n");
	printf("| 4 |                     LISTAR                        |\n");
	printf("| 5 |                      SAIR                         |\n");
	printf("|-------------------------------------------------------|\n");	
	printf("|                DIGITE O NUMERO DESEJADO               |\n");
	printf("|-------------------------------------------------------|\n");
	
	scanf("%i", &opcao,);                                               
	
	switch(opcao){
		case 1:
			break;
			
		case 2:
			break;
			
		case 3:
			break;
			
		case 4:
			break;
			
		case 5:
			break;
			
		default:
			printf("Valor inválido");
			break;
	}
	
	
    return 0;
}
 