#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array.h"

/* ===== Ëàá. 11 / 14 ===== */

int input_array(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("A[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }
    return n;
}

int print_array_int(const int* arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return n;
}

int index_of_min(const int* arr, int n) {
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_index])
            min_index = i;
    }
    return min_index;
}

/* ===== Ëàá. 16 ===== */

double* full_elements_random(double* ptr_array, int size) {
    for (int i = 0; i < size; i++) {
        ptr_array[i] = (rand() / (double)RAND_MAX) * 2.0 - 1.0;
    }
    return ptr_array;
}

int print_array_double(const double* ptr_array, int size) {
    for (int i = 0; i < size; i++)
        printf("%.3lf ", ptr_array[i]);
    printf("\n");
    return size;
}

double* mix_arrays(
    const double* a, int sizeA,
    const double* b, int sizeB,
    int* sizeD
) {
    int countA = (sizeA + 1) / 2;
    int countB = sizeB / 2;

    *sizeD = countA + countB;
    double* D = malloc(*sizeD * sizeof(double));
    if (!D) return NULL;

    int k = 0;

    for (int i = 0; i < sizeA; i += 2)
        D[k++] = a[i];

    for (int i = 1; i < sizeB; i += 2)
        D[k++] = b[i];

    return D;

}