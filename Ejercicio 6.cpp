#include <iostream>

using namespace std;

///problema 6////
void copiarA(char x[],char y[])
{
    int a=0,b=0;
    while(x[a]!='\0')
    {
        a++;
    }
    while(y[b]!='\0')
    {
        b++;
    }
    for(int j=0;j<a;j++)
        x[j]=' ';
    for(int j=0;j<b;j++)
        x[j]=y[j];
}
void copiarP(char *x1,char *y1)
{
    for(;*x1!='\0';++x1,++y1)
    {
        if(*y1!='\0')
            *x1=*y1;
        else
            *x1=' ';
    }
}
int main()
{
    char s[]="MataMas";
    char t[]="Gente";
    cout<<s<<endl;
    copiarA(s,t);
    cout<<s<<endl;

    char ss[]="policia";
    char tt[]="ladron";
    cout<<ss<<endl;
    copiarP(ss,tt);
    cout<<ss<<endl;
    return 0;
}
