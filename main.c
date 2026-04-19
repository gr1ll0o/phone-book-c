#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10
char names[MAX][50];
char phones[MAX][20];
int count = 0;

int main() {
    system("cls");

    int opt;
    do {
        printf("-- AGENDA TELEFONICA --\n");
        printf("1. Ver contactos\n");
        printf("2. Agregar contactos\n");
        printf("3. Eliminar contactos\n");
        printf("4. Salir\n\n> ");
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
                        printf("Nro %d. %s (%s)\n", i+1, names[i], phones[i]);
                    }
                }
                printf("\nDesea realizar otra operacion? (CualquierTecla: Si/0: No) ");
                scanf("%s", sel);
                if (strcmp(sel, "0") == 0) return 0;
                system("cls");
            break;
            case 2: // Add contacts
                if (count >= MAX) printf("No te queda espacio. Modifica uno.\n");
                else{
                    printf("--- AGREGAR CONTACTOS ---\n");
                    printf("Nombre?: ");
                    scanf("%s", names[count]);
                    printf("Telefono?: ");
                    scanf("%s", phones[count]);
                    count++; // COUNTER TO MAX
                    system("cls");
                    printf("Contacto añadido.\n");
                }
            break;
            case 3: // Modify contacts
                if (count == 0) printf("No tenes contactos.\n");
                else{
                    int c = count+1;
                    while (c > count)
                    {
                        printf("--- MODIFICAR CONTACTOS ---\n");
                        for (int i = 0; i < 10; i++) {
                            if (strlen(names[i]) != 0 && strlen(phones[i]) != 0) {
                                printf("Nro %d. %s (%s)\n", i + 1, names[i], phones[i]);
                            }
                        }
                        printf("\nIntroduzca el numero de contacto a editar (0 para salir): ");
                        scanf("%d", &c);
                        system("cls");
                        if (c > count) printf("Numero invalido.\n");
                    }

                    printf("Nombre?: ");
                    scanf("%s", names[c-1]);
                    printf("Telefono?: ");
                    scanf("%s", phones[c-1]);
                    system("cls");
                    printf("Contacto modificado.");
                }
            break;
            case 4: // Exit
                printf("Saliendo... ");
                return 0;
            break;
            default:
                printf("Operacion invalida.\n");
            break;
        }
    }while(opt != 4);

    return 0;
}