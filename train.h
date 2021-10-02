//
// Created by Diana on 23.09.2021.
//
#include <fstream>
using namespace std;

# include "rnd.h"
#ifndef HOMEWORK1_SOKOLOVA_TRAIN_H
#define HOMEWORK1_SOKOLOVA_TRAIN_H
struct train {
    int numberOfRailwayCarriage;
    int speed;
    double distance;
};
// Ввод параметров прямоугольника из файла
void In(train &t, ifstream &ifst);

// Случайный ввод параметров прямоугольника
void InRnd(train &t);

// Вывод параметров прямоугольника в форматируемый поток
void Out(train &t, ofstream &ofst);
void OutGenTest(train &t, ofstream &ofst);
// Вычисление периметра прямоугольника
double IdealTime(train &t);
#endif //HOMEWORK1_SOKOLOVA_TRAIN_H
