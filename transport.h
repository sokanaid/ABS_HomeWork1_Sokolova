//
// Created by Diana on 23.09.2021.
//

#ifndef HOMEWORK1_SOKOLOVA_TRANSPORT_H
#define HOMEWORK1_SOKOLOVA_TRANSPORT_H
//------------------------------------------------------------------------------
// transport.h - содержит описание обобщающего транспортного средства,
//------------------------------------------------------------------------------

#include "ship.h"
#include "train.h"
#include "plane.h"

//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся транспортные средства
struct transport {
    enum key {
        TRAIN, SHIP, PLANE
    };
    key k; // ключ
    // используемые альтернативы    `
    union { // используем простейшую реализацию
        train t;
        ship s;
        plane p;
    };
};
// Ввод обобщенной фигуры
transport *In(ifstream &ifdt);

// Случайный ввод обобщенной фигуры
transport *InRnd();

// Вывод обобщенной фигуры
void Out(transport &t, ofstream &ofst);
void OutGenTest(transport &s, ofstream &ofst);

// Вычисление оптимального времени обобщенного транспорта
double IdealTime(transport &t);
#endif //HOMEWORK1_SOKOLOVA_TRANSPORT_H
