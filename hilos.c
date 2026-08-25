#include <stdio.h>
#include <pthread.h>

void* contar(void* arg) {
    int id = *(int*)arg;
    for (int i = 0; i < 5; i++) {
        printf("Hilo %d: %d\n", id, i);
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t h1, h2;
    int id1 = 1, id2 = 2;

    pthread_create(&h1, NULL, contar, &id1);
    pthread_create(&h2, NULL, contar, &id2);

    pthread_join(h1, NULL);
    pthread_join(h2, NULL);

    printf("Todos los hilos terminaron\n");
    return 0;
}