#include <iostream>

using namespace std;

///problema 5////
int tamanoP(int *x)
{
    if (*x=='\0')
        return 0;
    else
        return 1+tamanoP(x+1);
}
int tamanoA(int x[])
{
    int cont=0;
    while(x[cont]!='\0')
    {
        cont++;
    }
    return cont;
}

int main()
{
    int Ay[]={1,2,3,4,5,6,7,8,9,'\0'};
    int *ptr=Ay;
    cout<<tamanoP(ptr)<<endl;
    cout<<tamanoA(Ay)<<endl;
    return 0;
}
