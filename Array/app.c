#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "array.h"

#define N 10

int lab11_14(void);
int lab16(void);

int main() {
    setlocale(LC_ALL, "RUS");
    srand(time(NULL));

    puts("Лабораторные работы 11, 14, 16\n");

    lab11_14();
    lab16();

    return 0;
}

/* ===== Лабораторные 11 и 14 ===== */

int lab11_14(void) {
    int A[N];

    puts("Ëàá. 11 / 14: Работа с массивом");
    input_array(A, N);

    int min_index = index_of_min(A, N);

    printf("\nМинимальный элемент: A[%d] = %d\n",
        min_index + 1, A[min_index]);
    printf("Количество элементов до минимального: %d\n",
        min_index);

    return 0;
}

/* ===== Лабораторная 16 ===== */

int lab16(void) {
    int sizeA = 10 + rand() % 41;
    int sizeB = 10 + rand() % 41;

    double* A = malloc(sizeA * sizeof(double));
    double* B = malloc(sizeB * sizeof(double));

    if (!A || !B) {
        puts("Ошибка выделения памяти");
        return -1;
    }

    full_elements_random(A, sizeA);
    full_elements_random(B, sizeB);

    printf("\nМассив A:\n");
    print_array_double(A, sizeA);

    printf("\nМассив B:\n");
    print_array_double(B, sizeB);

    int sizeD;
    double* D = mix_arrays(A, sizeA, B, sizeB, &sizeD);

    printf("\nМассив D (чётные A + нечётные B):\n");
    print_array_double(D, sizeD);

    free(A);
    free(B);
    free(D);

    return 0;

}