#include <iostream>
#include <classefille.h>

using namespace std;

int main()
{
//    ClasseFille *toto= new ClasseFille;

//    toto->getmessagefille();
    //toto->getmessage();
    //toto->i=2;
    //toto->ifille=25;
    //toto->getmessagegrandmere();

    //cout<<"cette variable proviebs de la classe mere int i = "<<toto->i<<endl;
    //cout<<"cette variable proviebs de la classe mere int ifille = "<<toto->ifille<<endl;

    ClasseFille f;
    ClasseMere m;
    ClasseFille f2;

    m.i=28;
    f2.i=2;
    f.i=22;
    cout<<f.i<<endl;
    cout<<f2.i<<endl;

    return 0;
}
