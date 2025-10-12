/*

FILENAME: laboratorioC.c
VERSIONE: 1.0
AUTORE:  Riccardo Annolfi
SCUOLA: ITC V. A. RUIZ - Roma
CORSO: INFORMATICA III ANNO SEZIONE C

QUESTO PROGRAMMA E' PER L'APPRENDIMENTO DELLE BASI DELLA PROGRAMMAZIONE NEL LINGUAGGIO C.

La maggior parte dei programmi qui riportati, 
segue il percorso laboratoriale del corso di C Essentials di C++ Institute, https://cppinstitute.org/
e del test Linguaggio C, https://www.mheducation.it/linguaggio-c-5-ed-9788838668210-italy

*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // 11
#include <float.h>  // 12


#define MAX_CONC 10 /* 17: massimo numero di concorrenti */
#define MIN_PUN   1 /* 17: punteggio minimo per ogni prova */
#define MAX_PUN  10 /* 17: punteggio massimo per ogni prova */

#define MAX_ELE  1000 /* 18: massimo numero di elementi */

int main(void) 
{
	//  TO DO : 1 CONTROLLO SCELTA
	//  TO DO : SU 6 VISUALIZZARE IL VETTORE PRIMA DEL''OUTPUT
	//  TO DO : SU 7 VISUALIZZARE L'INDICE NELL'OUTPUT
	//  TO DO : SU 10 VISUALIZZARE MESSAGGIO SU IPV4 0-255 MAX
	//  TO DO : PER OGNI VOCE, RIPORTARE NELL'OUTPUT LA VOCE SELEZIOMNATA E COSA STA STAMPANDO
	//  TO DO : sui sizeof, nella stampa, scrivere il corrispondente comando
	//  TO DO : dividi il menu per categorie: strighe, limits,h, sizeof, puntatori, aritmetica dei puntatori, ecc... 		
		
	int scelta;
	
	do{
		
		puts("\n\n"
		
			"\t#####################################\n"
			"\t#######    LABORATORIO DI C   #######\n"
			"\t#####################################\n\n\t"
			 
			 
		"1 --- Stampa alfabeto\n\t" //  (char, array di char, for con iterazione su char)
		"2 --- Stampa alfabeto al contrario\n\t" // (char, array di char, for con iterazione su char)
		"3 --- Calcolo dei giorni fino all'inizio del mese inserito\n\t" // (switch - case senza break)
		"4 --- Stampa serie di Fibonacci, indice pari e indice dispari\n\t" // (array di interi, indici pari e dispari)
		"5 --- Bubble sort - Ordinamento crescente di un vettore di interi di 5 numeri\n\t"	//  (array di interi, variabile di scambio (swap))	
		"6 --- Bubble sort - Ordinamento decrescente di un vettore di decimali di 10 numeri\n\t" //  (array di float, variabile di scambio (swap))
		"7 --- Inserimento di 4 stringhe e stampa nell'ordine inverso\n\t" //  (array di stringhe, stampa di stringhe)
		"8 --- Stampa tabella ASCII (0-127)\n\t"			
		"9 --- Stampa tabella ASCII estesa (0-255)\n\t"
		"10 -- Composizione indirizzo IP \n\t" // (unsigned short, sprintf, stringhe)	
		"11 -- Stampa dimensioni di vari tipi di dati interi tramite costanti di limits.h\n\t" // limits.h
		"12 -- Stampa lo spazio di archiviazione occupato da un tipo float e i suoi valori di intervallo tramite float.h\n\t" // sizeof(float), float.h	
		"13 -- Stampa bytes utilizzati per ogni tipo di dato tramite operatore sizeof\n\t" // sizeof
		"14 -- Stampa bytes utilizzati per ogni tipo di dato e relativa variabile tramite operatore sizeof\n\t" // 
		"15 -- Copia vettore di float tramite puntatori\n\t"
		"16 -- Copia vettore di float tramite puntatori, partendo dalla meta' e procedendo verso gli estremi\n\t"	
		"17 -- Inserimento vettori e calcolo medie aritmetiche\n\t"	// 7.2 pag 116
		"18 -- Ricerca sequenziale di un valore del vettore\n\t"	// 8.2 pag 130
		"19 -- Fusione di 2 vettori di caratteri ordinati\n\t" //8.5 pag 138
		"20 -- Visualizzazione di differenti rappresentazioni dei caratteri di una stringa\n\t"  //9.1 pag 144
		"21 -- Copia di una stringa su un'altra\n\t"  //9.2 pag 146 .... for(i=0; (discorso[i]=frase[i])!='\0'; i++) ; .....
		"22 -- Concatenazione di due stringhe (con scanf --> senza spazi)\n\t"  //9.1 pag 144 .... for(j=0; (frase[i]=dimmi[j])!='\0'; i++,j++) ; ......
		"23 -- Concatenazione di due stringhe (con fgets/fflush (stdin) --> con spazi)\n\t" // fflush (stdin) fgets(pers.cognome,SIZE_MAX_STRING, stdin) link https://www.matematicamente.it/forum/stringa-che-puo-contenere-spazi-t66756.html?mobile=on
		"24 -- Concatenazione di due stringhe (con getchar() --> con spazi)\n\n\t" // fflush (stdin) , getchar(), for(j=0; (frase[i]=dimmi[j])!='\0'; i++,j++) ;
		"0 --- Esci\n ");
				
		printf(":> ");
		
		scanf("%d",&scelta);
		printf("\n--------------------------------------------\n");	
		switch(scelta)
		{
			
			case 1:
				
		/*
		
		Objectives
			Familiarize the student with:
		
				Arrays
				Character type
				The for loop
				Printing on screen
				
		Scenario
			Write a program that fills a 26-element array with letters from "a" to "z". Try not to use the int type, but only the char type for variables.
			
			When the array is filled, the program should print all the characters in order, then print only the array elements that constitute the word "great".
			
			Figure out the simplest way to find out which elements should be used.
		
		*/				
			{
				char alfabeto[26], c;
				
				for (c = 'a'; c<='z'; c++)
				{
					alfabeto[c-'a'] = c;
				}
			
				for (c = 'a'; c <= 'z'; c++)
				{
					printf("%c\n", alfabeto[c - 'a']);
				}
				printf("%c", alfabeto['g'-'a']);
				printf("%c", alfabeto['r' - 'a']);
				printf("%c", alfabeto['e' - 'a']);
				printf("%c", alfabeto['a' - 'a']);
				printf("%c\n", alfabeto['t' - 'a']);
				
				break;						
			} // end case 1
			
			
			case 2:
				
		/*
		
		Objectives
			Familiarize the student with:
		
				Arrays
				Character type
				The for loop
				Printing on screen
				
		Scenario
			Write a program that fills a 26-element array with letters from "a" to "z". Try not to use the int type, but only the char type for variables.
			
			When the array is filled, the program should print all the characters in reverse order, then print only the array elements that constitute the word "great".
			
			Figure out the simplest way to find out which elements should be used.
		
		*/				
			{
				char alfabeto[26], c;
					
				for (c = 'a'; c<='z'; c++)
				{
					alfabeto[c-'a'] = c;
				}
			
				for (c = 'z'; c >= 'a'; c--)
				{
					printf("%c\n", alfabeto[c - 'a']);
				}
				printf("%c", alfabeto['g'-'a']);
				printf("%c", alfabeto['r' - 'a']);
				printf("%c", alfabeto['e' - 'a']);
				printf("%c", alfabeto['a' - 'a']);
				printf("%c\n", alfabeto['t' - 'a']);
				
				break;
			}  // end case 2
			
			case 3:
			
			/*
			
			Objectives
				Familiarize the student with:
				
					Working with the switch-case statement
					The break statement - when to use it and when not to use it
					Integer numbers
					Printing on screen
				
			Scenario
				Write a program that asks the user to enter the number of a month, and prints the number of days before this month since the start of the year.
				
				When the number does not correspond to a month (less than 1 or greater than 12), the program prints: Error: no such month in my calendar..
				
				Use only switch for computing the sum of the days (don't use any loops).
				
				You don't have to check whether or not the year is a leap year - assume it is a leap year.
				
				If you can't remember all the names and the number of days (and of course to speed up your programming), here is a list:
			
					1 : January - 31
					2 : February - 28 or 29 (during a leap year)
					3 : March - 31
					4 : April - 30
					5 : May - 31
					6 : June - 30
					7 : July - 31
					8 : August - 31
					9 : September - 30
					10 : October - 31
					11 : November - 30
					12 : December - 31 - of course you don't need this value in this task
			*/				
			{
				
				int mese=0;
				
				printf("Inserisci il mese: ");
				scanf("%d", &mese);
				int giorniPrima = 0;
				int calcolatoCorrettamente = 0;				
				
				switch(mese)
				{	
				
				// NOTA:  questi case non tertminano con il break, vengono eseguiti dal numero inserito fino alla fine
				
					case 12: giorniPrima += 30;
					case 11: giorniPrima += 31;
					case 10: giorniPrima += 30;
					case 9:  giorniPrima += 31;
					case 8:  giorniPrima += 31;
					case 7:  giorniPrima += 30;
					case 6:  giorniPrima += 31;
					case 5:  giorniPrima += 30;
					case 4:  giorniPrima += 31;
					case 3:  giorniPrima += 29;
					case 2:  giorniPrima += 31;
					case 1:	 calcolatoCorrettamente = 1;  
							break;
					default: puts("Errore: non esiste questo mese nel calendario.");
				}
				if (calcolatoCorrettamente)
					printf("Ci sono %d giorni prima del mese inserito.\n", giorniPrima);	
				
				break;
			} // end case 3	
			
			
			case 4:
				
			/*
			
			Objectives
				Familiarize the student with:
			
					Arrays
					Printing on screen
					
			Scenario
				The Fibonacci sequence is a series of natural numbers built up by this simple formula:
				
					The first Fibonacci number is equal to 1;
					The second Fibonacci number is equal to 1 too;
					The third, fourth and every subsequent Fibonacci number is equal to the sum of the two previous numbers.
					
			This means that the first five Fibonacci numbers look as follows:
			
			1, 1, 2, 3, 5
			
			Write a program that prints this Fibonacci sequence and two of its subsequent numbers. It should print:
			
				the first ten numbers from the Fibonacci sequence,
				then it should print only the odd numbers (1st, 3rd, 5th, 7th and 9th),
				after that, only the even numbers (2nd, 4th, 6th, 8th and 10th).
				
			*/				
			{
				int sequenzaFibonacci[10], i;
				sequenzaFibonacci[0] = 1;
				sequenzaFibonacci[1] = 1;
				
				//CALCOLO LA SEQUENZA DI FIBONACCI
				for (i = 2; i<10; i++)
				{
					sequenzaFibonacci[i] = sequenzaFibonacci[i - 1] + sequenzaFibonacci[i - 2];
				}
				
				// STAMPO LA SEQUENZA
				printf("La serie di Fibonacci %c:\n\n", 138);
				for (i = 0; i<10; i++)
				{
					printf("%d\n", sequenzaFibonacci[i]);
				}
				// STAMPO GLI ELEMENTI DI INDICE PARI
				puts("\nGli elementi di indice pari sono:\n");
				for (i = 0; i<10; i += 2)
				{
					printf("%d\n", sequenzaFibonacci[i]);
				}
				// STAMPO GLI ELEMENTI DI INDICE DISPARI
				puts("\nGli elementi di indice dispari sono:\n");
				for (i = 1; i<10; i += 2)
				{
					printf("%d\n", sequenzaFibonacci[i]);
				}
						
				break;			
			} // end case 4
			case 5:
			{
					
				/*
				
				The bubble sort of an array of 5 integer
				
				*/		
							
		        int numeri[5];
		        int i, aus;
		        int scambiato;
		        
				/* ask the user to enter 5 values */
		        for(i = 0; i < 5; i++) {
		            printf("\nInserisci valore #%i: ",i + 1);
		            scanf("%d",&numeri[i]);
		        }
		        
				/* sort them */
		        do {
		            scambiato = 0;
		            for(i = 0; i < 4; i++) {
		                if(numeri[i] > numeri[i + 1]) {
		                    scambiato = 1;
		                    aus = numeri[i];
		                    numeri[i] = numeri[i + 1];
		                    numeri[i + 1] = aus;
		                }
		            }
		        } while(scambiato);
		        
				/* print results */
		        printf("\nVettore ordinato: ");
		        for(i = 0; i < 5; i++)
		            printf("%d ",numeri[i]);		        
						       	
		       	break;
			}// end case 5		
			case 6:
			{
					
				/*
				
				Objectives
					Familiarize the student with:
				
						Comparing elements in arrays
						Floating-point numbers
						Printing on screen
						
				Scenario
					Write a program that sorts ten floating-point numbers in descending order.
					
					In this case, the data in the array is initialized (see code in the editor). After each execution of the inner loop, 
					your program should print the values on the screen (with another small loop). You can use the "%.2f" format in the printf function.
					
					Given the array 
						float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9}
						
					Your version of the program must print the same result as the expected output.
					
						5.60 6.20 6.40 7.30 4.30 8.30 9.20 2.30 1.90 0.10
						6.20 6.40 7.30 5.60 8.30 9.20 4.30 2.30 1.90 0.10
						6.40 7.30 6.20 8.30 9.20 5.60 4.30 2.30 1.90 0.10
						7.30 6.40 8.30 9.20 6.20 5.60 4.30 2.30 1.90 0.10
						7.30 8.30 9.20 6.40 6.20 5.60 4.30 2.30 1.90 0.10
						8.30 9.20 7.30 6.40 6.20 5.60 4.30 2.30 1.90 0.10
						9.20 8.30 7.30 6.40 6.20 5.60 4.30 2.30 1.90 0.10
						9.20 8.30 7.30 6.40 6.20 5.60 4.30 2.30 1.90 0.10
						9.20 8.30 7.30 6.40 6.20 5.60 4.30 2.30 1.90 0.10					
				*/		
							
				float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
				
				int i, scambiato=0;
				float aus;
				
				do{
				    scambiato=0;
				    
			    	for (i=0; i<9; i++){
			    	    
			    	    if(numbers[i]<numbers[i+1]){
			    	        aus = numbers[i];
			    	        numbers[i] = numbers[i+1];
			    	        numbers[i+1] = aus;
			    	        scambiato = 1;
			    	    }
			    	}
			    		    
			    	for (i=0; i<10; i++){
			        
			            printf("%.2f\t", numbers[i]);
			            
			    	}
			    	printf("\n");
			    	
				} while(scambiato);
		       	
		       	break;
			}// end case 6					

			case 7:
			{
					
				/*
				Objectives
					Familiarize the student with:
				
						Arrays
						Integer numbers
						Printing on screen
						
				Scenario
					Write a program that asks the user to provide four names, and prints them in reverse order. 
					For now, assume that each name consists of a maximum of 20 letters.
				
					Because you probably don't yet know about multidimensional arrays, use four variables. 
					Later you should store data of this kind in a 2D array (or a more advanced data type).				
					
				*/		
							

				char nome1[20], nome2[20],nome3[20],nome4[20];
				int i=0;
				
				printf("Inserisci il nome #%d: ", ++i);
				scanf("%s", nome1);
				puts("\n");
				
				printf("Inserisci il nome #%d: ", ++i);
				scanf("%s", nome2);
				puts("\n");	
				
				printf("Inserisci il nome #%d: ", ++i);
				scanf("%s", nome3);
				puts("\n");	
				
				printf("Inserisci il nome #%d: ", ++i);
				scanf("%s", nome4);
				puts("\n");	
				
				printf("\n\n%s\n%s\n%s\n%s\n", nome4, nome3, nome2, nome1);	
					       	
		       	break;
			}// end case 7
						
			case 8:
			{
					
				/*
			
					ASCII TABLE
				*/		
							
				int i=0;
				
				for (i=0; i<=127; i++)
					printf(" %d: %c\n", i, i);

					       	
		       	break;
			}// end case 8	
											
			case 9:
			{
					
				/*
			
					EXTENDED ASCII TABLE
				*/		
							
				int i=0;
				
				for (i=0; i<=255; i++)
					printf(" %d: %c\n", i, i);

					       	
		       	break;
			}// end case 9	
											
			case 10:
			{
					
				/*
			
				Objectives
					Familiarize the student with:
				
						Fixing errors in a program
						Integer numbers
						Printing on screen
				Scenario
					Write a program that asks the user to enter four numbers as strings, and creates a human readable IP address from them. 
					Your main task is to think about an appropriate data size to store the IP address. After this, your program should print the string.
				
					To insert four numbers (and three dots) into a string, you may use the sprintf function (not described), 
					copy all the characters manually, or use another method more suitable for you.
					
				*/		
							
			    int i, numeroCorretto;
			    unsigned short numero[4];
			    char ipaddress[15];
			    
			        
			    for (i=0; i<4; i++){
			        do {
			            numeroCorretto=1;        
			        	printf("Inserisci il numero #%d: ", i+1);
			        	scanf(" %hu", &numero[i]);
			        	
			        	if(numero[i] < 0 || numero[i] > 255)
			        	    numeroCorretto=0;
			        } while (!numeroCorretto);
			    }
			  
				sprintf(ipaddress, "%d.%d.%d.%d", numero[0], numero[1], numero[2], numero[3]);
				printf("\nIP Address: %s", ipaddress);  
					       	
		       	break;
			}// end case 10	
											
			case 11:
			{
					
				/*
			
				Per ottenere la dimensione esatta di un tipo o di una variabile su una particolare piattaforma, puoi utilizzare il sizeof operatore. 
				Le espressioni sizeof (tipo) restituiscono le dimensioni di archiviazione dell'oggetto o del tipo in byte. 
				Di seguito è riportato un esempio per ottenere le dimensioni di vari tipi su una macchina utilizzando una costante 
				diversa definita nel file di intestazione limits.h
					
				*/		
							
			    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
			    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
			    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
			    printf("INT_MAX     :   %d\n", INT_MAX);
			    printf("INT_MIN     :   %d\n", INT_MIN);
			    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
			    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
			    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
			    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
			    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
			    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
			    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
			    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
			    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
			    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);
			    
		       	break;
			}// end case 11	
											
			case 12:
			{
					
				/*
			
				Il file di intestazione float.h definisce le macro che consentono di utilizzare questi valori e 
				altri dettagli sulla rappresentazione binaria dei numeri reali nei programmi. 
				L'esempio seguente stampa lo spazio di archiviazione occupato da un tipo float e i suoi valori di intervallo:
					
				*/		
							
			    printf("Storage size for float : %d \n", sizeof(float));
			    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
			    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
			    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
			    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
			    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
			    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
			    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
			    printf("Precision value: %d\n", FLT_DIG );
			    
		       	break;
			}// end case 12	
														
			case 13:
			{
					
				/*
				Utilizzo dell'operatore unario sizseof, per determinare quanti bytes sono utilizzati
				dal corrente compilatore/computer per i vari tipi di dati
					
				*/		
							
			    printf("Questo ambiente di calcolo utilizza:\n\n");
			    printf("%d byte per i chars\n", sizeof(char));
			    printf("%d bytes per i shorts\n", sizeof(short int));
			    printf("%d bytes per i ints\n", sizeof(int));
			    printf("%d bytes per i longs\n", sizeof(long int));
			    printf("%d bytes per i long longs\n", sizeof(long long int));
			    printf("%d bytes per i floats\n", sizeof(float));
			    printf("%d bytes per i doubles\n", sizeof(double));
			    printf("%d bytes per i pointers\n", sizeof(int *));
						    
		       	break;
			}// end case 13	
							
							
							
			case 14:
			{
			
			/*
			
			Utilizzo dell'operatore unario sizseof, per determinare quanti bytes sono utilizzati
			dal corrente compilatore/computer per i vari tipi di dati e delle relatoive variabili
			
			
			*/		
				
				printf("14 -- Stampa bytes utilizzati per ogni tipo di dato e relativa variabile tramite operatore sizeof\n\n");
				
				int v;
				printf("%d byte per i chars\n", sizeof(char));
				char c;
				printf("%d byte per le variabili di tipo char\n", sizeof(c));
			
				printf("%d bytes per i shorts\n", sizeof(short int));
				short int si;
				printf("%d bytes per le variabili di tipo short\n", sizeof(si));
				
				printf("%d bytes per i ints\n", sizeof(int));
				int i;
				printf("%d bytes per le variabili di tipo int\n", sizeof(i));
				
				printf("%d bytes per i longs\n", sizeof(long int));
				long int li;
				printf("%d bytes per le variabili di tipo long\n", sizeof(li));
				
				printf("%d bytes per i long longs\n", sizeof(long long int));
				long long int lli;
				printf("%d bytes per le variabili di tipo long long\n", sizeof(lli));
				
				printf("%d bytes per i floats\n", sizeof(float));
				float f;
				printf("%d bytes per le variabili di tipo float\n", sizeof(f));
				
				printf("%d bytes per i doubles\n", sizeof(double));
				double d;
				printf("%d bytes per le variabili di tipo double\n", sizeof(d));
				
				printf("%d bytes per i pointers\n", sizeof(int *));
				int *pi;
				printf("%d bytes per i pointer variables\n", sizeof(pi));
			
				printf("%d bytes per l' indirizzo di una variabile di tipo char\n", sizeof(&c));
				char *pc=&c;
				printf("%d bytes per il puntatore all'indirizzo di una variabile di tipo char\n", sizeof(pc));
				printf("%d byte per il valore memorizzato da un puntatore all'indirizzo di una variabile di tipo char\n", sizeof(*pc));				
			
				break;
			} // end case 14
							
			case 15:
			{
			
			/*
			
			Copia vettore di float tramite puntatori
			
			
			*/		
				
				printf("15 -- Copia vettore di float tramite puntatori\n\n");
				printf("Vettore sorgente numbers[10] = {3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2}\n\n");
				printf("Vettore destinazione copiedNumbers[10]\n\n");
				int i;
				float numbers[10] = {3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2};
				float copiedNumbers[10];
				float *source = numbers;
				float *copy = copiedNumbers;
				for (i = 0; i < 10; i++)
				{
					*copy = *source;
					copy++;
					source++;
				}
				//*copy =
				for (i=0; i<10; i++){
				    printf("%.1f\n", copiedNumbers[i]);
				}							
			
				break;
			} // end case 15			
							
			case 16:
			{
			
			/*
			
			Copia vettore di float tramite puntatori, partendo dalla meta' e procedendo verso gli estremi
			
			
			*/		
				
				printf("16 -- Copia vettore di float tramite puntatori, partendo dalla meta' e procedendo verso gli estremi\n\n");
				printf("Vettore sorgente numbers[10] = {3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2}\n\n");
				printf("Vettore destinazione copiedNumbers[10]\n\n");

				int i;
				float numbers[10] = {3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2};
				float copiedNumbers[10];
				float *source = numbers;
				float *copy = copiedNumbers;
				for (i = 0; i < 10; i++)
				{
					*copy = *source;
					copy++;
					source++;
				}
				
				float *copiedEnd = copy; // punta all'ultimo elemento di biggerNumbers
				float *copiedStart = copiedNumbers; // punta al primo elemento di biggerNumbers
				float *middle1 = copiedNumbers+4;
				float *middle2 = copiedNumbers+5;
				for ( ; middle1>=copiedStart ; middle1--, middle2++)
				{
					printf("%.1f\n", *middle1);
					printf("%.1f\n", *middle2);
				}						
			
				break;
			} // end case 16
							
			case 17:
			{
			
			/*
			
			Esercizio: inserire il numero di concorrenti e, per ognuno di loro, 
			inserire il punteggio di 2 prove, calcolandone anche la media aritmetica.
			Utilizzare i vettori.
			
			*/		
				
				printf("17 -- Inserimento vettori e calcolo medie aritmetiche\n\n");

				float prova1[MAX_CONC], prova2[MAX_CONC], totale[MAX_CONC];
				int i, n;
				
				do{
					
					printf("Inserisdci il numero di concorrenti: ");
					scanf("%d", &n);
					
				} while (n<1 || n>MAX_CONC);
				
				/* Perr ogni concorrente, richiesta punteggio nelle 2 prove */		
								
				for (i=0; i<n; i++){
					
					printf("\nConcorrente n# %d\n\n", i+1);
					
					do {
						
						printf("Prima prova: ");
						scanf("%f", &prova1[i]);
						
					} while (prova1[i]< MIN_PUN || prova1[i]>MAX_PUN);
					
					do {
						
						printf("Seconda prova: ");
						scanf("%f", &prova2[i]);
						
					} while (prova2[i]< MIN_PUN || prova2[i]>MAX_PUN);					
				}
				
				/* Calcolo media per concorrente */
				
				for (i=0; i<n; i++)
					totale[i] = (prova1[i] + prova2[i]) / 2;
					
				printf("\nCLASSIFICA\n");
				printf("___________\n\n");
				
				for (i=0; i<n; i++)
					printf("| %f\t|\t%f\t|\t%f | \n", prova1[i], prova2[i], totale[i]);
								
				break;
			} // end case 17
							
			case 18:
			{
			
			/*
			
			Ricerca completa: ricerca sequenziale di un valore del vettore.
			
			*/		
				
				printf("18 -- Ricerca sequenziale di un valore del vettore\n\n");

				char vett[MAX_ELE];
				int i, n;
				char c;
				
				/* Immissione della lunghezza della sequenza */
				
				do{
					
					printf("\nNumero elementi: ");
					scanf("%d", &n);
					
				} while (n<1 || n>MAX_ELE);
				
				/* Immissione elementi della sequenza */
				
				for (i=0; i<n; i++){
					
					printf("Immettere il carattere n# %d: ", i);
					scanf("%1s", &vett[i]); // %1s significa 1 stringa di 1 carattere
				}
				
				printf("Elemento da ricercare: ");
				scanf("%1s", &c); // %1s significa 1 stringa di 1 carattere
				
				/* Ricerca sequenziale */
				
				i=0;
				
				while (c!=vett[i] && i<n-1) ++i;
				
				if(c==vett[i])
					printf("\nElemento %c presente in posizione %d\n", c, i);
				else
					printf("\nElemento non presente!\n");
					
				break;
			} // end case 18
			
			case 19:
			{
			
			/*
			
			19 -- Fusione di 2 vettori di caratteri ordinati.
			
			*/		
				
				printf("19 -- Fusione di 2 vettori di caratteri ordinati\n\n");

				char vet1[MAX_ELE];	/* prima sequenza */
				char vet2[MAX_ELE];	/* seconda sequenza */
				char vet3[MAX_ELE*2];	/* merge */
				int n;	/* lunghezza prima sequenza */
				int m;	/* lunghezza seconda sequenza */
				char aux; /* variabile di appoggio per lo scambio */
				int i, j, k, p, n1, m1;
				
				do {
					printf("Lunghezza prima sequenza: ");
					scanf("%d", &n);
				}
				while(n<1 || n>MAX_ELE);
				
				/* Caricamento prima sequenza */
				for(i = 0;i <= n-1; i++) {
					printf("vet1 %d%c elemento: ",i+1, 248);
					scanf("%1s", &vet1[i]);
				}
				
				do {
					printf("Lunghezza seconda sequenza: ");
					scanf("%d", &m);
				}
				while(m<1 || m>MAX_ELE);
				
				/* Caricamento seconda sequenza */
				for(i=0; i<=m-1; i++) {
					printf("vet2 %d%c elemento: ",i+1, 248);
					scanf("%1s", &vet2[i]);
				}
				
				/* Ordinamento prima sequenza */
				p = n; n1 = n;
				do {
					k = 0;
					for(i = 0; i < n1-1; i++) {
						if(vet1[i]> vet1[i+1]) {
							aux = vet1[i]; vet1[i] = vet1[i+1]; vet1[i+1] = aux;
							k = 1; p = i+1; // k=1 -> e' stato effettuato uno scambio. 
						}					// p = indice ultimo elemento scambiato (vet1[i+1* scambiato con vet1[i]
					}
					n1 = p; // indice ultimo elemento scambiato
					
				} while(k==1 && n1>1); 	// se è stasto effettuato uno scambio (k==1) e 
										// se l'indice dell'ultimo elemento scambiato e' almeno pari a 2, allora ripeti il ciclo
										// altrimenti se k==1 e n=1, vuol dire che il secondo elem dell'array è stato scambiato con il primo, per cui l'ordinamento è terminato
										
				/* Ordinamento seconda sequenza */
				p = m; m1 = m;
				do {
					k = 0;
					for(i=0; i<m1 - 1; i++) {
						if(vet2[i]>vet2[i+1]) {
							aux = vet2[i]; vet2[i] = vet2[i+1]; vet2[i+1] = aux;
							k = 1; p = i+1; // k=1 -> e' stato effettuato uno scambio. 
						}					// p = indice ultimo elemento scambiato (vet1[i+1* scambiato con vet1[i]
					}
					m1 = p;
					
				} while(k==1 && m1>1); 	// se è stasto effettuato uno scambio (k==1) e 
										// se l'indice dell'ultimo elemento scambiato e' almeno pari a 2, allora ripeti il ciclo
										// altrimenti se k==1 e n=1, vuol dire che il secondo elem dell'array è stato scambiato con il primo, per cui l'ordinamento è terminato
										
				
				/* Fusione delle due sequenze (merge) */
				i = 0; j = 0; k = 0;
				do {
					if(vet1[i]<=vet2[j])
						vet3[k++] = vet1[i++];
					else
						vet3[k++] = vet2[j++];
						
				} while(i<n && j<m);
				
				if(i<n) // se i<n --> j=m --> vet2 è stato ricopiato tutto, mentre vet1 no
					for(; i<n; vet3[k++] = vet1[i++]) // quindi termino di copiare vet1
						;
				else // se (!(i<n)) --> j<m --> i=n --> vet1 è stato ricopiato tutto, mentre vet2 no
					for(; j<m; vet3[k++] = vet2[j++]) // quindi termino di copiare vet2
						;
				
				/* Visualizzazione della fusione */
				for(i=0; i<k; i++)
					printf("\n%c", vet3[i]);
				
					
				break;
			} // end case 19
			
			case 20:
			{
			
			/*
			
			Visualizzazione di differenti rappresentazioni dei caratteri di una stringa
			NOTA: è possibile modificare l'esempio, facendo inserire all'utente la frase
			
			*/		
				
				printf("20 -- Visualizzazione di differenti rappresentazioni dei caratteri di una stringa\n\n");

				char frase[] = "Analisi, requisiti ";
			
				int i=0;
				while(frase[i]!='\0') {
					printf("%c = %d = %o \n", frase[i], frase[i], frase[i]);
					i++;
				}							
					
				break;
			} // end case 20

			case 21:
			{
			
			/*
			
			Copia di una stringa su un'altra .....  for(i=0; (discorso[i]=frase[i])!='\0'; i++) ; ......
			NOTA: è possibile modificare l'esempio, facendo inserire all'utente la frase originale
			
			*/		
				
				printf("21 -- Copia di una stringa su un'altra\n\n");

				int i;
				char discorso[80]; // numero max di caratteri copiati 80
				char frase[] = "Analisi, requisiti ";
				
				for(i=0; (discorso[i]=frase[i])!='\0'; i++)
					;
					
				printf(" originale: %s \n copia: %s \n", frase, discorso);
													
				break;
			} // end case 21
			
			case 22:
			{
			
			/*
			
			Concatenazione di due stringhe .... for(j=0; (frase[i]=dimmi[j])!='\0'; i++,j++) ; ......
			NOTA: scanf legge stringhe senza spazi
			
			*/		
				
				printf("22 -- Concatenazione di due stringhe (con scanf --> con spazi)\n\n");

				char frase[] = "Analisi, requisiti ";		
				char dimmi[80];
				int i, j;
				char copiaFrase[80]; // numero max di caratteri copiati 80
				
				for(i=0; (copiaFrase[i]=frase[i])!='\0'; i++)
					;
					
				printf("\n\nfrase iniziale: %s \n\n", copiaFrase);	
				printf("Inserisci la parola da concatenare: ");
				scanf("%s", dimmi);				
				
				for(i=0; (frase[i])!='\0'; i++)
					;
					
				for(j=0; (frase[i]=dimmi[j])!='\0'; i++,j++)
					;
					
				printf("\n\nfrase iniziale: %s \n\n", copiaFrase);
				printf("parola da aggiungere: %s \n\n", dimmi);	
				printf("frase finale: %s \n", frase);					
					
				break;
			} // end case 22
			
			case 23:
			{
			
			/*
			
			Concatenazione di due stringhe .... for(j=0; (frase[i]=dimmi[j])!='\0'; i++,j++) ; ...... fflush (stdin)
			NOTA: fgets legge stringhe con spazi
			
			*/		
				
				printf("23 -- Concatenazione di due stringhe (con fgets/fflush (stdin) --> con spazi)\n\n");

				char frase[160] = "Analisi, requisiti ";		
				char dimmi[80];
				int i, j;
				char copiaFrase[80]; // numero max di caratteri copiati 80
				
				for(i=0; (copiaFrase[i]=frase[i])!='\0'; i++)
					;
					
				printf("\n\nfrase iniziale: %s \n\n", copiaFrase);	
				printf("Inserisci la parola da concatenare: ");
				fflush (stdin);
								
				if (fgets(dimmi, 80, stdin) != NULL){				
							
					for(i=0; (frase[i])!='\0'; i++)
						;
						
					for(j=0; (frase[i]=dimmi[j])!='\0'; i++,j++)
						;
						
					printf("\n\nfrase iniziale: %s \n\n", copiaFrase);
					printf("parola da aggiungere: %s \n\n", dimmi);	
					printf("frase finale: %s \n", frase);					
				}	
				
				break;
			} // end case 23
			
			case 24:
			{
			
			/*
			
			Concatenazione di due stringhe .. getchar().... for(j=0; (frase[i]=dimmi[j])!='\0'; i++,j++) ;
			NOTA: getchar() legge stringhe con spazi
			
			*/		
				
				printf("24 -- Concatenazione di due stringhe (con getchar() --> con spazi)\n\n");

				char frase[160] = "Analisi, requisiti ";		
				char dimmi[80];
				int i, j;
				char copiaFrase[80]; // numero max di caratteri copiati 80
				
				for(i=0; (copiaFrase[i]=frase[i])!='\0'; i++)
					;
					
				printf("\n\nfrase iniziale: %s \n\n", copiaFrase);	
				printf("Inserisci la parola da concatenare: ");											
				fflush (stdin);
				
				for(i=0; (dimmi[i]=getchar())!='\n'; i++)
					;
				dimmi[i]='\0';
							
				for(i=0; (frase[i])!='\0'; i++)
					;
					
				for(j=0; (frase[i]=dimmi[j])!='\0'; i++,j++)
					;
					
				printf("\n\nfrase iniziale: %s \n\n", copiaFrase);
				printf("parola da aggiungere: %s \n\n", dimmi);	
				printf("frase finale: %s \n", frase);					
					
				
				break;
			} // end case 24			
																										
		}// end switch(scelta)

				
		printf("\n--------------------------------------------\n");	

	} while(scelta);
	
	return 0;
}