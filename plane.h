//
// Created by Diana on 23.09.2021.
//
#include <fstream>

using namespace std;

# include "rnd.h"

#ifndef HOMEWORK1_SOKOLOVA_PLANE_H
#define HOMEWORK1_SOKOLOVA_PLANE_H
struct plane {
    int flightRange,
            liftingCapacity;
    int speed;
    double distance;
};

// Ввод параметров прямоугольника из файла
void In(plane &p, ifstream &ifst);

// Случайный ввод параметров прямоугольника
void InRnd(plane &p);

// Вывод параметров прямоугольника в форматируемый поток
void Out(plane &p, ofstream &ofst);

// Вычисление периметра прямоугольника
double IdealTime(plane &p);

#endif //HOMEWORK1_SOKOLOVA_PLANE_H
