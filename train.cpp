//
// Created by Diana on 23.09.2021.
//
#include "train.h"

// Расчет идеального времени прохождения для поезда
double IdealTime(train &t) {
    return (double) t.distance / t.speed;
}

// Вывод параметров поезда в поток
void Out(train &t, ofstream &ofst) {
    ofst << "It is a train: number of railway carriage = "
         << t.numberOfRailwayCarriage << ", speed = " << t.speed
         << ", distance = " << t.distance
         << ". Ideal time = " << IdealTime(t) << "\n";
}

void OutGenTest(train &t, ofstream &ofst) {
    ofst << 1 << ' ' << t.numberOfRailwayCarriage << ' ' << t.speed << ' ' << t.distance << ' ' << '\n';
}

// Ввод параметров поезда из потока
void In(train &t, ifstream &ifst) {
    ifst >> t.numberOfRailwayCarriage >> t.speed >> t.distance;
}

// Случайный ввод параметров поезда
void InRnd(train &t) {
    t.numberOfRailwayCarriage = Random();
    t.speed = RandomSpeed();
    t.distance = RandomDistance();
}
