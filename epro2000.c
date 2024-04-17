#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int rng(int min, int max) {
    return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}

int main() {
    char * string = NULL;

    system("clear");
    printf("Quem você quer ressuscitar?\n");
    scanf("%s", string);
    system("clear");
    sleep(rng(3, 6));
    printf("Ressuscitando.\n");
    sleep(rng(2, 4));
    system("clear");
    printf("Ressuscitando..\n");
    sleep(rng(2, 4));
    system("clear");
    printf("Ressuscitando...\n");
    sleep(rng(1, 3));
    printf("Pronto!\n");
    sleep(2);

    return 0;
}
