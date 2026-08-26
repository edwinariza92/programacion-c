#include <stdio.h>
#include <string.h>

int main()
{
    char nombre[20];
    char ciudad[20];
    char completo[40];  // más espacio

    printf("Nombre: ");
    scanf("%s", nombre);
    printf("Ciudad: ");
    scanf("%s", ciudad);

    printf("Longitud nombre: %lu\n", strlen(nombre));
    printf("Longitud ciudad: %lu\n", strlen(ciudad));

    // Construir la frase
    strcpy(completo, nombre);
    strcat(completo, " vive en ");
    strcat(completo, ciudad);
    printf("Frase: %s\n", completo);

    // Comparar
    int iguales = strcmp(ciudad, "Bogota");
    printf("¿Es Bogota? (0=sí): %d\n", iguales);

    // Copiar resultado
    char copia[40];
    strcpy(copia, completo);
    printf("Copia: %s\n", copia);

    return 0;
}

