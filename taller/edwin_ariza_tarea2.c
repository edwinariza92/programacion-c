#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned int id;
    unsigned char flags;
    char name[23];
    unsigned int age;
} Estudiante;

typedef struct
{
    unsigned int id;
    char name[32];
    unsigned int credit_hours;
} Curso;

typedef struct
{
    unsigned int student_id;
    unsigned int course_id;
    unsigned int year;
    unsigned int semester;
} Matricula;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Uso: %s <archivo.bin>\n", argv[0]);
        return 1;
    }
    FILE *fp;
    fp = fopen(argv[1], "rb");
    if (fp != NULL)
    {
        unsigned char buffer[14];
        fread(buffer, 1, 14, fp);
        unsigned int student_count = buffer[2] + buffer[3] * 256 + buffer[4] * 65536 + buffer[5] * 16777216;
        unsigned int course_count = buffer[6] + buffer[7] * 256 + buffer[8] * 65536 + buffer[9] * 16777216;
        unsigned int enrollements_count = buffer[10] + buffer[11] * 256 + buffer[12] * 65536 + buffer[13] * 16777216;

        Estudiante *estudiantes = malloc(student_count * sizeof(Estudiante));
        if (estudiantes == NULL)
        {
            printf("Error de memoria\n");
            return 1;
        }
        else
        {
            fread(estudiantes, sizeof(Estudiante), student_count, fp);
        }
        Curso *cursos = malloc(course_count * sizeof(Curso));
        if (cursos == NULL)
        {
            printf("Error de memoria\n");
            return 1;
        }
        else
        {
            fread(cursos, sizeof(Curso), course_count, fp);
        }
        unsigned int *suma_edades = malloc(course_count * sizeof(unsigned int));
        unsigned int *contador = malloc(course_count * sizeof(unsigned int));
        if (suma_edades == NULL || contador == NULL)
        {
            printf("Error de memoria\n");
            free(estudiantes);
            free(cursos);
            fclose(fp);
            return 1;
        }

        for (unsigned int i = 0; i < course_count; i++)
        {
            suma_edades[i] = 0;
            contador[i] = 0;
        }

        for (unsigned i = 0; i < enrollements_count; i++)
        {
            Matricula mat;
            fread(&mat, sizeof(mat), 1, fp);
            for (unsigned int j = 0; j < course_count; j++)
            {
                if (cursos[j].id == mat.course_id)
                {
                    suma_edades[j] += estudiantes[mat.student_id - 1].age;
                    contador[j]++;
                }
            }
        }
        for (unsigned int i = 0; i < course_count; i++)
        {
            float promedio = (float)suma_edades[i] / contador[i];
            printf("Curso: %s,Edad promedio: %.2f\n", cursos[i].name, promedio);
        }
        free(suma_edades);
        free(contador);
        free(estudiantes);
        free(cursos);
        fclose(fp);
    }
    else
    {
        printf("no se pudo abrir");
        return 1;
    }
    return 0;
}
