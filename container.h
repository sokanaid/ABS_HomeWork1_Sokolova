#ifndef __container__
#define __container__
#include <fstream>
#include <cstdio>
//------------------------------------------------------------------------------
// container.h - содержит тип данных,
// представляющий простейший контейнер
//------------------------------------------------------------------------------

#include "transport.h"

//------------------------------------------------------------------------------
// Простейший контейнер на основе одномерного массива
struct container {
    enum {
        max_len = 10001
    }; // максимальная длина
    int len; // текущая длина
    transport *cont[max_len];
};

// Инициализация контейнера
void Init(container &c);

// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c);

// Ввод содержимого контейнера из указанного потока
void In(container &c, ifstream &ifst);

// Случайный ввод содержимого контейнера
void InRnd(container &c, int size);

// Вывод содержимого контейнера в указанный поток
void Out(container &c, ofstream &ofst);
// Вывод для генерации входных данных в файле.
void OutGenTest(container &c, ofstream &ofst);
// Сортировка Шелла
string ShellSort(container &c);

#endif