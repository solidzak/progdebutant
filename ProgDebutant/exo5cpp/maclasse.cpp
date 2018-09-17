#include "maclasse.h"
#include<iostream>

using namespace std;

Maclasse::Maclasse()
{
    h=22;
    m=22;
    s=22;
}

Maclasse::Maclasse(int heures, int minutes, int secondes)
{
        h=heures;
        m=minutes;
        s=secondes;
}

Maclasse::Maclasse(int horaire1)
{
    h=horaire1;
    m=0;
    s=0;
}

Maclasse::Maclasse(const Maclasse &he)
{
    s=he.s+1;
    m=he.m;
    h=he.h;
}



void Maclasse::affiche()
{

    cout<<h<<":"<<m<<":"<<s<<endl;

}
