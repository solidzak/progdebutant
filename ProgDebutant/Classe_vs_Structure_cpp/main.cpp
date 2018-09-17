#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int i;
    void clear()
    {
       i=0;
    }

}test;


int main()
{

    test *ptr = (test*) malloc(sizeof (test));


    ptr->i= 2;
    printf("le champ i est a %d\n",ptr->i);

   // ptr-clear()=clear(i);
   // printf("le champ i est a %d\n",ptr->i);


    return 0;
}
