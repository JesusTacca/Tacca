#include <iostream>

using namespace std;

///problema 4////
void mostrar(int M[3][3], int tam)
{
    for(int i=0;i<tam;i++)
    {
        for(int j=0;j<tam;j++)
            cout<<M[i][j]<<" ";
        cout<<endl;
    }

}
void MulMat(int x[3][3],int y[3][3], int tam)
{
    int ptrEntero[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    for(int i=0;i<tam;i++)
        for(int j=0;j<tam;j++)
            for(int k=0;k<tam;k++)
                ptrEntero[i][j]=(x[i][k]*y[k][j])+ptrEntero[i][j];
    mostrar(ptrEntero,3);
}
int main()
{
    int tam=3;
    int Matriz1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int Matriz2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    MulMat(Matriz1,Matriz2,tam);
    return 0;
}
