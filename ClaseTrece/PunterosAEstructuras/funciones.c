#include "funciones.h"

int cargarDatosALumnos(eAlumno* listadoDeAlumnos, int tamAlumnos)
{
    int retorno = -1;
    if(listadoDeAlumnos != NULL && tamAlumnos>0)
    {
        int i;
        for(i=0;i<3;i++)
        {
            printf("Ingrese un legajo:");
            scanf("%d", &((listadoDeAlumnos+i)->legajo));

        }
        retorno = 0;
    }
    return retorno;
}
int mostrarDatosAlumnos(eAlumno* listadoDeAlumnos, int tamAlumnos)
{
    int retorno = -1;
    if(listadoDeAlumnos != NULL && tamAlumnos>0)
    {
        int i;
        for(i=0;i<3;i++)
        {
            printf("%d %.2f %c\n", (listadoDeAlumnos+i)->legajo,(listadoDeAlumnos+i)->nota,(listadoDeAlumnos+i)->sexo);
        }
        retorno = 0;
    }
    return retorno;
}

