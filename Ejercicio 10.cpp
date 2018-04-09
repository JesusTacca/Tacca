#include <iostream>

using namespace std;

///problema 10////
float potencia(int x,int y)
{
    float poten=1.0;
    if (y>0)
    {
        for (int i=0;i<y;i++)
            poten=poten*x;
    }
    else if(y==0)
        poten=1.0;
    else if (y<0)
        for (int i=0;i>y;i--)
            poten=poten/x;
    return poten;
}

float transformar(int *cadena,int x,int y)
{
    float numero=0.0;
    for(int i=0;i<(y-1);i++)
        {
            numero=numero+cadena[i]*potencia(10,(x-1));
            x--;
        }
    return numero;
}
float CadToInt(char *cadena)
{
    int cont=0;
    while(cadena[cont]!='\0')
    {
        cont++;
    }
    int cad[cont];
    int div=-1;
    int p=0;
    int s=0;
    for(int i=0; i<cont;i++)
    {
        if ('a'-cadena[i]==53)
            div=p;
        else if('a'-cadena[i]==49)
            {cad[p]=0;p++;}
	else if('a'-cadena[i]==48)
            {cad[p]=1;p++;}
	else if('a'-cadena[i]==47)
            {cad[p]=2;p++;}
	else if('a'-cadena[i]==46)
            {cad[p]=3;p++;}
	else if('a'-cadena[i]==45)
            {cad[p]=4;p++;}
	else if('a'-cadena[i]==44)
            {cad[p]=5;p++;}
	else if('a'-cadena[i]==43)
            {cad[p]=6;p++;}
	else if('a'-cadena[i]==42)
            {cad[p]=7;p++;}
	else if('a'-cadena[i]==41)
            {cad[p]=8;p++;}
	else if('a'-cadena[i]==40)
            {cad[p]=9;p++;}
	else
            s++;

    }
    float num=0;
    cout<<endl;
    num=transformar(cad,div,cont-s);
    return num;
}
int main()
{
    char *cadena="1122,34";
    cout<<CadToInt(cadena)<<endl;
    return 0;
