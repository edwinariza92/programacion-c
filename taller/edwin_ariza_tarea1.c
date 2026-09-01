#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned int id;
    unsigned char flags;
    char name[23];
    unsigned int age;
} Estudiante;


int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        printf("Uso: %s <archivo.bin><edad_min><edad_max>\n", argv[0]);
        return 1;
    }
    FILE *fp;
    fp = fopen(argv[1], "rb");
    if (fp != NULL)
    {
        unsigned char buffer[14];
        fread(buffer, 1, 14, fp);
        unsigned int student_count = buffer[2] + buffer[3] * 256 + buffer[4] * 65536 + buffer[5] * 16777216;
        unsigned int edad_min = atoi(argv[2]);
        unsigned int edad_max = atoi(argv[3]);
        for (unsigned int i = 0; i < student_count; i++)
        {
            Estudiante est;
            fread(&est, sizeof(est), 1, fp);
            int es_femenino = (est.flags >> 7) & 1;
            if (est.age >= edad_min && est.age <= edad_max)

            {
                printf("Nombre: %s,Edad: %u,Genero: %s\n", est.name, est.age, es_femenino ? "Femenino" : "Masculino");
            }
        }
    }
    else
    {
        printf("no se pudo abrir");
    }

    return 0;
}
