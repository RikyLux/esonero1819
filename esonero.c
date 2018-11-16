#include<stdio.h>

int main(void)
{

int Giorni;                              //Giorni totali della previsione
int Oscillazione=0;                      //Guadagno dall'oscillazione della borsa
int k;                                   //Numero Azioni
int Gvend;                               //Giorno Vendita
int Gacqu;                               //Giorno Acquisto
int continuare=0;                        //Per continuare 0 senò si esce dal programma

printf("Benvenuto e Buon Divertimento\n\n\nStavi dormendo comodamente nel tuo letto quando compare davanti a te un fantasma.\nSi presenta, e' il sig.Rosco, un ricco imprenditore costretto ad aiutare i piu' poveri.\nDice di avere il potere di prevedere le quotazioni in borsa\nDopo aver capito che non si tratta di uno Scammer, gli chiedi una prova sul suo potere.\n");

do
{
printf("\nIl sig.Rosco allora ti chiede per quanti giorni vuoi la predizione\n");
scanf("%d", &Giorni);                          //Lettura dei giorni totali della predizione
int array1[Giorni];                             //Creazione dell' primo array con numero Giorni

printf("e anche quante azioni vuoi COMPRARE\n");
scanf("%d", &k);                          //Lettura dei giorni totali della predizione

printf("\nNon avendo %i Giorni da aspettare e avendo l'indomani hai un esame di Programmazione I,\ndecidi di scrivere tutte le fluttuazioni del mercato in un foglio e vedere se il sig.Rosco le indovina\n\n",Giorni);

for (int i=0; i < Giorni; i++)
{
  printf("Che valore ha il mercato la SERA del giorno %i?\n", i);          //Lettura dei vari valori del mercato giorno per giorno
  scanf("%i", &array1[i]);                                                  //Giorno 0 non si compra solo dal inizio del giorno 1 che avrà valore la fine del giorno 0 cioè il valore inserito al giorno zero

}

int array2[Giorni-1];      //Inizializazione  Del secondo Array

for (int i=0; i < Giorni-1; i++)    //Calcolo e inserimento dati Del secondo Array
{
  array2[i]=array1[i+1]-array1[i];    //Viene calcolata la differenza tra il giorno+1 con il giorno in modo da trovare il guadagno o perdita tra i due giorni
}



for (int i = 0; i < Giorni-1; i++)
{
  int App=0;                         //Variabile di Appoggio dove gli verranno inseriti le varie somme del giorni seguenti

  for (int j= i; j < Giorni-1; j++)
  {
    App=App+array2[j];

    if (Oscillazione < App)          //In caso trova un oscillazione più grande la salva, e salva anche i giorni comprare e vendere
    {
      Oscillazione=App;
       Gacqu=i;
       Gvend=j;
    }

  }

  }

   if (Oscillazione<=0)             //Se l'oscillazione è inferiore o ugiale a 0 non viene consigliato di investire
   {
     printf("\nNon e' possibile trovare un ricavo in questi %i giorno/i in borsa \n",Giorni);
   }
   else
   {
     printf("\nIl Signor.Rosco ti passa un foglio con tutti i risultati:\nTi consiglia di COMPRARE alla Mattina del giorno %i  e  VENDERE il tutto la Sera del giorno %i\nIl totale dell'oscillazione e' di +%i punti, WOW!! HAI GUADAGNATO %i euro COMPLIMENTI!!\n", Gacqu+1, Gvend+1, Oscillazione,Oscillazione*k);
   }

 printf("\nVuoi coninuare con il programma? Oppura torni a dormire sapendo che tutto questo e' un brutto sogno causato da un' indigestione da sushi. \nPer continuare PREMI 0 per uscire PREMI qualsiasi altro numero\n");
 scanf("%i",&continuare);

 printf("\n----------------------------------------------------------------------------------------------------------------------");
}
while(continuare==0);


}
