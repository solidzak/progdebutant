#ifndef MACLASSE_H
#define MACLASSE_H


class Maclasse
{
public:
    Maclasse();
    Maclasse(int heures, int minutes, int secondes);
    Maclasse(int horaire1);
    Maclasse(const Maclasse &he);
    int h;
    int m;
    int s;
    void affiche();

};

#endif // MACLASSE_H
