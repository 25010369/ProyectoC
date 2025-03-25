#include <stdio.h>

void convertirQuetzales();
void convertirDolares();
void convertirEuros();

int main() {
    int opcion;

    do {
        printf("\nConversor de Monedas\n");
        printf("1. Convertir de Quetzales a Dolares o Euros\n");
        printf("2. Convertir de Dolares a Quetzales o Euros\n");
        printf("3. Convertir de Euros a Quetzales o Dolares\n");
        printf("4. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                convertirQuetzales();
                break;
            case 2:
                convertirDolares();
                break;
            case 3:
                convertirEuros();
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while(opcion != 4);

    return 0;
}

void convertirQuetzales() {
    int opcion;
    float cantidad, resultado;

    printf("\nConvertir Quetzales:\n");
    printf("1. Convertir de Quetzales a Dolares\n");
    printf("2. Convertir de Quetzales a Euros\n");
    printf("Elija una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad de Quetzales: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = cantidad / 7.75; // Ejemplo de tasa de cambio
            printf("%.2f Quetzales = %.2f Dolares\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad / 8.5; // Ejemplo de tasa de cambio
            printf("%.2f Quetzales = %.2f Euros\n", cantidad, resultado);
            break;
        default:
            printf("Opcion no valida.\n");
    }
}

void convertirDolares() {
    int opcion;
    float cantidad, resultado;

    printf("\nConvertir Dolares:\n");
    printf("1. Convertir de Dolares a Quetzales\n");
    printf("2. Convertir de Dolares a Euros\n");
    printf("Elija una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad de Dolares: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = cantidad * 7.75; // Ejemplo de tasa de cambio
            printf("%.2f Dolares = %.2f Quetzales\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad * 0.94; // Ejemplo de tasa de cambio
            printf("%.2f Dolares = %.2f Euros\n", cantidad, resultado);
            break;
        default:
            printf("Opcion no valida.\n");
    }
}

void convertirEuros() {
    int opcion;
    float cantidad, resultado;

    printf("\nConvertir Euros:\n");
    printf("1. Convertir de Euros a Quetzales\n");
    printf("2. Convertir de Euros a Dolares\n");
    printf("Elija una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad de Euros: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = cantidad * 8.5; // Ejemplo de tasa de cambio
            printf("%.2f Euros = %.2f Quetzales\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad * 1.06; // Ejemplo de tasa de cambio
            printf("%.2f Euros = %.2f Dolares\n", cantidad, resultado);
            break;
        default:
            printf("Opcion no valida.\n");
    }
}
