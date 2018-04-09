#include <iostream>

using namespace std;

///problema 7////
void concatA(char x[],char y[])
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
    for(int j=0;j<b;j++)
    {
        if(y[j]!='\0')
            x[a+j]=y[j];
    }
}
void concatP(char *x1,char *y1)
{
    int a=0,b=0;
    for(;*x1!='\0';x1++);
    for(;*y1!='\0';y1++,x1++)
    {
        *(x1)=*y1;
    }
}
int main()
{
    char s[]="Mata";
    char t[]="Gente";
    cout<<s<<endl;
    concatA(s,t);
    cout<<s<<endl;

    cout<<endl<<endl;
    char ss[]="policia";
    char tt[]="ladrone";
    cout<<ss<<endl;
    concatP(ss,tt);
    cout<<ss<<endl;
    return 0;
}
