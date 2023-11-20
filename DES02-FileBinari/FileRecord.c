/** ****************************************************************************************
* \mainpage <nome del progetto>
*
* @brief Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
* 
* <specifiche del progetto>
* Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
* 
* @author lorenzo zanirato, 3H
* @date 04/12/2022
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 20
#define V 10
#define C 5
//dichiaro la struct data
struct data 
{
    int gg;
    int mm;
    int aa;
} typedef data;
//dichiaro la struct studente
struct studente 
{
    char cognome[N];
    char nome[N];
    data nascita;
    int voti[V];
} typedef studente;

//funzione per scrivere un file di N record con N costante posta a 10
void carica(char[]);
//funzione in C per leggere e stampare su monitor le informazioni del file di record 
//(si usi il controllo di fine file e non il ciclo for con N perché la funzione sia vali da quale che sia il numero di record del file 
//(quindi anche diverso da N))
void stampa(char[]);
//conta quante volte è presente uno studente che ha il cognome uguale alla stringa passata in output; 
//la funzione restituisce un intero
int cercacognome(char [], char []);
//per ogni studente visualizza il suo cognome, la media dei suoi voti, il suo voto più alto e il suo voto più basso. 
void stampa2(char []);
//la funzione cerca un cognome (stringa passata come parametro) nel file e restituisce la posizione della sua prima occorrenza. 
//(Es .se il cognome è trovato come 2° record si restituisce 2). Si restituisca  -1  se non esiste quel cognome nel file.
int trova(char [], char []);
//Funzione che restituisce quanti record ci sono nel file.
int contaRecord(char []);


int main()
{
	int r;
    srand(time(NULL));
    carica("studenti.dat");
    stampa("studenti.dat");
    r = cercacognome("studenti.dat", "zanirato");
    printf("\nil cognome zanirato e' stato inserito: %d\n",r);
    
	stampa2("studenti.dat");   
	
	r = trova("alunni.dat", "zanirato");
    printf("\nposizione zanirato: %d\n", r);

    r = contaRecord("alunni.dat");
    printf("\nrecord nel file: %d", r);
}

void carica(char file[])
{
	int i,j;
    studente s;
    FILE * fp = fopen(file, "ab");//lo apro in ab perchè è un file binario

    if(fp!=NULL){
        for(i=0;i<C;i++)
        {
            printf("inserisci cognome dello studente: ");
            scanf("%s",s.cognome);
            printf("inserisci nome dello studente: ");
            scanf("%s",s.nome);

            s.nascita.gg = rand()%30+1;
            s.nascita.mm = rand()%12+1;
            s.nascita.aa = rand()%30+1990;

            for(j=0;j<V;j++) 
			{
                s.voti[j] = rand()%10+1;
            }
            fwrite(&s, sizeof(studente),1,fp);//carico i record
        }
    }
    fclose(fp);
}


void stampa(char file[])
{
	int j;
    FILE * fp = fopen(file, "rb");//lo apro in rb perchè è un file binario
    studente s;
    if(fp!=NULL)//controllo se non ha avuto problemi nell'apertura del file
	{
        while(!feof(fp))//controllo con il fine file
        {
            fread(&s, sizeof(studente), 1, fp);//leggo i record nel file

            printf("\n\n--STUDENTE--\n\n");
            printf("cognome: %s\n", s.cognome);
            printf("nome: %s\n", s.nome);
            printf("giorno di nascita: %d/%d/%d\n", s.nascita.gg, s.nascita.mm, s.nascita.aa);
            printf("-voti-\n");
            for(j = 0; j<V; j++)
			{
                printf("%d\t", s.voti[j]);
            }
            printf("\n\n");
        }
    }
    fclose(fp);
}


int cercacognome(char file[], char cog[])
{
	int cont=0;
    FILE * fp=fopen(file,"rb");//lo apro in rb perchè è un file binario
    studente s;
    
    if(fp!=NULL)//controllo se non ha avuto problemi nell'apertura del file
	{
        while(!feof(fp))//controllo con il fine file
        {
            fread(&s,sizeof(studente),1,fp);//leggo i record
            if(strcmp(s.cognome, cog)==0)
			//controllo il cognome nel record con il cognome passato come parametro
			{
				cont++;
			}
        }
    }
    return cont;
}


void stampa2(char file[])
{
	int media=0,max=0,min=0;//dichiaro la media,max,min
	int i;
    FILE * fp = fopen(file,"rb");//lo apro in rb perchè è un file binario
    studente s;
    

    if(fp!=NULL)//controllo l'apertura del file
	{
        while(!feof(fp))//controllo se è fine del file
        {
            fread(&s, sizeof(studente), 1, fp);//leggo i record
            
            printf("cognome: %s\n", s.cognome);
            for(i=0;i<V;i++)
            {
                media+=s.voti[i];//sommo tutti i voti

                if(max<s.voti[i]) max=s.voti[i];//cerco il maggiore
                if(min>s.voti[i]) min=s.voti[i];//cerco il minore
            }
            media/=V;//faccio la media
            printf("media dei voti e': %d\n", media);//stampo la media
            printf("il voto piu' alto e' %d\n", max);//stampo il maggiore
            printf("il voto piu' piccolo e': %d\n", min);//stampo il minore
			
			printf("\n\n");
			media=0;//ridichiaro media
			max=0;//ridichiaro max
			min=10;//ridichiaro min
        }
    }
    fclose(fp);
}

int trova(char file[], char cognome[])
{
	int c=-1;
    FILE * fp = fopen(file, "rb");//lo apro in rb perchè è un file binario
    studente s;
    

    if(fp!=NULL)//controllo l'apertura del file
	{
        while(!feof(fp))//controllo se è fine del file
        {
            fread(&s, sizeof(studente), 1, fp);//leggo i record

            if(strcmp(s.cognome,cognome)==0) 
            //controllo il cognome nel record con il cognome passato come parametro
            {
                c=ftell(fp)/sizeof(studente);
				//posizione del record dove ha trovato il cognome
            }
        }

    return c;
    fclose(fp);
}
}

int contaRecord(char file[])
{
	int c=-1;
    FILE * fp = fopen(file, "rb");//lo apro in rb perchè è un file binario
    if(fp!=NULL)
    {
        fseek(fp,0,SEEK_END);//si posiziona a fine file
        c=ftell(fp);//mi salvo quanto sono distante dall'inizio del file
    }
	c/=sizeof(studente);//trovo quanti record ci sono nel file
    return c;
}