#include <iostream>

using namespace std;

class affiche
{
public:
    int i;
    void print(int membre)
    {
        cout<<membre<<endl;
    }
};

void trier(int &a, int &b)
{

    if (a < b)
    {
      int c=a;
      a=b;
      b=c;
    }

}

//void trier(int *ptr1,int *ptr2)

//{

//    if (*ptr1 < *ptr2)
//    {
//      int c=*ptr1;
//      *ptr1=*ptr2;
//      *ptr2=c;
//    }

//}
int somme (int a, int b, int c =0, int d=0);

int somme (int a, int b, int c , int d)
{
    int result;

    result=a+b+c+d;


    return result;
}

int main()
{
    int nb1=5;
    int nb2=3;
    int cal;

   //trier(nb1,nb2);
   cal=somme(nb1,nb2);
   //trier(&nb1,&nb2);
   //std::cout<<"a="<<nb1<<"\nb="<<nb2<<std::endl;
   std::cout<<"a="<<nb1<<"\n+"<<"\nb="<<nb2<<"\n="<<somme(nb1,nb2)<<std::endl;
    return 0;
}
