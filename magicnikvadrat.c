#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int M;
    scanf("%d", &M);

    int** a = (int**)malloc(M * sizeof(int*));
    for (int i = 0; i < M; i++)
        a[i] = (int*)malloc(M * sizeof(int));

    int max = M * M;
    int* used = (int*)calloc(max + 1, sizeof(int));

    // Ucitavanje matrice
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] != 0 && a[i][j] <= max)
                used[a[i][j]] = 1;
        }
    }

    // Pronadji nedostajuce brojeve
    int* missing = (int*)malloc(max * sizeof(int));
    int missCount = 0;

    for (int i = 1; i <= max; i++) {
        if (!used[i]) {
            missing[missCount++] = i;
        }
    }

    // Popuni nule
    int idx = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            if (a[i][j] == 0) {
                if (idx < missCount)
                    a[i][j] = missing[idx++];
            }
        }
    }

    // Magicni zbroj
    int magicSum = M * (max + 1) / 2;

    // Provjera redaka
    for (int i = 0; i < M; i++) {
        int sum = 0;
        for (int j = 0; j < M; j++)
            sum += a[i][j];
        if (sum != magicSum) {
            printf("Ovo nije magicni kvadrat");
            return 0;
        }
    }

    // Provjera stupaca
    for (int j = 0; j < M; j++) {
        int sum = 0;
        for (int i = 0; i < M; i++)
            sum += a[i][j];
        if (sum != magicSum) {
            printf("Ovo nije magicni kvadrat");
            return 0;
        }
    }

    // Dijagonale
    int d1 = 0, d2 = 0;
    for (int i = 0; i < M; i++) {
        d1 += a[i][i];
        d2 += a[i][M - 1 - i];
    }

    if (d1 != magicSum || d2 != magicSum) {
        printf("Ovo nije magicni kvadrat");
        return 0;
    }

    // Ispis
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    // Oslobadanje memorije
    for (int i = 0; i < M; i++)
        free(a[i]);
    free(a);
    free(used);
    free(missing);

    return 0;
}
