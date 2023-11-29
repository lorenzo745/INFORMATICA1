#include<stdio.h>
// dimensione matrice 3x3
#define T 3

// funzione per stampare la scacchiera
// input: matrice, #righe, #colonne
void stampaGriglia(char [T][T], int, int);
// funzione per inserire la mossa di gioco sulla scacchiera
// input: matrice di char
//        int da 1 a 9 per definire dove inserire la mossa
//        char = 'X' o 'O' per definire il simbolo inserito
// output: stato inserimento 0 false 1 true
int inserisciMossa(char [T][T], int, char);
// funzione che calcola se c'è un vincitore sulla scacchiera
// input: matrice di char
// output: char -> 'X' ha vinto il giocatore che usa quel simbolo
//                 'O' ha vinto il giocatore che usa quel simbolo
//                 '.' non ha vinto nessuno
char calcolaVincitore(char [T][T]);


int main(){
	// scacchiera del tris inizializzata per inserire le mosse
	char tris[T][T] = { {'1','2','3'},
	                    {'4','5','6'},
						{'7','8','9'}  };
	// variabile di lavoro per stabilire l'esito di una partita
	char esito = '.';
	// variabile di lavoro per stabilire il turno: 1 giocatore1
	//                                             2 giocatore2
	short turno = 1;
	// variabile di lavoro per acquisire la giocata
	int giocata;
	// varibile di lavoro per contare il numero di giocate in una partita
	int numero_giocate = 0;
	// variabile di lavoro per notificare a schermo se la giocata è
	// valida o da reinserire
	int check_giocata = 0;
	
	for(numero_giocate=0;(numero_giocate<9)&&(esito=='.');numero_giocate++){
		// stampare la matrice
		stampaGriglia(tris, T, T);
	
		// inserire mossa
		if(turno==1){
			printf("\n Turno: Giocatore 1 (X)\n Inserisci la mossa: ");
			scanf("%d", &giocata);
			check_giocata=inserisciMossa(tris, giocata, 'X');
			while(check_giocata==0){
				printf("\n MOSSA NON VALIDA !!!");
				printf("\n Turno: Giocatore 1 (X)\n Inserisci la mossa: ");
				scanf("%d", &giocata);
				check_giocata=inserisciMossa(tris, giocata, 'X');
			}
			turno=2;
		}else{
			printf("\n Turno: Giocatore 2 (O)\n Inserisci la mossa: ");
			scanf("%d", &giocata);
			check_giocata = inserisciMossa(tris, giocata, 'O');
			while(check_giocata==0){
				printf("\n MOSSA NON VALIDA !!!");
				printf("\n Turno: Giocatore 2 (O)\n Inserisci la mossa: ");
				scanf("%d", &giocata);
				check_giocata=inserisciMossa(tris, giocata, 'O');
			}
			turno=1;			
		}
		// controllo vincitore su scacchiera
		esito = calcolaVincitore(tris);
		printf("> esito: %c\n> #giocate: %d", esito, numero_giocate);
	};
	
	// stampare la matrice
	stampaGriglia(tris, T, T);	
	// stampa vincitore;
	if( esito == 'O') printf("\n Ha vinto il Giocatore 2 (O) !!!");
	else if ( esito == 'X') printf("\n Ha vinto il Giocatore 1 (X) !!!");
		 else printf("\n PATTA !!!");	
	
	return 0;
}

void stampaGriglia(char matrice[T][T], int n_righe, int m_colonne){
	int i, j;
	system("cls");
	printf("   - TRIS in C - \n");
	printf(" - Giocatore 1 (X) -\n - Giocatore 2 (O) - \n\n");
	
	for(i=0; i<n_righe; i++){/* righe */
   		for(j=0; j<m_colonne; j++) /* colonne */
      		if(j!=0) printf("| %c ",matrice[i][j]);
      		else printf("  %c ",matrice[i][j]);
      	if(i!=n_righe-1) printf("\n ---+---+--- \n");
      	else printf("\n");
    }
}

int inserisciMossa(char matrice[T][T], int mossa, char simbolo){
	int inserimento = 1;
	switch (mossa){
		case 1:	if(matrice[0][0]!='1') inserimento=0; else matrice[0][0]=simbolo; break;
		case 2: if(matrice[0][1]!='2') inserimento=0; else matrice[0][1]=simbolo; break;
		case 3: if(matrice[0][2]!='3') inserimento=0; else matrice[0][2]=simbolo; break;
		case 4: if(matrice[1][0]!='4') inserimento=0; else matrice[1][0]=simbolo; break;
		case 5: if(matrice[1][1]!='5') inserimento=0; else matrice[1][1]=simbolo; break;
		case 6: if(matrice[1][2]!='6') inserimento=0; else matrice[1][2]=simbolo; break;
		case 7: if(matrice[2][0]!='7') inserimento=0; else matrice[2][0]=simbolo; break;
		case 8: if(matrice[2][1]!='8') inserimento=0; else matrice[2][1]=simbolo; break;
		case 9: if(matrice[2][2]!='9') inserimento=0; else matrice[2][2]=simbolo; break;
		default: inserimento=0;
	}
	return inserimento;
}

char calcolaVincitore(char a[T][T]){
	char trovato = '.' ;
	// controllo le righe
	if((a[0][0]=='O')&&(a[0][1]=='O')&&(a[0][2]=='O'))trovato='O';
	else if((a[1][0]=='O')&&(a[1][1]=='O')&&(a[1][2]=='O'))trovato='O';
	else if((a[2][0]=='O')&&(a[2][1]=='O')&&(a[2][2]=='O'))trovato='O';
	else if((a[0][0]=='X')&&(a[0][1]=='X')&&(a[0][2]=='X'))trovato='X';
	else if((a[1][0]=='X')&&(a[1][1]=='X')&&(a[1][2]=='X'))trovato='X';
	else if((a[2][0]=='X')&&(a[2][1]=='X')&&(a[2][2]=='X'))trovato='X';   	
	// controllo le colonne
	else if((a[0][0]=='O')&&(a[1][0]=='O')&&(a[2][0]=='O'))trovato='O';
	else if((a[0][1]=='O')&&(a[1][1]=='O')&&(a[2][1]=='O'))trovato='O';
	else if((a[0][2]=='O')&&(a[1][2]=='O')&&(a[2][2]=='O'))trovato='O';
	else if((a[0][0]=='X')&&(a[1][0]=='X')&&(a[2][0]=='X'))trovato='X';
	else if((a[0][1]=='X')&&(a[1][1]=='X')&&(a[2][1]=='X'))trovato='X';
	else if((a[0][2]=='X')&&(a[1][2]=='X')&&(a[2][2]=='X'))trovato='X'; 
	// controllo la diagonle principale
	else if((a[0][0]=='O')&&(a[1][1]=='O')&&(a[2][2]=='O'))trovato = 'O';
	else if((a[0][0]=='X')&&(a[1][1]=='X')&&(a[2][2]=='X'))trovato = 'X';
	// controllo la diagonale secondaria
	else if((a[0][2]=='O')&&(a[1][1]=='O')&&(a[2][0]=='O'))trovato = 'O';
	else if((a[0][2]=='X')&&(a[1][1]=='X')&&(a[2][0]=='X'))trovato = 'X';
	
	return trovato;	
}
