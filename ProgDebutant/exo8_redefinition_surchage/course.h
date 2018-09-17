#ifndef COURSE_H
#define COURSE_H
#include "voiture.h"


class Course : public Voiture
{
public:
    Course();

    void getvoiture(int a, int b);
};

#endif // COURSE_H
