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
typedef struct
{
    unsigned int year;
    unsigned int semester;
    unsigned int contadores[4];
    unsigned int *vistos;
    unsigned int num_vistos;
    unsigned int cap_vistos;
} Fila;

int tipo_estudiante(int es_femenino, int es_posgrado)
{
    if (!es_femenino && !es_posgrado)
        return 0;
    else if (es_femenino && !es_posgrado)
        return 1;
    else if (!es_femenino && es_posgrado)
        return 2;
    else
        return 3;
}
int main()
{
    Fila *filas = NULL;
    unsigned int num_filas = 0;
    unsigned int cap_filas = 0;
    unsigned int student_count = 0;
    unsigned int course_count = 0;
    unsigned int enrollements_count = 0;

    FILE *fp;
    fp = fopen("sample_data.bin", "rb");
    if (fp != NULL)
    {
        unsigned char buffer[14];
        fread(buffer, 1, 14, fp);
        student_count = buffer[2] + buffer[3] * 256 + buffer[4] * 65536 + buffer[5] * 16777216;
        course_count = buffer[6] + buffer[7] * 256 + buffer[8] * 65536 + buffer[9] * 16777216;
        enrollements_count = buffer[10] + buffer[11] * 256 + buffer[12] * 65536 + buffer[13] * 16777216;
    }
    else
    {
        printf("no se pudo abrir");
        return 1;
    }

    Estudiante *estudiantes = malloc(student_count * sizeof(Estudiante));
    if (estudiantes == NULL)
    {
        printf("Error de memoria\n");
        return 1;
    }
    else
    {
        fseek(fp, 14, SEEK_SET);
        fread(estudiantes, sizeof(Estudiante), student_count, fp);
    }

    fseek(fp, course_count * sizeof(Curso), SEEK_CUR);
    for (unsigned int i = 0; i < enrollements_count; i++)
    {
        Matricula mat;
        fread(&mat, sizeof(mat), 1, fp);

        int idx = -1;
        for (unsigned int j = 0; j < num_filas; j++)
        {
            if (filas[j].year == mat.year && filas[j].semester == mat.semester)
            {
                idx = j;
                break;
            }
        }

        if (idx == -1)
        {
            if (num_filas == cap_filas)
            {
                unsigned int nueva_cap = (cap_filas == 0) ? 1 : cap_filas * 2;
                Fila *temp = realloc(filas, nueva_cap * sizeof(Fila));
                if (temp == NULL)
                {
                    printf("Error de memoria\n");
                    return 1;
                }
                filas = temp;
                cap_filas = nueva_cap;
            }
            filas[num_filas].year = mat.year;
            filas[num_filas].semester = mat.semester;
            for (int k = 0; k < 4; k++)
            {
                filas[num_filas].contadores[k] = 0;
            }
            filas[num_filas].num_vistos = 0;
            filas[num_filas].cap_vistos = 1;
            filas[num_filas].vistos = malloc(1 * sizeof(unsigned int));
            if (filas[num_filas].vistos == NULL)
            {
                printf("Error de memoria\n");
                return 1;
            }
            idx = num_filas;
            num_filas++;
        }

        int yaContado = 0;
        for (unsigned int v = 0; v < filas[idx].num_vistos; v++)
        {
            if (filas[idx].vistos[v] == mat.student_id)
            {
                yaContado = 1;
                break;
            }
        }

        if (!yaContado)
        {
            if (filas[idx].num_vistos == filas[idx].cap_vistos)
            {
                unsigned int nueva_cap = (filas[idx].cap_vistos == 0) ? 1 : filas[idx].cap_vistos * 2;
                unsigned int *temp = realloc(filas[idx].vistos, nueva_cap * sizeof(unsigned int));
                if (temp == NULL)
                {
                    printf("Error de memoria\n");
                    return 1;
                }
                filas[idx].vistos = temp;
                filas[idx].cap_vistos = nueva_cap;
            }
            filas[idx].vistos[filas[idx].num_vistos] = mat.student_id;
            filas[idx].num_vistos++;

            int es_femenino = (estudiantes[mat.student_id - 1].flags >> 7) & 1;
            int es_posgrado = (estudiantes[mat.student_id - 1].flags >> 6) & 1;
            int tipo = tipo_estudiante(es_femenino, es_posgrado);
            filas[idx].contadores[tipo]++;
        }
    }
    printf("Year | Semester | Male Undergrad | Female Undergrad | Male Grad | Female Grad\n");
    for (unsigned int i = 0; i < num_filas; i++)
    {
        printf("%u | %u | %u | %u | %u | %u\n",
               filas[i].year, filas[i].semester,
               filas[i].contadores[0], filas[i].contadores[1],
               filas[i].contadores[2], filas[i].contadores[3]);
    }
    for (unsigned int i = 0; i < num_filas; i++)
    {
        free(filas[i].vistos);
    }
    fclose(fp);
    free(filas);
    free(estudiantes);

    return 0;
}
