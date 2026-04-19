#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10
char names[MAX][50];
char phones[MAX][10];

int main() {
    system("cls");

    strcpy(names[0], "Thiago");
    strcpy(phones[0], "1173606182");
    int opt;
    do {
        printf("-- AGENDA TELEFONICA --\n");
        printf("1. Ver contactos\n");
        printf("2. Agregar contactos\n");
        printf("3. Modificar contactos\n");
        printf("4. Eliminar contactos\n");
        printf("5. Salir\n\n> ");
        scanf("%d", &opt);

        system("cls");
        switch(opt) {
            case 1: // View contacts
                char sel[10];
                printf("--- VER CONTACTOS ---\n");
                for (int i = 0;i<10;i++) {
                    if (strlen(names[i]) == 0 && strlen(phones[i]) == 0) {
                        printf("Nro %d. [VACIO]\n", i+1);
                    }else{
                        printf("Nro %d. %s (%s)\n", i, names[i], phones[i]);
                    }
                }
                printf("\nDesea realizar otra operacion? (CualquierTecla: Si/0: No) ");
                scanf("%s", sel);
                if (strcmp(sel, "0") == 0) return 0;
                system("cls");
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