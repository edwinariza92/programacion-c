#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char titulo[100];
    char autor[50];
    int anio;
    int disponible; // 1 = disponible, 0 = prestado
} Libro;

// FUNCION 1: Inicializar biblioteca
void inicializarBiblioteca(Libro **biblioteca, int *totalLibros, int *capacidad)
{
    *totalLibros = 0;
    *capacidad = 2;
    *biblioteca = malloc(*capacidad * sizeof(Libro));
    if (*biblioteca == NULL)
    {
        printf("Error de memoria\n");
        exit(1);
    }
}

// FUNCION 2: Agregar libro
void agregarLibro(Libro **biblioteca, int *totalLibros, int *capacidad,
                  int id, char titulo[], char autor[], int anio)
{
    if (*totalLibros >= *capacidad)
    {
        int nuevaCapacidad = *capacidad * 2;
        Libro *temp = realloc(*biblioteca, nuevaCapacidad * sizeof(Libro));
        if (temp == NULL)
        {
            printf("Error de memoria\n");
            exit(1);
        }
        *biblioteca = temp;
        *capacidad = nuevaCapacidad;
    }
    int i = *totalLibros;
    (*biblioteca)[i].id = id;
    strcpy((*biblioteca)[i].titulo, titulo);
    strcpy((*biblioteca)[i].autor, autor);
    (*biblioteca)[i].anio = anio;
    (*biblioteca)[i].disponible = 1;
    (*totalLibros)++;
}

// FUNCION 3: Buscar libro por ID
int buscarLibroPorId(Libro *biblioteca, int totalLibros, int id)
{
    for (int i = 0; i < totalLibros; i++)
    {
        if (biblioteca[i].id == id)
        {
            return i;
        }
    }
    return -1;
}
// FUNCION 4: Buscar libros por autor (retorna cuantos encontró)
int buscarLibrosPorAutor(Libro *biblioteca, int totalLibros, char autor[])
{
    int encontrado = 0;
    for (int i = 0; i < totalLibros; i++)
    {
        if (strcmp(biblioteca[i].autor, autor) == 0)
        {
            printf("ID: %d | Título: %s | Autor: %s | Año: %d | %s\n", biblioteca[i].id, biblioteca[i].titulo, biblioteca[i].autor,
                   biblioteca[i].anio,
                   biblioteca[i].disponible ? "Disponible" : "Prestado");
            encontrado++;
        }
    }
    return encontrado;
}

// FUNCION 5: Prestar libro (cambiar disponible a 0)Tutor
void prestarLibro(Libro *biblioteca, int totalLibros, int id)
{
    int indice = buscarLibroPorId(biblioteca, totalLibros, id);
    if (indice == -1)
    {
        printf("Libro no encontrado\n");
        
    }
    else if ((biblioteca[indice].disponible == 1))
    {
        (biblioteca[indice].disponible = 0);
    }else
    {
        printf("ya esta prestado\n");
    }     
}

// FUNCION 6: Calcular libros disponibles
int contarDisponibles(Libro *biblioteca, int totalLibros)
{
    int contador =0;
    for (int i = 0; i < totalLibros; i++)
    {
        if (biblioteca[i].disponible == 1)
        {
            (contador) ++;
        }        
    }
    return contador;    
}

// FUNCION 7: Liberar biblioteca
void liberarBiblioteca(Libro **biblioteca, int *totalLibros, int *capacidad)
{
    free(*biblioteca);
    *biblioteca = NULL;
    *totalLibros = 0;
    *capacidad = 0;
}

int main()
{
    Libro *biblioteca = NULL;
    int totalLibros = 0;
    int capacidad = 0;

    inicializarBiblioteca(&biblioteca, &totalLibros, &capacidad);

    agregarLibro(&biblioteca, &totalLibros, &capacidad, 1, "Cien Años de Soledad", "García Márquez", 1967);
    agregarLibro(&biblioteca, &totalLibros, &capacidad, 2, "Don Quijote", "Cervantes", 1605);
    agregarLibro(&biblioteca, &totalLibros, &capacidad, 3, "La Sombra del Viento", "Zafón", 2001);

    printf("=== Biblioteca inicial ===\n");
    for (int i = 0; i < totalLibros; i++)
    {
        printf("ID: %d | Título: %s | Autor: %s | Año: %d | %s\n",
               biblioteca[i].id, biblioteca[i].titulo, biblioteca[i].autor,
               biblioteca[i].anio,
               biblioteca[i].disponible ? "Disponible" : "Prestado");
    }

    // Agregar un 4to libro (debería hacer realloc)
    agregarLibro(&biblioteca, &totalLibros, &capacidad, 4, "1984", "Orwell", 1949);

    printf("\n=== Después de agregar libro 4 ===\n");
    for (int i = 0; i < totalLibros; i++)
    {
        printf("ID: %d | Título: %s | Autor: %s | Año: %d | %s\n",
               biblioteca[i].id, biblioteca[i].titulo, biblioteca[i].autor,
               biblioteca[i].anio,
               biblioteca[i].disponible ? "Disponible" : "Prestado");
    }

    // Prestar libro 2
    prestarLibro(biblioteca, totalLibros, 2);

    printf("\n=== Después de prestar libro 2 ===\n");
    for (int i = 0; i < totalLibros; i++)
    {
        printf("ID: %d | Título: %s | Autor: %s | Año: %d | %s\n",
               biblioteca[i].id, biblioteca[i].titulo, biblioteca[i].autor,
               biblioteca[i].anio,
               biblioteca[i].disponible ? "Disponible" : "Prestado");
    }

    // Buscar por autor
    printf("\n=== Buscar por autor 'Orwell' ===\n");
    int encontrados = buscarLibrosPorAutor(biblioteca, totalLibros, "Orwell");
    printf("Libros encontrados: %d\n", encontrados);

    // Contar disponibles
    int disponibles = contarDisponibles(biblioteca, totalLibros);
    printf("\nLibros disponibles: %d\n", disponibles);

    // Liberar memoria
    liberarBiblioteca(&biblioteca, &totalLibros, &capacidad);
    printf("\nMemoria liberada. Total libros: %d, Capacidad: %d\n", totalLibros, capacidad);

    return 0;
}