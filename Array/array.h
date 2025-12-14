#ifndef ARRAYS_H
#define ARRAYS_H

/* ===== Лабораторная 11 / 14 ===== */

int input_array(int* arr, int n);
int print_array_int(const int* arr, int n);
int index_of_min(const int* arr, int n);

/* ===== Лабораторная 16 ===== */

double* full_elements_random(double* ptr_array, int size);
int print_array_double(const double* ptr_array, int size);
double* mix_arrays(
    const double* a, int sizeA,
    const double* b, int sizeB,
    int* sizeD
);


#endif
