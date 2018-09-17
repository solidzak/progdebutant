#include <iostream>
#include <maclasse.h>
#include <calendriermeteo.h>

using namespace std;

int main()
{

    int n = 29;
    Maclasse *temp1= new Maclasse;
    Maclasse temp2(10,11,12);
    Maclasse temp3=6;
    temp3 = temp2.h;
    Maclasse temp4 =temp2;


    CalendrierMeteo *today= new CalendrierMeteo;

    today->annees=2018;
    today->mois=7;
    today->jour=24;
    today->m=soleil;
    today->affiche();
    CalendrierMeteo::getmessage(n);



//    temp1->affiche();
//    temp2.affiche();
//    temp3.affiche();
//    temp4.affiche();

    return 0;
}
