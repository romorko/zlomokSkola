#include <iostream>
#include "Zlomok.h"

int main()
{
    Zlomok Prvy;
    Prvy.setCit(10);
    Prvy.setMen(20);
    Prvy.nacitajZlomok();
    std::cout<<Prvy.getCit()<<std::endl<<Prvy.getMen()<<std::endl;
    return 0;
}
