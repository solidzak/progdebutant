#ifndef MERE_H
#define MERE_H
#include <iostream>

using namespace std;

class Mere
{
public:
    Mere();
    int age;
    int taille;
    int poids;
    virtual void getmessage()=0;
};

#endif // MERE_H
