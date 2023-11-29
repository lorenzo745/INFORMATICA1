#include<stdio.h>

short statoCancello = 8;
// variabile di stato per il cancello
// 0 (aperto), 1, 2, 3, 4, 5, 6, 7, 8(chiuso)
int speed = 300;
// tempo in millisecondi per ogni aggiornamento schermo
// simula la velocità del cancello 
// tempi minori = velocità maggiore del cancello

// disegna il cancello in base allo stato
void disegnaCancello();

// apre il cancello
// input int time 
// tempo in millisecondi per ogni aggiornamento schermo
void apriCancello();

// apre il cancello fino ad un certo punto
// input int time 
// tempo in millisecondi per ogni aggiornamento schermo
// input int setup
// 0 (aperto), 1, 2, 3, 4, 5, 6, 7, 8(chiuso)
void apriCancelloFine(int setup);

// chiude il cancello
// input int time 
// tempo in millisecondi per ogni aggiornamento schermo
void chiudeCancello();

// test del cancello
// apre e chiude il cancello tre volte
void test();

int main(){
	int risposta;                 // variabile per gestione menu
	int rispostaSottoMenu;        // variabile per gestione sotto menu
	
	do{
		system("CLS");
		printf("Menu Gestione Cancello\n");
		printf("+-----------------------------------------------+\n");
		printf("|Digita:                                        |\n");
		printf("| 1) apri cancello                              |\n");
		printf("| 2) apri cancello da 0(aperto) a 8(chiuso)     |\n");
		printf("| 3) chiudi cancello                            |\n");
	    printf("| 4) test del cancello                          |\n");
	    printf("| 5) imposta velocita' apertura/chiusura        |\n");
		printf("| 0) per terminare                              |\n");
		printf("+-----------------------------------------------+\n");
		scanf("%d", &risposta);
		switch(risposta){
			case 1: 
				apriCancello();
				break;
			case 2: 
				printf("Quanto vuoi aprire il cancello (0-7)");
				scanf("%d", &rispostaSottoMenu);
				apriCancelloFine( rispostaSottoMenu);
				break;
			case 3: 
				chiudeCancello();
				break;
			case 4: 
				test();
				break;
			case 5: 
				printf("Imposta la velocita' del cancello in ms\n");
				scanf("%d", &rispostaSottoMenu);
				speed = rispostaSottoMenu;
				break;
		}	
	}while(risposta != 0);	

	return 0;
}

void disegnaCancello(){
	switch(statoCancello){
		case 0: 
			printf("            __          __\n");
			printf(" ___________||_         ||\n");
			printf("|XXXXXXXXXXX||X|        ||\n");
			printf("|XXXXXXXXXXX||X|        ||\n");
			printf("|XXXXXXXXXXX||X|        ||\n");
			break;
		case 1: 
			printf("            __          __\n");
			printf("  __________||__        ||\n");
			printf(" |XXXXXXXXXX||XX|       ||\n");
			printf(" |XXXXXXXXXX||XX|       ||\n");
			printf(" |XXXXXXXXXX||XX|       ||\n");			
			break;
		case 2: 
			printf("            __          __\n");
			printf("   _________||___       ||\n");
			printf("  |XXXXXXXXX||XXX|      ||\n");
			printf("  |XXXXXXXXX||XXX|      ||\n");
			printf("  |XXXXXXXXX||XXX|      ||\n");			
			break;
		case 3: 
			printf("            __          __\n");
			printf("    ________||____      ||\n");
			printf("   |XXXXXXXX||XXXX|     ||\n");
			printf("   |XXXXXXXX||XXXX|     ||\n");
			printf("   |XXXXXXXX||XXXX|     ||\n");
			break;
		case 4: 
			printf("            __          __\n");
			printf("     _______||_____     ||\n");
			printf("    |XXXXXXX||XXXXX|    ||\n");
			printf("    |XXXXXXX||XXXXX|    ||\n");
			printf("    |XXXXXXX||XXXXX|    ||\n");
			break;
		case 5: 
			printf("            __          __\n");
			printf("      ______||______    ||\n");
			printf("     |XXXXXX||XXXXXX|   ||\n");
			printf("     |XXXXXX||XXXXXX|   ||\n");
			printf("     |XXXXXX||XXXXXX|   ||\n");
			break;
		case 6: 
			printf("            __          __\n");
			printf("       _____||_______   ||\n");
			printf("      |XXXXX||XXXXXXX|  ||\n");
			printf("      |XXXXX||XXXXXXX|  ||\n");
			printf("      |XXXXX||XXXXXXX|  ||\n");
			break;
		case 7: 
			printf("            __          __\n");
			printf("        ____||________  ||\n");
			printf("       |XXXX||XXXXXXXX| ||\n");
			printf("       |XXXX||XXXXXXXX| ||\n");
			printf("       |XXXX||XXXXXXXX| ||\n");
			break;
		case 8: 
			printf("            __          __\n");
			printf("          __||__________||\n");
			printf("         |XX||XXXXXXXXXX||\n");
			printf("         |XX||XXXXXXXXXX||\n");
			printf("         |XX||XXXXXXXXXX||\n");
			break;
	}
	printf("----------------------------------\n");
    printf("//////////////////////////////////\n");
}

void apriCancello(){
	int i, start=statoCancello;
	
	for(i=start; i>-1; i--){
		system("CLS");
		statoCancello = i; disegnaCancello();
		Sleep(speed);
	}
	system("PAUSE");	
}

void apriCancelloFine(int setup){
	int i, start=statoCancello;
	
	if(statoCancello<setup) {
		system("CLS");
		disegnaCancello();
	}else{
		for(i=start; i>setup; i--){
			system("CLS");
			statoCancello = i; disegnaCancello();
			Sleep(speed);
		}
	}
	system("PAUSE");	
}

void chiudeCancello(){
	int i, start=statoCancello;
	for(i=start; i<9; i++){
		system("CLS");
		statoCancello = i; disegnaCancello();
		Sleep(speed);
	}
	system("PAUSE");	
}

void test(){
	int i,j;
	
	chiudeCancello();
	for(j=0; j<3; j++){
		for(i=8; i>-1; i--){
			system("CLS");
			statoCancello = i; disegnaCancello();
			Sleep(speed);
		}
		for(i=0; i<9; i++){
			system("CLS");
			statoCancello = i; disegnaCancello();
			Sleep(speed);
		}	
	}
}
