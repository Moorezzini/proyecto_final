#include <stdio.h>

int main() {
    int contGerentes = 0, contHorarios = 0, contComision = 0, continuar;
    float totalGerentes = 0.0, totalHorarios = 0.0, totalComision = 0.0, totalMensual = 0.0;

    int opcion;
    do {
        printf("Ingrese la categoría del empleado: ");
      printf("\n1. Gerente\n");
      printf("\n2. Trabajadores por Horario\n");
      printf( "\n3. Trabajadores con Comisión\n");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("Gerente ingresado. Sueldo semanal: $1380.57\n");
            contGerentes++;
            totalGerentes += 1380.57;
        } else if (opcion == 2) {
            printf("Trabajador con horario ingresado. Ingrese las horas trabajadas: ");
            int horasTrabajadas;
            scanf("%d", &horasTrabajadas);

            if (horasTrabajadas <= 40) {
                totalHorarios += 560.84;
            } else {
                int horasExtras = horasTrabajadas - 40;
                totalHorarios += 560.84 + (horasExtras * 1.5 * 560.84);
            }

            contHorarios++;
        } else if (opcion == 3) {
            printf("Trabajador a comisión ingresado. Ingrese las ventas realizadas: ");
            float ventas;
            scanf("%f", &ventas);
            totalComision += 425.99 + (0.046 * ventas);
            contComision++;
        } else {
            printf("Opción no válida.\n");
        }

        printf("¿Desea agregar otro empleado? (1: Sí, 0: No): ");
        int continuar;
        scanf("%d", &continuar);

        if (continuar == 0) {
            break;
        }

    } while (continuar =! 0);

    totalMensual = totalGerentes + totalHorarios + totalComision;

    printf("\nResumen:\n");
    printf("Cantidad de gerentes: %d\n", contGerentes);
    printf("Cantidad de trabajadores con horario: %d\n", contHorarios);
    printf("Cantidad de trabajadores a comisión: %d\n", contComision);

    printf("\nTotal mensual por categoría:\n");
    printf("Total de gerentes: $%.2f\n", totalGerentes);
    printf("Total de trabajadores con horario: $%.2f\n", totalHorarios);
    printf("Total de trabajadores a comisión: $%.2f\n", totalComision);

    printf("\nTotal mensual de sueldos: $%.2f\n", totalMensual);

return 0;
}