#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


int main()
{
    int fichier;
    char text[]="test papa ou tu es?";
    /* ouverture du fichier */
      fichier=open("/home/zakaria/totoopen",O_RDWR | O_CREAT,666);

         write(fichier,text,strlen(text));

         close(fichier);

    return 0;
}
