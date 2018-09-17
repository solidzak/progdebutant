#include "calendriermeteo.h"
#include<iostream>

using namespace std;

CalendrierMeteo::CalendrierMeteo()
{
 annees = 1;
 mois = 1;
 jour = 1;
}

void CalendrierMeteo::affiche()
{

    switch(m)
    {
        case soleil  : cout<<annees<<"/"<<mois<<"/"<<jour<<" il fera "<<"soleil"<<"\n"<<endl;   break;
        case nuageux: cout<<annees<<"/"<<mois<<"/"<<jour<<" il fera "<<"nuageux"<<"\n"<<endl; break;
        case pluie : cout<<annees<<"/"<<mois<<"/"<<jour<<" il fera "<<"pluie"<<"\n"<<endl;  break;
        case orageux : cout<<annees<<"/"<<mois<<"/"<<jour<<" il fera "<<"orageux"<<"\n"<<endl;  break;
    }


}

void CalendrierMeteo::getmessage(int i)
{

    cout<<"je suis une fonction static qui envoi juste un message"<<endl;
    cout<<"le chiffre saisie est le suivant "<<i<<endl;
}

