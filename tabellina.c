/*
Programma per imparare le tabelline e per esercitarsi
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int tabelline_studio();
int tabelline_esame();

int main() {
       
	int activity;

	system("clear");
	printf("Programma per apprendere la tabelline e per esercitarsi.\n Inserisci 1 se vuoi imparare le tabelline, 2 se vuoi esercitarti o 0 o un numero negativo se vuoi uscire:");
	scanf("%d",&activity);
	
	while(activity>0){
		switch (activity) {
			case 1:
				tabelline_studio();
			break;
			case 2:
				tabelline_esame();
			break;
			default:
		 		printf("Hai effettuato una selezione errata. \n");
		  	break;
				}
			printf("Inserisci 1 se vuoi imparare le tabelline, 2 se vuoi esercitarti o 0 o un numero negativo se vuoi uscire:");
			scanf("%d",&activity);
	}
	
	
	return 0;

} 

int tabelline_studio() {
       
	int i=0, tabellina;
	
	system("clear");
	printf(" \nInserisci la tabellina che vuoi imparare da 1 a 100. Inserisci 0 o un numero negativo per uscire per uscire \n");
	scanf("%d",&tabellina);

	while (tabellina>0 ){	
		system("clear");
		if (tabellina>100)
			printf("Hai inserito un numero troppo grande\n");
		else {
			for(i=0;i<11;i++){
				printf("%d*%d=%d \n",tabellina,i,tabellina*i);	
			} 
			printf("\n"); }

		printf("\ninserisci una nuovo numero compreso tra 1 e 100 per vedere la relativa tabellina o 0 o un numero negativo per uscire \n");
		scanf("%d",&tabellina);
	}	
	return 0;

} 

int tabelline_esame() {
       
	int risultato=0,i=0,contatore=0;
	int num1, num2;

	printf(" \nEsame per verificare l'apprendimento delle tabelline.\nSi tiene conto solo delle tabelline da 1 a 10. \n");
	printf(" \nL'esame consiste in 10 domande, per superare il test si deve rispondere correttamente ad almeno 6 di queste. \n");

	for(i=0;i<10;i++){
		srand(time(NULL));
		num1 = rand() % 10 + 1;
		num2 = rand() % 10 + 1;
		printf(" \nDomanda %d \n",i+1);
		printf(" \n%d*%d=",num1,num2);
		scanf("%d",&risultato);
		system("clear");
		if(risultato==num1*num2){
			contatore=contatore+1;
			printf("Hai inserito il risultato corretto\n");
			printf("Numero di risposte date correttamente: %d\n",contatore);
			printf("Numero di risposte date: %d\n",i+1);
		}
		else {
			printf("Hai inserito il risultato errato\n");
			printf("Numero di risposte date correttamente: %d\n",contatore);
			printf("Numero di risposte date: %d\n",i+1);
		}
		
	}	
	system("clear");
	printf("Esito dell'esame\n");
	printf("Numero di risposte date correttamente: %d\n",contatore);
	printf("Numero di risposte date: %d\n",i);
	if (contatore>5)
		printf("Esame superato\n");
	else
		printf("Esame non superato\n");
	
	return 0;

} 


