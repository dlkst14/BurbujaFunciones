#include <iostream>
using namespace std;
//DECLARAMOS FUNCIONES
void ordenar(int arreglo[],int n);

//LLAMADO DE LA FUNCION
int main()
{
    int arreglo[5]= {2,3,1,5,4};
    int i,j,aux,min;
    //Arreglo original
    cout<<"Arreglo original:";
    for (i=0;i<5;i++)
    {
        cout<<"|"<<arreglo[i]<<"|";
    }
    cout<<endl;
    ordenar(arreglo,5);
    return 0;
}
//CONSTRUCCIONDE  FUNCIONES
void ordenar(int arreglo[],int n)
{
    cout<<"Arreglo ordenado por seleccion:";
    int i,j,aux,min;
    for (i=0;i<5;i++)
    {
        min = i; //se guardara temporalmente
        for(j=i+1;j<5;j++ )
        {
            if(arreglo[j]<arreglo[min])
            {
                min=j;
            }
        }
        aux=arreglo[i]; //se guardara temporalmente
        arreglo[i]=arreglo[min];//se actualiza el guardado
        arreglo[min]=aux;
    }
    for(i=0;i<5;i++)  // esto tambien podemos escribirlo en el main, pero con return
    {
        cout<<"|"<<arreglo[i]<<"|";
    }
    //return 0;  NO se usa "return" en la construccion con void
}
