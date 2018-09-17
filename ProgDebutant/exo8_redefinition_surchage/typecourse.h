#ifndef TYPECOURSE_H
#define TYPECOURSE_H
#include "voiture.h"


class TypeCourse: public Voiture
{
public:
    TypeCourse();
    int finission;
    void getvoiture(char *a,char*b);
};

#endif // TYPECOURSE_H
