#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

int main()
{
    int option = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();

    do{
            system("cls");
            printf("\tMENU PRINCIPAL\n\n");
            printf("1. Cargar los datos de los empleados desde el archivo data.csv (modo texto). \n");
            printf("2. Listar empleados\n");
            printf("3. Calcular sueldo de empleados\n");
            printf("4. Guardar los datos de los empleados en el archivo nuevaData.csv (modo texto).\n");


            printf(". \n");
            printf(". \n");
            printf(". \n");







            printf("\n\nIngrese una opcion: ");
            scanf("%d",&option);

        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                system("pause");
                break;
            case 2:
                controller_ListEmployee(listaEmpleados);
                system("pause");
                break;
            case 3:
                obtenerSueldos(listaEmpleados,employee_filterByHoras);
                break;
            case 4:
                controller_saveAsText("nuevaData.csv",listaEmpleados);
                printf("\n");
                system("pause");
                break;
            case 5:
                break;
            case 6:

                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
//                listaFiltrada = ll_filter(listaEmpleados, employee_filterByHoras);
//                controller_ListEmployee(listaFiltrada);
//                system("pause");
                break;
            case 11:
//                listaFiltrada = ll_filter(listaEmpleados, employee_filterByName);
//                controller_ListEmployee(listaFiltrada);
//                system("pause");
                break;
            case 12:
//                controller_saveAsText("listaFiltrada.cvs",listaFiltrada);
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
    }while(option != 5);
    return 0;
}
