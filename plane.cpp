//
// Created by Diana on 23.09.2021.
//

#include "plane.h"

double IdealTime(plane &p) {
    return ((double) p.distance) / p.speed;
}

// Вывод параметров самолета в поток
void Out(plane &p, ofstream &ofst) {
    ofst << "It is a plane: flight range = "
         << p.flightRange << ", lifting capacity = " << p.liftingCapacity << ", speed = " << p.speed
         << ", distance = " << p.distance
         << ". Ideal time = " << IdealTime(p) << "\n";
}

void OutGenTest(plane &p, ofstream &ofst) {
    ofst << 3 << ' '
         << p.flightRange << ' ' << p.liftingCapacity << ' ' << p.speed<<' '
         << p.distance << '\n';
}

// Ввод параметров самолета из потока
void In(plane &p, ifstream &ifst) {
    ifst >> p.flightRange >> p.liftingCapacity >> p.speed >> p.distance;

}

// Случайный ввод параметров самолета
void InRnd(plane &p) {
    p.liftingCapacity = RandomDisplacement();
    p.flightRange = RandomDisplacement();
    p.speed = RandomSpeed();
    p.distance = RandomDistance();
}