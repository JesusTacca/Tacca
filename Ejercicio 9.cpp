#include <iostream>

using namespace std;

///problema 9////
bool palindromo(char *x)
{
    int a=0;
    while(*(x+a)!='\0')
    {
        a++;
    }
    for(int i=0;i<(a/2);i++)
    {
        if(x[i]!=x[a-i-1])
            return false;
    }
    return true;
}

int main()
{
    char *cadena="anitalavalatina";
    if(palindromo(cadena))
        cout<<"es palindromo"<<endl;
    else
        cout<<"no es palindromo"<<endl;
    return 0;
}
