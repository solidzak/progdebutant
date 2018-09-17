#include <stdio.h>

void method1()
{
    printf("testostsohdlkjhsdlfkjsdhflksdhflkfhldsifhsdfkjsdhflkhflkj");
}

void method2()
{
    method1();
}
int main()
{
    method2();

    return 0;
}
