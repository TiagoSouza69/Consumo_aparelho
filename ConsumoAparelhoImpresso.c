#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){  //inicio main

system("color 02");
	
	const float kwt = 0.82; //valor do kwt em 2025
	char nome[25], escolha[3];
	int p, d, escolhaint, i, apenasLetras = 1;
	int co = 1000;
	float h, pagar, pagart=0;
	FILE *cfPtr;
	

    printf("#################################\n");
    printf("#                               #\n");
    printf("#        COELBA                 #\n");
    printf("#                               #\n");
    printf("#################################\n");
    printf("  Versao 1.2 - C Language\n");

   	
	
	printf("Começar programa? Sim ou Não\n ", setlocale(LC_ALL,"Portuguese"));
	gets(escolha);
	
	if (strcmp(escolha,"sim")==0){
		if ((cfPtr = fopen("Consumo_Aparelho.txt", "w")) == NULL)
	   printf("Arquivo nao pode ser aberto\n");	
	 do{
	   if ((cfPtr = fopen("Consumo_Aparelho.txt", "a")) == NULL){
	   printf("Arquivo nao pode ser aberto\n");
	   } else{
	   printf("\nEscreva o nome do aparelho:\n", setlocale(LC_ALL,"Portuguese"));
	   scanf("%s", &nome);

	   for(i = 0; i < strlen(nome); i++) {
        if(!isalpha(nome[i])) {
            printf("Use apenas letras\n");
            exit(0);
        }
    }

	   printf("Escreva a potência do aparelho:\n", setlocale(LC_ALL,"Portuguese"));
	   scanf("%d", &p);
	
      printf("Escreva o número de horas que o aparelho fica ligado:\n", setlocale(LC_ALL,"Portuguese"));
	  scanf("%f", &h);
	
	  printf("Escreva o número de dias no mês que o aparelho fica ligado:\n", setlocale(LC_ALL,"Portuguese"));
	  scanf("%d", &d);
	
	  pagar = ((p*h*d)/co)*kwt; 
      printf("*************************************************************************************************************\n");	
	  printf("Dentro de um mês você vai pagar %2f Reais na utilização do %s\n\a", pagar, nome, setlocale(LC_ALL,"Portuguese") ); 
	  printf("********************************************************************************************************\n");
      fprintf(cfPtr,"******************************************************************************************************\n");	
	  fprintf(cfPtr,"Dentro de um mês você vai pagar %2f Reais na utilização do %s\n\a", pagar, nome, setlocale(LC_ALL,"Portuguese") ); 
	  fprintf(cfPtr,"********************************************************************************************************\n");
	printf("Continuar com o programa? digite 1 para Sim ou 2 para Não\n ", setlocale(LC_ALL,"Portuguese"));
	 scanf("%d", &escolhaint);
	 pagart = pagar + pagart;
	 printf("Conta até o momento %2f", pagart, setlocale(LC_ALL,"Portuguese"));
	  //getch();
	  }
}while (escolhaint == 1);
} else {
	printf ("Saindo do programa!");
}
	return 0;
} // fim do main




