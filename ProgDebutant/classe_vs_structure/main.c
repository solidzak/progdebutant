#include <stdio.h>
#include <stdlib.h>




void clear (int i2 )
{
   i2=0;
}

typedef struct
{
    int i;
    clear(i);

}test;
int main()
{

    test *ptr = (test*) malloc(sizeof (test));


    ptr->i= 2;
    printf("le champ i est a %d\n",ptr->i);


    return 0;
}
