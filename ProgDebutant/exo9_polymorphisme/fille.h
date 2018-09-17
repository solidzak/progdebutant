#ifndef FILLE_H
#define FILLE_H
#include "mere.h"

class Fille : public Mere
{
public:
    Fille();
    int amis;
    void getmessage();
};

#endif // FILLE_H
