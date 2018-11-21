
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int option = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();
    LinkedList* listaFiltrada = NULL;

    do{
            system("cls");
            printf("\tMENU PRINCIPAL\n\n");
            printf("1. Cargar los datos de los empleados desde el archivo data.csv (modo texto). \n");
            printf("2. Cargar los datos de los empleados desde el archivo data.bin (modo binario). \n");
            printf("3. Alta de empleado\n");
            printf("4. Modificar datos de empleado\n");
            printf("5. Baja de empleado\n");
            printf("6. Listar empleados\n");
            printf("7. Ordenar empleados\n");
            printf("8. Guardar los datos de los empleados en el archivo data.csv (modo texto).\n");
            printf("9. Guardar los datos de los empleados en el archivo data.bin (modo binario).\n");
            printf("10. Filtrar lista por horas trabajadas mayor a 200\n");
            printf("11. Filtrar lista por nombre\n");
            printf("12. Guardar lista filtrada\n");
            printf("13. Salir\n");







            printf("\n\nIngrese una opcion: ");
            scanf("%d",&option);

        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                system("pause");
                break;
            case 2:
                controller_loadFromBinary("data.bin", listaEmpleados);
                printf("Se han cargado todos los empleados");
                system("pause");
                break;
            case 3:
                controller_addEmployee(listaEmpleados);
                system("pause");
                break;
            case 4:
                controller_editEmployee(listaEmpleados);
                break;
            case 5:
                controller_removeEmployee(listaEmpleados);
                break;
            case 6:
                controller_ListEmployee(listaEmpleados);
                system("pause");
                break;
            case 7:
                controller_sortEmployee(listaEmpleados);
                break;
            case 8:
                controller_saveAsText("data.csv",listaEmpleados);
                break;
            case 9:
                controller_saveAsBinary("data.bin",listaEmpleados);
                break;
            case 10:
                listaFiltrada = ll_filter(listaEmpleados, employee_filterByHoras);
                controller_ListEmployee(listaFiltrada);
                system("pause");
                break;
            case 11:
                listaFiltrada = ll_filter(listaEmpleados, employee_filterByName);
                controller_ListEmployee(listaFiltrada);
                system("pause");
                break;
            case 12:
                controller_saveAsText("listaFiltrada.cvs",listaFiltrada);
                system("pause");
                break;
            case 13:
                break;
            case 14:
                break;
            case 15:
                break;
            default:
                break;


        }
    }while(option != 13);
    return 0;
}
