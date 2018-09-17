#include "voiture.h"


Voiture::Voiture()
{
    id=1;
    model=11;
    finission=111;
}

void Voiture::getvoiture(int nb1, int nb2)
{
    cout<<"l'id de la voiture est " <<id<<" le model est le suivant "<<model<<" la finnission est "<< finission << " | "<< nb1 << " | "<< nb2 <<endl;
}
