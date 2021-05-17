#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 1

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;

} ePais;



void actualizarRecuperado(ePais paisRecibido[],int cantidad,int recuperadosDia);
void invertirCadena(char cadena[]);
void ordenarCaracteres(char cadena[]);

int main()
{
    ePais pais[TAM]= {{100,"Argentina",5,10,4}};
    char palabra[20]="algoritmo";
    char palabraDos[20] = "UTN-FRA";

    printf("Pais desactualizado\n\n%4d %15s %4d %4d %4d\n\n\n",pais[0].id,pais[0].nombre,pais[0].infectados,pais[0].recuperados,pais[0].muertos);

    actualizarRecuperado(pais,TAM,5);

    printf("Pais actualizado\n\n%4d %15s %4d %4d %4d\n\n\n",pais[0].id,pais[0].nombre,pais[0].infectados,pais[0].recuperados,pais[0].muertos);

    ordenarCaracteres(palabra);

    printf("Palabra ordenada: %s\n", palabra);

    invertirCadena(palabraDos);


    printf("Palabra invertida: %s\n", palabraDos);



    return 0;
}

void actualizarRecuperado(ePais pais[],int cantidad,int recuperadosDia)
{
    if(pais!=NULL && cantidad>0)
    {
        for(int i=0; i<cantidad; i++)
        {
            pais[i].recuperados = pais[i].recuperados + recuperadosDia;
        }
    }
}

void invertirCadena(char cadena[])
{
    int largo;
    largo = strlen(cadena);
    if(cadena != NULL)
    {
        for(int i=0;; i++)
        {
            cadena[i] = cadena[largo];
            largo=largo-1;
            if(cadena[i]=='\0')
            {
                break;
            }
        }
    }

}

void ordenarCaracteres(char cadena[])
{
    char aux;
    int largo;
    largo = strlen(cadena);
    if(cadena!=NULL)
    {
        for(int i=0; i<largo-1; i++)
        {
            for(int j=i+1; j<largo; j++)
            {
                if(cadena[i]>cadena[j])
                {
                    aux = cadena[i];
                    cadena[i] = cadena[j];
                    cadena[j] = aux;
                }
            }
        }
    }
}
