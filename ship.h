//
// Created by Diana on 23.09.2021.
//
#include <fstream>
using namespace std;

# include "rnd.h"
#ifndef HOMEWORK1_SOKOLOVA_SHIP_H
#define HOMEWORK1_SOKOLOVA_SHIP_H
enum shipType {
    LINER, TUGSHIP, TANKER
};
struct ship {
    int displacement;
    shipType type;
    int speed;
    double distance;
};
// Ввод параметров прямоугольника из файла
void In(ship &s, ifstream &ifst);

// Случайный ввод параметров прямоугольника
void InRnd(ship &s);

// Вывод параметров прямоугольника в форматируемый поток
void Out(ship &s, ofstream &ofst);

// Вычисление периметра прямоугольника
double IdealTime(ship &s);
#endif //HOMEWORK1_SOKOLOVA_SHIP_H
