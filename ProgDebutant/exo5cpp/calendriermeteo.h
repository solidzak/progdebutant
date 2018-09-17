#ifndef CALENDRIERMETEO_H
#define CALENDRIERMETEO_H

enum Meteo {soleil, nuageux, pluie, orageux} ;

class CalendrierMeteo
{
public:
    CalendrierMeteo();
    int annees;
    int mois;
    int jour;
    Meteo m;
    void affiche();
    static void getmessage(int i);
};

#endif // CALENDRIERMETEO_H
