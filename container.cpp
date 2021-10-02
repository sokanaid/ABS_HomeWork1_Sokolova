//------------------------------------------------------------------------------
// container_Constr.cpp - содержит функции обработки контейнера
//------------------------------------------------------------------------------
#include "container.h"

//------------------------------------------------------------------------------
// Инициализация контейнера
void Init(container &c) {
    c.len = 0;
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c) {
    for (int i = 0; i < c.len; i++) {
        delete c.cont[i];
    }
    c.len = 0;
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void In(container &c, ifstream &ifst) {
    int i = 0;
    while (!ifst.eof()) {
        if(c.len>= c.max_len){
            printf("Container overflow.");
            break;
        }

        if ((c.cont[c.len] = In(ifst)) != 0) {
            c.len++;
        }
        /*if (i % 10 == 0) { printf("%i", i);
            printf("\n");}
        i++;*/
    }
}

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void InRnd(container &c, int size) {
    while (c.len < size) {
        if ((c.cont[c.len] = InRnd()) != nullptr) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void Out(container &c, ofstream &ofst) {
    ofst << "Container contains " << c.len << " elements." << endl;
    for (int i = 0; i < c.len; i++) {
        ofst << i << ": ";
        Out(*(c.cont[i]), ofst);
    }
}

// Вывод содержимого контейнера в указанный поток
void OutGenTest(container &c, ofstream &ofst) {
    for (int i = 0; i < c.len; i++) {
        OutGenTest(*(c.cont[i]), ofst);
    }
}

//------------------------------------------------------------------------------
// Сортировка Шелла
string ShellSort(container &c) {
    int first = 0, last = c.len;
    for (auto d = (last - first) / 2; d != 0; d /= 2)
        for (auto i = first + d; i != last; ++i)
            for (auto j = i; j - first >= d && IdealTime(*c.cont[j]) < IdealTime(*c.cont[(j - d)]); j -= d) {
                auto tmp = *c.cont[j];
                *c.cont[j] = *c.cont[(j - d)];
                *c.cont[(j - d)] = tmp;
            }
    return "Container was sorted.";
}