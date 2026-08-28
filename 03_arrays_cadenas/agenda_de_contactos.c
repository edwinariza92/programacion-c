#include <stdio.h>
#include <string.h>

#define MAX_CONTACTOS 5
#define MAX_CHAR 20

void agregarContacto(char nombres[][MAX_CHAR], char telefonos[][MAX_CHAR], int* total)
{
    if (*total >= MAX_CONTACTOS) {
        printf("¡Agenda llena! No se pueden agregar más contactos.\n");
        return;
    }
    
    printf("Nombre: ");
    scanf("%s", nombres[*total]);
    
    printf("Teléfono: ");
    scanf("%s", telefonos[*total]);
    
    (*total)++;
    printf("Contacto agregado exitosamente.\n");
}

void listarContactos(char nombres[][MAX_CHAR], char telefonos[][MAX_CHAR], int total)
{
    if (total == 0) {
        printf("No hay contactos en la agenda.\n");
        return;
    }
    
    printf("\n=== LISTA DE CONTACTOS ===\n");
    for (int i = 0; i < total; i++) {
        printf("%d. %s - %s\n", i + 1, nombres[i], telefonos[i]);
    }
    printf("==========================\n");
}

void buscarContacto(char nombres[][MAX_CHAR], char telefonos[][MAX_CHAR], int total)
{
    char busqueda[MAX_CHAR];
    int encontrado = 0;
    
    printf("Nombre a buscar: ");
    scanf("%s", busqueda);
    
    for (int i = 0; i < total; i++) {
        if (strcmp(nombres[i], busqueda) == 0) {
            printf("Encontrado: %s - %s\n", nombres[i], telefonos[i]);
            encontrado = 1;
            break;  // ya lo encontramos, no seguir buscando
        }
    }
    
    if (encontrado == 0) {
        printf("Contacto no encontrado.\n");
    }
}

void editarContacto(char nombres[][MAX_CHAR], char telefonos[][MAX_CHAR], int total)
{
    char busqueda[MAX_CHAR];
    int encontrado = 0;
    
    printf("Nombre del contacto a editar: ");
    scanf("%s", busqueda);
    
    for (int i = 0; i < total; i++) {
        if (strcmp(nombres[i], busqueda) == 0) {
            printf("Contacto actual: %s - %s\n", nombres[i], telefonos[i]);
            
            printf("Nuevo nombre: ");
            scanf("%s", nombres[i]);
            
            printf("Nuevo teléfono: ");
            scanf("%s", telefonos[i]);
            
            printf("Contacto editado exitosamente.\n");
            encontrado = 1;
            break;
        }
    }
    
    if (encontrado == 0) {
        printf("Contacto no encontrado.\n");
    }
}

void eliminarContacto(char nombres[][MAX_CHAR], char telefonos[][MAX_CHAR], int* total)
{
    char busqueda[MAX_CHAR];
    int encontrado = 0;
    
    printf("Nombre del contacto a eliminar: ");
    scanf("%s", busqueda);
    
    for (int i = 0; i < *total; i++) {
        if (strcmp(nombres[i], busqueda) == 0) {
            // Desplazar hacia arriba
            for (int j = i; j < *total - 1; j++) {
                strcpy(nombres[j], nombres[j + 1]);
                strcpy(telefonos[j], telefonos[j + 1]);
            }
            (*total)--;
            printf("Contacto eliminado.\n");
            encontrado = 1;
            break;
        }
    }
    
    if (encontrado == 0) {
        printf("Contacto no encontrado.\n");
    }
}

int main()
{
    // Arrays paralelos para almacenar contactos
    char nombres[MAX_CONTACTOS][MAX_CHAR];
    char telefonos[MAX_CONTACTOS][MAX_CHAR];
    int total = 0;  // cuántos contactos hay
    
     int opcion;
    
    do {
        printf("\n=== AGENDA DE CONTACTOS ===\n");
        printf("1. Agregar contacto\n");
        printf("2. Listar contactos\n");
        printf("3. Buscar contacto\n");
        printf("4. Editar contacto\n");
        printf("5. Eliminar contacto\n");
        printf("6. Salir\n");
        printf("===========================\n");
        printf("Opción: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                printf("-> Agregar contacto\n");
                agregarContacto(nombres, telefonos, &total);
                break;
            case 2:
                printf("-> Listar contactos\n");
                listarContactos(nombres, telefonos, total);
                break;
            case 3:
                printf("-> Buscar contacto\n");
                buscarContacto(nombres, telefonos, total);
                break;
            case 4:
                printf("-> Editar contacto\n");
                editarContacto(nombres, telefonos, total);
                break;
            case 5:
                printf("-> Eliminar contacto\n");
                eliminarContacto(nombres, telefonos, &total);
                break;
            case 6:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida\n");
                break;
        }
    } while (opcion != 6);
    
    return 0;
}