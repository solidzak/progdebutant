#ifndef CLASSEOUTILS_H
#define CLASSEOUTILS_H
#include<iostream>
using namespace std;

class ClasseOutils
{
public:
    ClasseOutils();
    int nb;
    void getmessage();
    int getId() const;
    void setId(int value);

private:
    int id;
    void getmessage2();
protected:
    int id2;
    void getmessage3();
};

#endif // CLASSEOUTILS_H
