/**
 * Программа сортировки выбором
 * Copyright (c) <2023> <Гордеев Никита>
 * This code is lisenced under a MIT-style licence.
 */

#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Функция обмена местами переменных
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int N) {
    int i, j, min_idx;
    for (i = 0; i < N - 1; i++) {
        min_idx = i;
        // Найдём минимальный элемент в оставшемся несортированном массиве
        for (j = i + 1; j < N; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Поменять местами найденный минимальный элемент с первым элементом
        if (min_idx != i) {
            swap(&arr[min_idx], &arr[i]);
        }
    }
}

int main() {
    // Откроем файл input.txt для чтения
    ifstream fin("input.txt");
    int N;
    fin >> N;
    int arr[N];
    for (int i = 0; i < N; ++i) {
        fin >> arr[i];
    }
    fin.close();

    // Сортировка
    selectionSort(arr, N);

    // Запись ответа
    ofstream fout("output.txt");
    for (int i = 0; i < N; ++i) {
        fout << arr[i] << " ";
    }
    fout.close();

    return 0;
}

// Суть сортировки
// 1) В неотсортированном подмассиве ищется локальный максимум (минимум).
// 2) Найденный максимум (минимум) меняется местами с последним (первым)
// элементом в подмассиве. 3) Если в массиве остались неотсортированные
// подмассивы — смотри пункт 1.

// https://nicknixer.ru/programmirovanie/schitat-znacheniya-iz-input-txt-i-zapisat-v-output-txt-na-c/