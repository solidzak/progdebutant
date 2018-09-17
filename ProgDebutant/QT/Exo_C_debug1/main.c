#include <stdio.h>


void procedure1()
{
    printf("ahhhhhahahahah");
}

void procedure2()
{
    procedure1();
}


int main()
{

    procedure2();
    int i;
    int b;

    i=12;
    b=12;
   // int c= i-b;
   // c=c/0;
    //printf("%i",c);
    return 0;
}
