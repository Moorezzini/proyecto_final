#include <stdio.h>

int main(void) {
  int contempleadostotal = 0; 
  int contgerentes = 0;
  int conthorarios = 0;
  int contcomision = 0;
  int tipoempleado, horasextra, horastrabajadas, ventas, continuar;
  float sueldototal = 0.0;
  float montototalgerentes = 0.0;
  float montototalhorarios = 0.0;
  float montototalcomision = 0.0;
  float montototal = 0.0;
  float porcentajeventas;

  do {
    printf("Ingrese que categoria de empleado:\n ");
    printf("1. Gerente\n");
    printf("2. Trabajador con horario\n");
    printf("3. Trabajador por comision\n");
    scanf("%d", &tipoempleado);
    contempleadostotal++;

    switch (tipoempleado) {
      case 1:
        printf("Usted tiene un sueldo fijo de $1380.5\n");
        montototalgerentes += 1380.5;
        contgerentes++;
        break;
      case 2:
        printf("Ingrese las horas trabajadas: ");
        scanf("%d", &horastrabajadas);
        if (horastrabajadas < 40) {
          printf("Usted no ha trabajado las horas suficientes\n");
        }
          if(horastrabajadas>40){
          printf("Ingrese las horas extras trabajadas: ");
          scanf("%d", &horasextra);
          }
          sueldototal = 560.84 + (horasextra * 1.5);
          printf("Su sueldo es de: $%.2f\n", sueldototal);
        conthorarios++;
        break;
      case 3:
        printf("Ingrese ganancia de ventas realizadas: ");
        scanf("%d", &ventas);
        if (ventas == 0) {
          printf("Usted no tiene comisión\n");
        } else {
          porcentajeventas= ventas+(ventas*0.0046);
          sueldototal = porcentajeventas+425.99;
          
          printf("Su sueldo total es: $%.2f\n", sueldototal);
          montototalcomision += sueldototal;
          contcomision++;
        }
        
        break;
      default:
        printf("Opción no válida\n");
        break;
    }

    printf("¿Desea añadir a otro empleado?\n");
    printf("1. Si\n");
    printf("2. No\n");
    scanf("%d", &continuar);

  }while (continuar == 1);

  printf("Gerentes: %d\n", contgerentes);
  printf("Trabajadores con horario: %d\n", conthorarios);
  printf("Trabajadores por comision: %d\n", contcomision);
  printf("Total de empleados: %d\n", contempleadostotal);

  montototal = montototalgerentes + montototalhorarios + montototalcomision;
  montototalgerentes=sueldototal*contgerentes;
  printf("Total de sueldos de Gerentes: $%.2f\n", montototalgerentes);
  montototalhorarios=sueldototal*conthorarios;
  
  printf("Total de sueldos de Trabajadores con horario: $%.2f\n", montototalhorarios);
  montototalcomision=sueldototal*contcomision;
  printf("Total de sueldos de Trabajadores por comision: $%.2f\n", montototalcomision);
  montototal=montototalgerentes+montototalhorarios+montototalcomision;
  printf("Total de sueldos: $%.2f\n", montototal);

  return 0;
  
    }
