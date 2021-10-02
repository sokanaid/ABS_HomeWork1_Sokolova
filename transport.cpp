//------------------------------------------------------------------------------
// shape.cpp - содержит процедуры связанные с обработкой обобщенной фигуры
// и создания произвольной фигуры
//------------------------------------------------------------------------------

#include "transport.h"

//------------------------------------------------------------------------------
// Ввод параметров обобщенного транспорта из файла
transport* In(ifstream &ifst) {
    transport *sp;
    int k;
    ifst >> k;
    switch(k) {
        // train
        case 1:
            sp = new transport;
            sp->k = transport::TRAIN;
            In(sp->t, ifst);
            return sp;
        case 2:
            sp = new transport;
            sp->k = transport::SHIP;
            In(sp->s, ifst);
            return sp;
        case 3:
            sp = new transport;
            sp->k = transport::PLANE;
            In(sp->p, ifst);
            return sp;
        default:
            return 0;
    }
}

// Случайный ввод обобщенного транспорта
transport *InRnd() {
    transport *sp;
    auto k = rand() % 3 + 1;
    switch(k) {
        case 1:
            sp = new transport;
            sp->k = transport::TRAIN;
            InRnd(sp->t);
            return sp;
        case 2:
            sp = new transport;
            sp->k = transport::SHIP;
            InRnd(sp->s);
            return sp;
        case 3:
            sp = new transport;
            sp->k = transport::PLANE;
            InRnd(sp->p);
            return sp;
        default:
            return 0;
    }
}

//------------------------------------------------------------------------------
// Вывод параметров текущего транспорта в поток
void Out(transport &s, ofstream &ofst) {
    switch(s.k) {
        case transport::TRAIN:
            Out(s.t, ofst);
            break;
        case transport::SHIP:
            Out(s.s, ofst);
            break;
        case transport::PLANE:
            Out(s.p, ofst);
            break;
        default:
            ofst << "Incorrect transport!" << endl;
    }
}

// Вывод параметров текущего транспорта в поток для генерации теста
void OutGenTest(transport &s, ofstream &ofst) {
    switch(s.k) {
        case transport::TRAIN:
            OutGenTest(s.t, ofst);
            break;
        case transport::SHIP:
            OutGenTest(s.s, ofst);
            break;
        case transport::PLANE:
            OutGenTest(s.p, ofst);
            break;
        default:
            ofst << "Incorrect transport!" << endl;
    }
}

//------------------------------------------------------------------------------
// Вычисление оптимального времени транспорта
double IdealTime(transport &t) {
    switch(t.k) {
        case transport::TRAIN:
            return IdealTime(t.t);
            break;
        case transport::SHIP:
            return IdealTime(t.s);
            break;
        case transport::PLANE:
            return IdealTime(t.p);
            break;
        default:
            return 0.0;
    }
}
