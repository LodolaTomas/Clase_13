/**
    PUNTEROS Y ESTRUCTURAS

    printf("%d", sizeof(eAlumno));//12 -> es toda la estructura
    printf("%d", sizeof(eAlumno*));//4 -> es un entero

    pAlumno = unAlumno; -> ERROR: unAlumno no es una direccion de memoria, es un dato de tipo eAlumno (por valor)
    pAlumno = &unAlumno;

    *******************************
    printf("%d %.2f %c\n", (*pAlumno).legajo,(*pAlumno).nota,(*pAlumno).sexo); -> primer tengo que darle prioridad a la estructura de alumno
    printf("%d %.2f %c\n", pAlumno->legajo, pAlumno->nota, pAlumno->sexo);
    ********************************

    ********************************
    EJ1:
    printf("Ingrese un legajo:");
    scanf("%d", &(*pAlumno).legajo);
    printf("Ingrese un nota:");
    scanf("%f", &(*pAlumno).nota);
    printf("Ingrese un sexo:");
    scanf("%c", &(*pAlumno).sexo);

    EJ 2:
    printf("Ingrese un legajo:");
    scanf("%d", &(pAlumno->legajo);
    printf("Ingrese un nota:");
    scanf("%f", &(pAlumno->nota);
    printf("Ingrese un sexo:");
    scanf("%c", &(pAlumno->sexo);
    ********************************


*/
