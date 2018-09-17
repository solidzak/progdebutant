 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <string.h>


/*Pointeur variable contenant l'adresse d'une autre variable 
 * %p ->affiche une adresse de variable ou pointeur
 * [VARIABLE] 
 * 		maVariable : valeur de la variable
 * 		&maVariable : adresse de la variable
 * [POINTEURS]
 * 		*monPointeur = Null ou *monPointeur = &maVariable
 * 		(déclaration et initialisation d'un pointeur)
 * 		
 * 		monPOinteur : adresse de la variable pointée
 * 		*monPointeur : valeur de la variable pointée
 * 		&monPointeur : adresse du pointeur
 */

void message();
void message2(int i);
//int cube(int x);
int max(int nb1, int nb2);
int min(int nb1, int nb2);	
void asciicode();
int Char(int car);
char car[]={'p','a','\0'};
void premmajuscule(char *car);
char chaine[]={'P','A','\0'};
void majuscule(char *chaine);
void minuscule (char *chaine);
void pointeur();
void inverser1(char *machaine);
void inverser2(char *chaine);


int main()
{
	
	char chaine[]={0};
	strcpy(chaine,"zakaria");
	inverser1(chaine);
	printf("%s\n",chaine);
	
	return 0;
	
}

void inverser2(char *chaine)
{
	int i,n;
	char lettre;
	
	n=strlen(chaine);
	
	for (i=0;i<n/2;i++)
	{
		lettre = chaine[i];
		chaine[i] = chaine[n-i-1];
		chaine [n-i-1] = lettre;
	}
}

void inverser1(char *machaine)
{
    int i = 0, j = strlen(machaine) - 1;
    char tmp;
 
    while(i < j)
    {
        tmp= machaine[i];
        machaine[i] = machaine[j];
        machaine[j] = tmp;
        i++;
        j--;
    }
}
 


void pointeur()
{
	
	/*char tab[]="ceci est une chaine de character";
	int i=0;
	for (i=0;i<sizeof(tab);i++)
	{	
		printf("%c\n",tab[i]);
	}
	*/
	
	
	char *p="ceci est une chaine" ;
	char *q = p;
		
		
		/*while (*p)
		{
			printf("%c",*q++)
		}*/
	for (q=0;q;q++)
	{
		printf("%c",q);
	}
}

void fonction1()

{
	//const int or=25;
	
	srand(time(NULL));
	int or= rand() % 101;
	int nb=0;
	int cpt = 0;
	
	printf("Bienvenue au jeu du nombre d'or \n");
	do 
	{
		printf("Veuillez saisir un nombre entre 0 et 100\n");
		scanf("%i",&nb);
		cpt++;
		
		if (nb<or)
		{
		printf(" aiiiii pas bon le chiffre est plus elever que celui saisie !!!!! essais encor !!\n");
		}
		else if (nb>or) 
				{
					printf(" aiiiii pas bon le chiffre est moins elever que celui saisie !!!!! essais encor !!\n");
				}
				
				else 
				{
					printf("Bravo tu as trouver le Nombre d'Or en %i coup !!\n",cpt);
					
					}
	}
	while (nb != or);
}

void fonction2()
{

	long int tab[39];	
	int cpt=0;
	long int entier=1;	

		for (cpt=0;cpt<40;cpt++)
		{	
			entier=entier*2;
			tab[cpt]=entier;
			printf("pour la position %li du tableau il y a %li \n",cpt,tab[cpt]);
		}


}


void message (int j)
{	
	for (int i=0;i<5;i++)
	{
	printf("coucou %d\n",j);
	}
}

void message2(int i)
{	
	printf("Valeur de i dans la fonction %i\n",i);
	i=5;
	printf("valeur de i apres changement dans la fonction %i\n",i);
	
}
	
int cube (int x)
{
	return (x*x*x);

}

int max(int nb1, int nb2)

{
		int Max;
		
		if (nb1 > nb2)
		{
			Max=nb1;
		}
		else
		{
			Max=nb2;
		}
		
		return (Max);
}


int min(int nb1, int nb2)

{
		int Min;
		
		
		if (nb1 < nb2)
		{
			Min=nb1;
		}
		else
		{
			Min=nb2;
		}
		return (Min);
}

void asciicode()
{
		char car1;
		
		printf("Saisir un caractere !!\n");
		scanf("%c\n",&car1);
		printf("le code ascii du caractere %c est %i .\n",car1,car1);
}

int Char(int car)
{
		
			if ((car>=0) && (car<256))
			{
			printf("le char correspondant au code ascci du nombre %i est %c .\n",car,car);
			}
			else 
			{
			printf("erreur !!! vous n'avez pas saisie un nombre entre 0 et 255.\n");
			}
		
		return (0);

}


void premmajuscule(char *car)
{

        
        if (car[0]  >= 97 &&  car[0] <= 122)
		{ 
           car[0] = car[0] - 32;
        }
	
 
}

void majuscule(char *chaine)
{
    int i = 0;
 
    //Tant que nous ne sommes pas arrivés a la fin de la chaine, continuer
    while (chaine[i] != '\0')
    {
        /*si chaine[1] est une minuscule
         *Car les minuscules se situent entre 97 et 122 inclusivement
         */
        if (chaine[i]  >= 97 &&  chaine[i] <= 122)
             
            //Convertir en majuscules
            chaine[i] = chaine[i] - 32;
        i++;
    }
}

void minuscule(char *chaine)
{
    int i = 0;
 

    while (chaine[i] != '\0')
    {

        if (chaine[i]  >= 65 &&  chaine[i] <= 90)
             
            
            chaine[i] = chaine[i] + 32;
        i++;
    }
}

