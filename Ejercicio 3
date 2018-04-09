#include <iostream>

using namespace std;

void mostrar(int arr[], int x)
{
    for (int i=0;i<x;i++)
        cout<<arr[i]<<" ";
}
/////////////Insertion Sort///////////////////////////////////////////
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

///////////////////////////Merge Sort/////////////////////////////////

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
}

///////////////////////////////////Quick Sort/////////////////////////////

void quickSort(int arr[], int left, int right)
{
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
int main()
{
    int arr1[] = {12, 11, 13, 5, 6};
    int n = 5;
    mostrar(arr1, n);
    cout<<endl;
    insertionSort(arr1, n);
    mostrar(arr1, n);

    cout<<endl<<endl<<endl;

    int arr2[] = {12, 11, 13, 5, 6, 7, 3, 9};
    int m = 8;
    mostrar(arr2, m);
    cout<<endl;
    mergeSort(arr2, 0, m - 1);
    mostrar(arr2, m);

    cout<<endl<<endl<<endl;
    int arr3[]={4,43,1,3,123,5,7};
    int l=7;
    mostrar(arr3,l);
    cout<<endl;
    quickSort(arr3, 0, l - 1);
    mostrar(arr3,l);
    return 0;
}
