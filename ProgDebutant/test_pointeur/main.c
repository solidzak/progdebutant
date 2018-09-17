#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int glo;
char tab1[12];
const char a;
int IdLivre =0;


void affichesanspremier(char *p)
{
    printf("%s \n",p+1);

}

int longueur(char *p)
{
    int cpt;

    for (cpt=0 ; *p ;p++)
    {

        cpt++;

    }
    return cpt;
}
void copie(char *source, char *destination)
{

    for ( ; *source; source++)
    {
          *destination = *source;
          destination++;
    }



}


void retourne(int *i)

{
    *i=4;
}

/* int main()
{

     //char *ptr1;
     char* ptr2= &a;
     char* ptr3;
     char tab2[12];

     char* ptr4="test de la constant d'un pointeur";

     ptr3= (char*) malloc(8);

    int n=35;
    //ptr1=(char*)malloc(n);
    int nbr;
    for (int i=0;i<n;i++)
    {

        ptr1[i]=nbr;
        nbr=nbr+2;

        printf("la donné de ptr est %d\n",ptr1[i]);
    }




     printf("l'adresse memoire local de int nbr est de %p\n",&nbr);
     printf("l'adresse memoire global de int glo est de %p\n",&glo);
     printf("l'adresse memoire local de char tab2 est de %p\n",&tab2[0]);
     printf("l'adresse memoire global de char tab1 est de %p\n",&tab1[0]);
     printf("l'adresse memoire local du pointeur char qui pointe vers l'adresse de la constant global n est de %p\n",ptr2);
     printf("l'adresse memoire de la fonction copie est de %p\n",&copie);
     printf("l'adresse memoire de la fonction copie est de %p\n",copie);
    printf("l'adresse memoire de la constant du pointeur ptr4 est de %p\n",ptr4);
    printf("l'adresse memoire du pointeur ptr3 apres l'avoir \"malloc\" est de %p\n",ptr3);







        return 0;

}
*/
void date_3_arg(char *date, int* jo, int* mo, int* an)
{
//int 2
    *jo= date[0]-48;
    *jo=*jo*10;
    *jo=*jo+date[1]-48;
    *mo= date[3]-48+date[4]-48;
    *an=date[6]-48;
    *an=*an*1000;
    *an=*an+date[8]-48;
    *an=*an+date[9]-48+9;






}

/*
int main()
{
    char *date="23/03/2014";

    int jour;
    int mois;
    int annee;

    date_3_arg(date, &jour, &mois, &annee);

    printf("la date est %i-%i-%i\n",jour, mois, annee);



}

*/

/*
 * void main ( int argc, char *argv[])
{


    for(int i=0;i<argc;i++)
        {
            printf("le nom du programme %s, le nombre d'argument %i\n", argv[i],argc );
        }


}

*/

unsigned long factoriel (int n)
{
    if (n < 0) { return (0);}
    else if (n == 1 || n == 0)
        {
    return 1L;
        }
        return n * factoriel (n - 1);
}

/*
 * int main()
{
    typedef enum {lundi=1,mardi,mercredi,jeudi,vendredi,samedi,dimanche} jours ;
    jours j;

    for (j=lundi;j<=dimanche;j++)
    {
        printf("nous somme le %d\n",j);
    }
   return 0;
}
*/



/*
 * int main()
{

    typedef struct
    {
      char titre[50];
      char auteur[50];
      int an;
    }
    livre;

    livre bibliotheque [5];



    //struct livre *ptr;
    strcpy(bibliotheque[0].titre ,"livre1");strcpy(bibliotheque[0].auteur ,"jean val jean");  bibliotheque[0].an=2035 ;
    strcpy(bibliotheque[1].titre ,"livre2");strcpy(bibliotheque[1].auteur ,"brutus");  bibliotheque[1].an=1564 ;
    strcpy(bibliotheque[2].titre ,"livre1");strcpy(bibliotheque[2].auteur ,"kaius");  bibliotheque[2].an=4549 ;
    strcpy(bibliotheque[3].titre ,"livre1");strcpy(bibliotheque[3].auteur ,"julius");  bibliotheque[3].an=658 ;
    strcpy(bibliotheque[4].titre ,"livre1");strcpy(bibliotheque[4].auteur ,"toto");  bibliotheque[4].an=78 ;


    for (int i=0;i<5;i++)
    {
        printf("le nom du livre est %s, son auteur est %s, il etait ecris en %i \n",bibliotheque[i].titre,bibliotheque[i].auteur,bibliotheque[i].an);
    }


   return 0;
}
*/

/*
 * int main()
{
    typedef struct _noalign
                {
                        char c;
                               \\1 octet
                        double d;
                                \\ 8 octets
                        int i;
                               \\4 octets
                        char c2[3]; \\ 3 octets
                }noalign;
    typedef struct _align
                {
                        double d;
                                \\8 octets
                        int i;
                                \\4 octets
                        char c2[3] ;
                                \\ 3 octets
                        char c;
                                \\1 octet
                }align; \\16 octets

    printf("voici la taille de la structure _noalign %i, et voici la taille de la structure _align %i. \n",sizeof(struct _noalign),sizeof(struct _align));


}*/
typedef struct Element{
                char titre[30];
                char auteur[30];
                int annee;
                int nel;
                struct Element *suivant;

                       }Element;
typedef struct Liste{

    struct Element *premier;

                    }Liste;

Liste *initialisation()

{

    Liste *liste = malloc(sizeof(*liste));

    liste->premier = NULL;
//    Element *element = malloc(sizeof(*element));


//    if (liste == NULL || element == NULL)

//    {

//        exit(EXIT_FAILURE);

//    }

//    //element->titre[0]='\0;';
//    strcpy(element->titre,"");
//    strcpy(element->auteur,"");
//    element ->annee =0;
//    element->suivant = NULL;

//    liste->premier = element;


    return liste;

}

void insertion(Liste *liste, char *nvTitre, char *nvAuteur, int nvAnnee )
{
    /* Création du nouvel élément */
    Element *nouveau = malloc(sizeof(*nouveau));
    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    strcpy(nouveau->titre,nvTitre);
    strcpy(nouveau->auteur,nvAuteur);
    nouveau->annee = nvAnnee;
    nouveau->nel= IdLivre;

    ++IdLivre;

    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}

void suppression(Liste *liste)

{

    if (liste == NULL)

    {

        exit(EXIT_FAILURE);

    }


    if (liste->premier != NULL)

    {

        Element *aSupprimer = liste->premier;

        liste->premier = liste->premier->suivant;

        free(aSupprimer);

    }

}

void clear(Liste *liste)

{

    if (liste == NULL)

    {

        exit(EXIT_FAILURE);

    }

    while (liste->premier !=NULL)
    {
        if (liste->premier != NULL)

        {

            Element *aSupprimer = liste->premier;

            liste->premier = liste->premier->suivant;

            free(aSupprimer);

        }


    }

}


void afficherListe(Liste *liste)

{

    if (liste == NULL)

    {

        exit(EXIT_FAILURE);

    }


    Element *actuel = liste->premier;


    while (actuel != NULL)

    {
        printf("Titre = %s | Auteur = %s | Année = %d et l'ID du livre est %d .\n", actuel->titre, actuel->auteur, actuel->annee, actuel->nel);
        actuel = actuel->suivant;

    }

    //printf("NULL\n");

}

int count(Liste *liste)
{
    if (liste == NULL)

    {

        return 0;

    }


Element *compteur = liste->premier;

int cpt=0;
while (compteur != NULL)

    {

    cpt++;
    compteur = compteur->suivant;

    }

    //printf("nombre de livre dans la bibliotheque est de %i\n",cpt);
     return cpt;
}

int main()

{


    Liste *maListe = initialisation();


    insertion(maListe,"livre1","zakaria",2018);

    insertion(maListe, "papa est en haut","jean val jean",20358);

    insertion(maListe, "eremsito","josé de la fontaine",2015);

    //clear(maListe);// suppression du premier champs saisie



    afficherListe(maListe);
    int nblivre = count(maListe);

    printf("nombre de livre dans la bibliotheque est de %i\n",nblivre);

    return 0;

}


