#include <iostream>
#include <afficher.h>
#include <afficher2.h>

using namespace std;

int main()
{
    afficher exo;
    exo.i=251;
    exo.print();

    afficher2 *p=new afficher2;
    p->i2=3;
    p->print2();
    return 0;
}
