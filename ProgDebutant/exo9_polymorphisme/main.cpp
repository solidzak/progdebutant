
#include "fille.h"
#include <iostream>

using namespace std;

int main()
{
    //Mere * test1;
    Mere * test2;

   // Mere m;
    Fille f;

    //test1=&m;
    test2=&f;

    //test1->getmessage();
    test2->getmessage();

// le polymorphisme consiste a mettre virtual devant la déclaration de la fonction pour qu'elle puisse etre traité correctement par un pointeur dans le main

    return 0;
}
