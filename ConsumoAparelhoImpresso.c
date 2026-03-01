#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

<<<<<<< HEAD
int main(){  //�nicio main
=======
int main(){  //inicio main
>>>>>>> Consumo_aparelho_release

system("color 02");
	
	const float kwt = 0.82; //valor do kwt em 2024
	char nome[25], escolha[3];
	int p, d, escolhaint;
	int co = 1000;
	float h, pagar, pagart=0;
	FILE *cfPtr;
	

    printf("#################################\n");
    printf("#                               #\n");
    printf("#        COELBA                 #\n");
    printf("#                               #\n");
    printf("#################################\n");
    printf("  Versao 1.1 - C Language\n");

   	
	
<<<<<<< HEAD
	
	printf("Come�ar programa? Sim ou N�o\n ", setlocale(LC_ALL,"Portuguese"));
=======
	printf("Começar programa? Sim ou Não\n ", setlocale(LC_ALL,"Portuguese"));
>>>>>>> Consumo_aparelho_release
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
	
<<<<<<< HEAD
	   printf("Escreva a pot�ncia do aparelho:\n", setlocale(LC_ALL,"Portuguese"));
	   scanf("%d", &p);
	
      printf("Escreva o n�mero de horas que o aparelho fica ligado:\n", setlocale(LC_ALL,"Portuguese"));
	  scanf("%f", &h);
	
	  printf("Escreva o n�mero de dias no m�s que o aparelho fica ligado:\n", setlocale(LC_ALL,"Portuguese"));
=======
	   printf("Escreva a potência do aparelho:\n", setlocale(LC_ALL,"Portuguese"));
	   scanf("%d", &p);
	
      printf("Escreva o número de horas que o aparelho fica ligado:\n", setlocale(LC_ALL,"Portuguese"));
	  scanf("%f", &h);
	
	  printf("Escreva o número de dias no mês que o aparelho fica ligado:\n", setlocale(LC_ALL,"Portuguese"));
>>>>>>> Consumo_aparelho_release
	  scanf("%d", &d);
	
	  pagar = ((p*h*d)/co)*kwt; 
      printf("*************************************************************************************************************\n");	
<<<<<<< HEAD
	  printf("Dentro de um mês você vai pagar %2f Reais na utiliza��o do %s\n\a", pagar, nome, setlocale(LC_ALL,"Portuguese") ); 
	  printf("********************************************************************************************************\n");
      fprintf(cfPtr,"******************************************************************************************************\n");	
	  fprintf(cfPtr,"Dentro de um mês você vai pagar %2f Reais na utiliza��o do %s\n\a", pagar, nome, setlocale(LC_ALL,"Portuguese") ); 
	  fprintf(cfPtr,"********************************************************************************************************\n");
	printf("Continuar com o programa? digite 1 para Sim ou 2 para N�o\n ", setlocale(LC_ALL,"Portuguese"));
=======
	  printf("Dentro de um mês você vai pagar %2f Reais na utilização do %s\n\a", pagar, nome, setlocale(LC_ALL,"Portuguese") ); 
	  printf("********************************************************************************************************\n");
      fprintf(cfPtr,"******************************************************************************************************\n");	
	  fprintf(cfPtr,"Dentro de um mês você vai pagar %2f Reais na utilização do %s\n\a", pagar, nome, setlocale(LC_ALL,"Portuguese") ); 
	  fprintf(cfPtr,"********************************************************************************************************\n");
	printf("Continuar com o programa? digite 1 para Sim ou 2 para Não\n ", setlocale(LC_ALL,"Portuguese"));
>>>>>>> Consumo_aparelho_release
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

<<<<<<< HEAD
//Versão 

=======
//VersÃo  1.1
>>>>>>> Consumo_aparelho_release

