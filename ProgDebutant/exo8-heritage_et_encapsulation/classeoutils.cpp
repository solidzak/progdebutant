#include "classeoutils.h"


ClasseOutils::ClasseOutils()
{
id=4;
}

void ClasseOutils::getmessage()
{
    cout<<"public method"<<endl;

}

int ClasseOutils::getId() const
{
    return id;
}

void ClasseOutils::setId(int value)
{
    id = value;
}


void ClasseOutils::getmessage2()
{
    cout<<"private method"<<endl;
}

void ClasseOutils::getmessage3()
{
    cout<<"protected method"<<endl;
}
