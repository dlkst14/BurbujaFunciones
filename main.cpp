#include <iostream>
using namespace std;

//DECLARAR FUNCIONES
void ingresar (int arreglo1[], int n);
void ordenar (int arreglo1[], int n);
void imprimir (int arreglo1[], int n);

//LLAMAR A LAS FUNCIONES
int main()
{
    int arreglo1[5];
    ingresar(arreglo1,5);
    ordenar(arreglo1,5);
    imprimir(arreglo1,5);
    return 0;
}

//DESARROLLAR FUNCIONES
void ingresar (int arreglo1[], int n)
{
    cout<<"Ingresar los elementos al arreglo:"<<endl;
    for (int i=0 ; i<n ; i++)//definiremos variables dentro del for
    {
        cin>>arreglo1[i];
    }
}
void ordenar (int arreglo1[], int n)
{
    int aux;
    for (int i=0 ; i<n ; i++)
    {
        for (int j=i+1 ; j<n ; j++)
        {
            if(arreglo1[j]<arreglo1[i])
            {
                aux=arreglo1[i];//Se guarda momentaneamente
                arreglo1[i]=arreglo1[j];
                arreglo1 [j]=aux;
            }
        }
    }
}
void imprimir (int arreglo1[], int n)
{
    int i; //Declarando la variable i fuera del for
    for (i=0 ; i<n ; i++)
    {
        cout<<"|"<<arreglo1[i]<<"|";
    }
}
//PROBANDO BOTON DE + PARA ACTUALIZAR EN GITHUB