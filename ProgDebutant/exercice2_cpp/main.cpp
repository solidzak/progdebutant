#include <iostream>

using namespace std;

class affiche
{
public:
    int i;
    void print();

};
void affiche::print()
{
    cout<<i<<endl;

}

int main()
{
    affiche test;
    test.i=32;
    test.print();

    return 0;
}
