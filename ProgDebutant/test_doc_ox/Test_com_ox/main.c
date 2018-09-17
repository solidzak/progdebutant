#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int IdLivre = 1;


typedef struct Livre{
                char titre[50];
                char auteur[30];
                int annee;
                int ISBN;
                struct Livre *suivant;
                       }Livre;
struct Livre *premier;


Livre *initialisation()

{

    Livre *liste = malloc(sizeof(*liste));
    premier = NULL;
    return liste;
}

///
/// \brief Procédure d'insertion de donnée nécéssite 3 paramettre en entrée : le Titre, l'Auteur, L'Année
/// \param liste
/// \param nvTitre
/// \param nvAuteur
/// \param nvAnnee
///
void insertion(Livre *liste, char *nvTitre, char *nvAuteur, int nvAnnee )
{
    /* Création du nouvel élément */
    Livre *nouveau = malloc(sizeof(*nouveau));
    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    strcpy(nouveau->titre,nvTitre);
    strcpy(nouveau->auteur,nvAuteur);
    nouveau->annee = nvAnnee;
    nouveau->ISBN= IdLivre;

    ++IdLivre;

    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = premier;
    premier = nouveau;

}

///
/// \brief Fonction qui compte le nombre de livre enregistrer
/// \param liste
/// \return
///
int count(Livre *liste)
{
        if (liste == NULL)

        {

            return 0;

        }


    Livre *compteur = premier;

    int cpt=0;
    while (compteur != NULL)

        {

        cpt++;
        compteur = compteur->suivant;

        }

         return cpt;
}


///
/// \brief Procédure qui retourne les informations d'un livre par rapport au numero ISBN saisie
/// \param liste
/// \param idauteur
///
void get_auteur(Livre *liste,int idauteur)

{

    if (liste == NULL)

    {

        exit(EXIT_FAILURE);


    }


    Livre *actuel = premier;

    int nbliv=count(actuel);

    if (idauteur>0 || idauteur <= nbliv)
    {
        while (actuel != NULL)

        {
           if (actuel->ISBN == idauteur)
           {
               printf("Titre = %s | Auteur = %s | Année = %d et l'ID du livre est %d .\n", actuel->titre, actuel->auteur, actuel->annee, actuel->ISBN);
           }

           actuel = actuel->suivant;
        }

    }

}


int main()
{

    Livre *maListe = initialisation();

    insertion(maListe,"livre1","zakaria",2018);
    insertion(maListe, "papa est en haut","jean val jean",20358);
    insertion(maListe, "eremsito","josé de la fontaine",2015);

    get_auteur(maListe,1);

   //int nblivre = count(maListe);

   //printf("nombre de livre dans la bibliotheque est de %i\n",nblivre);


    return 0;
}
