//
// Created by Diana on 23.09.2021.
//

#include "ship.h"

// Расчет идельного времени прохождения для корабля
double IdealTime(ship &s) {
    return (double) s.distance / s.speed;
}

// Вывод параметров корабля в поток
void Out(ship &s, ofstream &ofst) {
    ofst << "It is a ship: displacement = "
         << s.displacement << ", type = " << s.type << ", speed = " << s.speed
         << ", distance = " << s.distance
         << ". Ideal time = " << IdealTime(s) << "\n";
}

// Ввод параметров корабля из потока
void In(ship &s, ifstream &ifst) {
    int type;
    ifst >> s.displacement >> type >> s.speed >> s.distance;
    s.type = (shipType)type;
}

// Случайный ввод параметров корабля
void InRnd(ship &s) {
    s.displacement =RandomDisplacement();
    s.type = (shipType)RandomShipType();
    s.speed = RandomSpeed();
    s.distance = RandomDistance();
}