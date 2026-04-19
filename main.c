#include <stdio.h>

#define MAX 10
char names[MAX][50];
int phones[MAX][10];

int main() {
    int opt;
    do {
        printf("-- AGENDA TELEFONICA --\n");
        printf("1. Ver contactos\n");
        printf("2. Agregar contactos\n");
        printf("3. Modificar contactos\n");
        printf("4. Eliminar contactos\n");
        printf("5. Salir\n\n> ");
        scanf("%d", &opt);

        switch(opt) {
            case 1: // View contacts
                printf("--- VER CONTACTOS ---\n");
            break;
            case 2: // Add contacts
                printf("--- AGREGAR CONTACTOS ---\n");
            break;
            case 3: // Modify contacts
                printf("--- MODIFICAR CONTACTOS ---\n");
            break;
            case 4: // Remove contacts
                printf("--- ELIMINAR CONTACTOS ---\n");
            break;
            case 5: // Exit
                printf("Saliendo... ");
                return 0;
            break;
            default:
                printf("Operacion invalida.\n");
            break;
        }
    }while(opt != 5);

    return 0;
}