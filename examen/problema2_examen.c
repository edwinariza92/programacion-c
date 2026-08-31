#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nombre[50];
    char telefono[20];
    int activo; // 1 = activo, 0 = eliminado
} Contacto;
void agregarContacto(Contacto **lista, int *total, int *capacidad,
                     int id, char nombre[], char telefono[])
{
    if (*total == *capacidad)
    {
        int nuevaCapacidad = (*capacidad == 0) ? 1: *capacidad *2;
        Contacto *temp = realloc(*lista, nuevaCapacidad * sizeof(Contacto));
        if (temp == NULL)
        {
            printf("Error de memoria\n");
            exit(1);
        }
        *lista = temp;
        *capacidad = nuevaCapacidad;
    }
    int i = *total;
    (*lista)[i].id = id;
    strcpy((*lista)[i].nombre, nombre);
    strcpy((*lista)[i].telefono, telefono);
    (*lista)[i].activo = 1;
    (*total)++;
}
void imprimirContacto(Contacto *lista, int total)
{
    for (int i = 0; i < total; i++)
    {
        printf("ID: %d | Nombre: %s | Telefono: %s\n", lista[i].id, lista[i].nombre, lista[i].telefono);
    }
}
int main()
{
    Contacto *contactos = NULL;
    int total = 0;
    int capacidad = 0;

    agregarContacto(&contactos, &total, &capacidad, 1, "Ana", "1234");
    agregarContacto(&contactos, &total, &capacidad, 2, "Luis", "5678");
    agregarContacto(&contactos, &total, &capacidad, 3, "Maria", "9012");

    imprimirContacto(contactos, total);

    free(contactos);
    return 0;
}
