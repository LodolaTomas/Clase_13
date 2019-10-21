#include "funciones.h"

int main()
{
    eAlumno listadoDeAlumnos[3]={{1000,7,'m'},{1002,7,'f'},{1003,7,'m'}};



    cargarDatosALumnos(listadoDeAlumnos,3);
    mostrarDatosAlumnos(listadoDeAlumnos, 3);



    return 0;
}
