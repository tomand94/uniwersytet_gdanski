// 5. Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy, a następnie wypisze zawartość tej tablicy od początku i od końca.

#include <stdio.h>
#define LENGHT 6

int main() {
    int tablica[LENGHT];

    printf("Podaj 6 liczb całkowitych do tablicy.\n");

    for (int i = 1; i <= LENGHT; i++) {
        tablica[i] = scanf("%d", &tablica[i]);
    }


    for (int i =1; i <= LENGHT; i++) {
        printf ("Element numer %d = %d\n", i, tablica[i]);
    }
}