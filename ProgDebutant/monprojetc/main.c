#include <stdio.h>

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

 int main()
{

        char tab1[]="test1";
        char tab2[]="test2";

        //char * pt_tab1= tab1;
        //char * pt_tab2 = tab2;
        copie(tab1, tab2);
        printf("voici le contenue du tableau destination est %s\n",tab2);
        return 0;

}
