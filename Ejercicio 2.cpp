#include <iostream>

using namespace std;

///problema 2////
int sumar(int *x,int tam)
{
    int a=0;
    if(tam==0){
      return *(x+tam);}
    else {
        a=*(x+tam)+sumar(x,tam-1);
    }
    return a;
}

int main()
{
    int tam=7;
    int x2[]={1,2,3,4,5,6,7};
    cout<<sumar(x2,tam)<<endl;
    return 0;
}
