#ifndef ZLOMOK_SKOLA_INOUT_H
#define ZLOMOK_SKOLA_INOUT_H

#include <iostream> //praca so standardnym vstupom a vystupom
#include <fstream>  //praca so subormi
#include <iomanip> //manipulatory ovplyvnujuce vystup

namespace inout  //zalozenie vlastneho menneho priestoru
{
    using std::cout;
    using std::cin;
    using std::setfill; //vyplnovaci znak
    using std::setw; //nastavenie sirky
    using std::setprecision; //nastavenie poctu desatinnych miest
    using std::endl; //odriadkovanie
    using std::left; //zarovnanie vlavo
    using std::right; //zarovnanie vpravo
}

#endif //ZLOMOK_SKOLA_INOUT_H
