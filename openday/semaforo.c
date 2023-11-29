#include<stdio.h>

short statoSemaforo = 0;
short statoPedonale = 0;
// funzione che in base al valore della variabile globale statoSemaforo
// gestisce la sequenza di luci del semaforo
void gestisciSemaforo();

// in input: per ogni colore se 0 la luce è spenta
//                           se 1 la luce è accesa
void accendiSemaforo(short rosso, short giallo, short verde, short rossoPedonale, short verdePedonale);

// funzione che accende e spegne 3 volte tutte le luci
void test();

int main(){
	int risposta;                 // variabile per gestione menu
	int risposta_numero_di_cicli; // variabile per ripetizione cicli semaforo
	int i;                        // variabile di lavoro per i cicli for
	
	do{
		system("cls");
		printf("Menu Gestione Semaforo Italiano\n");
		printf("+-----------------------------------------------+\n");
		printf("|Digita:                                        |\n");
		printf("| 1) per eseguire test sul semaforo             |\n");
		printf("| 2) per avviare il semaforo per un numero      |\n");
		printf("|    specifico di cicli                         |\n");
		printf("| 3) per avviare semaforo a tempo indeterminato |\n");
		if (statoPedonale == 0)
		printf("| 4) per attivare la chiamata pedonale          |\n");
		else
		printf("| 4) per disattivare la chiamata pedonale       |\n");		
		printf("| 0) per terminare                              |\n");
		printf("+-----------------------------------------------+\n");
		scanf("%d", &risposta);
		switch(risposta){
			case 1: // avvio madalità di test delle luci
				test();
				break;
			case 2: // avvio del semaforo per un TOT di cicli
				printf("Quante volte vuoi ripetere il ciclo del semaforo? ");
				scanf("%d", &risposta_numero_di_cicli);
				for(i=0;i<risposta_numero_di_cicli;i++){
					statoSemaforo=1; gestisciSemaforo();
					if ( statoPedonale == 1 ){
						statoSemaforo=2; gestisciSemaforo();
						statoSemaforo=3; gestisciSemaforo();
					}
					statoSemaforo=4; gestisciSemaforo(); 
					statoSemaforo=5; gestisciSemaforo(); 
				}
				break;
			case 3: // avvio del semaforo per cicli illimitati
				for(;;){
					statoSemaforo=1; gestisciSemaforo();
					if ( statoPedonale == 1 ){
						statoSemaforo=2; gestisciSemaforo();
						statoSemaforo=3; gestisciSemaforo();
					}
					statoSemaforo=4; gestisciSemaforo(); 
					statoSemaforo=5; gestisciSemaforo();
				}
				break;
			case 4: // gestione stato pedonale
				if (statoPedonale == 1) 
					{ statoPedonale = 0; printf("\n Chiamata pedonale disattivata \n"); }
				else
					{ statoPedonale = 1; printf("\n Chiamata pedonale attivata \n"); }
				system("pause");
		}	
	}while(risposta != 0);
		
	return 0;
}

void gestisciSemaforo(){
  switch (statoSemaforo) {
    case 1: accendiSemaforo(1,0,0,1,0);	sleep(1); break;
    case 2: accendiSemaforo(1,0,0,0,1);	sleep(1); break;
    case 3: accendiSemaforo(1,0,0,0,1);	sleep(1); break;
    case 4: accendiSemaforo(0,0,1,1,0);	sleep(1); break;
    case 5: accendiSemaforo(0,1,0,1,0);	sleep(1); break;
    default: test();
  }
}

void accendiSemaforo(short rosso, short giallo, short verde, short rossoPedonale, short verdePedonale){
	system("cls");	
	printf("\n +-+-+");
	if(rosso == 1) 
		if(rossoPedonale == 1) printf("\n |R|R|"); else printf("\n |R| |"); 
	else
		if(rossoPedonale == 1) printf("\n | |R|"); else printf("\n | | |");	
	printf("\n +-+-+");
	if(giallo == 1) 
		if(verdePedonale == 1) printf("\n |G|V|"); else printf("\n |G| |");
	else 
		if(verdePedonale == 1) printf("\n | |V|"); else printf("\n | | |");	
	printf("\n +-+-+"); 
	if(verde == 1) printf("\n |V|"); else printf("\n | |");
	printf("\n +-+");
	//printf("\n\n%d %d %d %d %d" , rosso, giallo, verde, rossoPedonale, verdePedonale);
	//system("pause");
}

void test(){
	int i;
	system("cls");
	for(i=0;i<3;i++){
		accendiSemaforo(1,1,1,1,1);	sleep(1);
		accendiSemaforo(0,0,0,0,0); sleep(1);
	}
}