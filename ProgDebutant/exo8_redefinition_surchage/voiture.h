#ifndef VOITURE_H
#define VOITURE_H
#include <iostream>

using namespace std;

class Voiture
{
public:
    Voiture();
    int id;
    int model;
    int finission;
    void getvoiture(int nb1,int nb2);
};

#endif // VOITURE_H
