#include <stdio.h>

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

int main()
{
    FILE *fp;
    fp = fopen("sample_data.bin", "rb");
    if (fp != NULL)
    {
        // printf("Si se pudo abrir\n");
        unsigned char buffer[14];
        fread(buffer, 1, 14, fp);
        for (int i = 0; i < 14; i++)
        {
            printf("%02x ", buffer[i]);
        }
        unsigned int student_count = buffer[2] + buffer[3] * 256 + buffer[4] * 65536 + buffer[5] * 16777216;
        unsigned int course_count = buffer[6] + buffer[7] * 256 + buffer[8] * 65536 + buffer[9] * 16777216;
        unsigned int enrollements_count = buffer[10] + buffer[11] * 256 + buffer[12] * 65536 + buffer[13] * 16777216;
        printf("Students: %d\n", student_count);
        printf("Courses: %d\n", course_count);
        printf("Enrollments: %d\n", enrollements_count);

        for (int i = 0; i < student_count; i++)
        {
            Estudiante est;
            fread(&est, sizeof(est), 1, fp);
            int es_femenino = (est.flags >> 7) & 1;
            int es_posgrado = (est.flags >> 6) & 1;
            printf("ID: %u, Nombre: %s,Edad: %u,Genero: %s, Nivel: %s", est.id, est.name, est.age, es_femenino ? "Femenino" : "Masculino", es_posgrado ? "Posgrado" : "Pregrado\n");
        }
        for (int i = 0; i < course_count; i++)
        {
            Curso curso;
            fread(&curso, sizeof(curso), 1, fp);
            printf("ID: %u,Name:%s,Credits:%u\n", curso.id, curso.name, curso.credit_hours);
        }
        for (int i = 0; i < enrollements_count; i++)
        {
            Matricula mat;
            fread(&mat, sizeof(mat), 1, fp);
            printf("StudentID: %u, CourseID: %u, Year: %u, Semester: %u\n", mat.student_id, mat.course_id, mat.year, mat.semester);
        }
    }
    else
    {
        printf("no se pudo abrir");
    }
    return 0;
}
