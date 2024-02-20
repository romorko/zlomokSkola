#include <iostream>
#include "Zlomok.h"
#include <fstream>

int main()
{
    /* int a =10;
    int b {15};
    auto c {22};
    auto d {3.14};
    Zlomok Prvy;
    Prvy.vytlacZlomok();
    Zlomok Druhy(2);
    Druhy.setCit();
    Druhy.setMen(10);
    Druhy.vytlacZlomok();
    Zlomok Treti(3,4);
    Treti.vytlacZlomok();
   int prva =1;
    int *pPrva = &prva;
    int & odkazPrva = prva;  //vytvorenie odkazu
    odkazPrva=10;
    std::cout<<prva; //vypise 10*/
    int pocet;
    pocet=Zlomok::getInt("Zadaj pocet prvkov pola:",false,2,100);
    Zlomok *poleZlomkov = Zlomok::generujPoleZlomkov(pocet);
    std::cout<<"Vygenerovane zlomky...";
    Zlomok::vypisPoleZlomkov(poleZlomkov,pocet);
    Zlomok::zapisDoSuboru("vstup.txt",poleZlomkov,pocet);
    delete[] poleZlomkov;
    poleZlomkov = new Zlomok[pocet];
    Zlomok::precitajZoSuboru("vstup.txt",poleZlomkov,pocet);
    Zlomok::vypisPoleZlomkov(poleZlomkov, pocet);
    qsort(poleZlomkov, pocet, sizeof(Zlomok), Zlomok::cmp);
    std::cout<<("Utriedene...");
    Zlomok::vypisPoleZlomkov(poleZlomkov, pocet);
    delete[] poleZlomkov;
    return 0;
}
