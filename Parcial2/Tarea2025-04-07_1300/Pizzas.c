#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_LENGTH 50

// Prototipos de funciones
void limpiarBuffer();
void convertirAMinusculas(char *str);

int main() {
    char pizza[MAX_LENGTH];
    char ingrediente[MAX_LENGTH];
    int opcionValida = 0;

    do {
        printf("\n=== PIZZERÍA CODE::BLOCKS ===\n");
        printf("Tipos de pizza disponibles:\n");
        printf("1. Vegetariana\n");
        printf("2. No vegetariana\n");
        printf("Seleccione su pizza: ");
        scanf("%s", pizza);
        limpiarBuffer();

        convertirAMinusculas(pizza);

        if (strcmp(pizza, "vegetariana") == 0) {
            printf("\nPizza Vegetariana seleccionada\n");
            printf("Ingredientes base: Queso mozzarella y Tomate\n");
            printf("Ingredientes adicionales disponibles:\n");
            printf("- Tofu\n");
            printf("- Pimiento\n");
            printf("Elija su ingrediente adicional: ");
            scanf("%s", ingrediente);
            limpiarBuffer();

            convertirAMinusculas(ingrediente);

            if (strcmp(ingrediente, "tofu") == 0 || strcmp(ingrediente, "pimiento") == 0) {
                printf("\n¡Pedido confirmado!\n");
                printf("Pizza Vegetariana con: Mozzarella, Tomate y %s\n", ingrediente);
                opcionValida = 1;
            } else {
                printf("\nError: Ingrediente no disponible\n");
            }
        }
        else if (strcmp(pizza, "no vegetariana") == 0 || strcmp(pizza, "no") == 0) {
            printf("\nPizza No Vegetariana seleccionada\n");
            printf("Ingredientes base: Queso mozzarella y Tomate\n");
            printf("Ingredientes adicionales disponibles:\n");
            printf("- Pepperoni\n");
            printf("- Jamon\n");
            printf("- Salmon\n");
            printf("Elija su ingrediente adicional: ");
            scanf("%s", ingrediente);
            limpiarBuffer();

            convertirAMinusculas(ingrediente);

            if (strcmp(ingrediente, "pepperoni") == 0 || strcmp(ingrediente, "jamon") == 0 || strcmp(ingrediente, "salmon") == 0) {
                printf("\n¡Pedido confirmado!\n");
                printf("Pizza No Vegetariana con: Mozzarella, Tomate y %s\n", ingrediente);
                opcionValida = 1;
            } else {
                printf("\nError: Ingrediente no disponible\n");
            }
        }
        else {
            printf("\nError: Tipo de pizza no reconocido\n");
            printf("Por favor, elija entre 'Vegetariana' o 'No vegetariana'\n");
        }

        if (opcionValida) {
            printf("\n¿Desea hacer otro pedido? (si/no): ");
            scanf("%s", pizza);
            limpiarBuffer();
            convertirAMinusculas(pizza);

            if (strcmp(pizza, "no") == 0) {
                printf("\nGracias por su pedido. ¡Buen provecho!\n");
                break;
            } else {
                opcionValida = 0;
            }
        }
    } while (1);

    return 0;
}

void limpiarBuffer() {
    while (getchar() != '\n');
}

void convertirAMinusculas(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}
