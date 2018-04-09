#include <iostream>

using namespace std;

///problema 8////
void intercambiarA(char cadena[])
{
    int cont=0;
    while(cadena[cont]!='\0')
    {
        cont++;
    }
    int pos=cont/2;
    for(int i=0;i<(pos);i++)
    {
        char temp=cadena[i];
        cadena[i]=cadena[cont-1-i];
        cadena[cont-1-i]=temp;
    }
}

void intercambiarP(char *cad)
{
    char *temp=cad;
    for(;*cad!='\0';cad++);
    cad--;
    for(;*temp!='\0';temp++,cad--)
    {

        if((cad-temp)>0)
        {
            char p=*cad;
            *cad=*temp;
            *temp=p;
        }
    }
}

int main()
{
    char cadena2[]="yo juego troll bosque";
    cout<<cadena2<<endl;
    intercambiarA(cadena2);
    cout<<cadena2<<endl;

    cout<<endl<<endl;

    char cadena1[]="reporten esa basura";
    cout<<cadena1<<endl;
    intercambiarP(cadena1);
    cout<<cadena1<<endl;
    return 0;
}
