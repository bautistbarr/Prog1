#include <stdio.h>
#define DESCUENTO_10 0.10
#define DESCUENTO_20 0.20

// Variable global//
float descuento_global = 0;
// Prototipo de funciones//
float calcular_descuento(float litros);
float calcular_costo(float litros, float costo_por_litro);

int main() {
// Variables locales //
    float litros;
    float costo_por_litro;
    float costo_total;
    float total_final;

    printf("Ingrese la cantidad de litros producidos: ");
    scanf("%f", &litros);

    printf("Ingrese el costo por litro: ");
    scanf("%f", &costo_por_litro);

    costo_total = calcular_costo(litros, costo_por_litro);

    descuento_global = calcular_descuento(litros);

    total_final = costo_total - (costo_total * descuento_global);

    printf("\nCosto total sin descuento: %.2f\n", costo_total);
    printf("Descuento aplicado: %.2f%%\n", descuento_global * 100);
    printf("Costo final de produccion: %.2f\n", total_final);

    return 0;
}

// Función descuento//
float calcular_descuento(float litros) {
    float descuento_local = 0;

    if (litros > 1000) {
        descuento_local = DESCUENTO_20;
    } else if (litros > 500) {
        descuento_local = DESCUENTO_10;
    }

    return descuento_local;
}

// Función costo//
float calcular_costo(float litros, float costo_por_litro) {
    float costo;
    costo = litros * costo_por_litro;
    return costo;
}
