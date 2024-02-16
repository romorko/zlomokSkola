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
    Zlomok *poleZlomkov = Zlomok::generujPoleZlomkov(10);
    std::cout<<"Vygenerovane...";
    Zlomok::vypisPoleZlomkov(poleZlomkov,10);
    Zlomok::zapisDoSuboru("vstup.txt",poleZlomkov,10);
    delete[] poleZlomkov;
    poleZlomkov = new Zlomok[10];
    Zlomok::precitajZoSuboru("vstup.txt",poleZlomkov,10);
    /*std::ofstream fout;
    fout.open("vstup.txt");
    if (!fout.is_open())
    {
        std::cout << "Subor sa nepodarilo otvorit!";
        return 1;
    }

    for (int i = 0; i < 10; ++i)
    {
        fout << poleZlomkov[i] << " ";
    }

    fout.close();
     delete []poleZlomkov;

    std::ifstream fin("vstup.txt");
    if (!fin.is_open())
    {
        std::cout << "Subor sa nepodarilo otvorit!";
        return 1;
    }
    poleZlomkov = new Zlomok[10];
    for (int i = 0; i < 10; ++i)
    {
        fin >> poleZlomkov[i];
    }
    std::cout<<("Nacitane...");*/
    Zlomok::vypisPoleZlomkov(poleZlomkov, 10);
    qsort(poleZlomkov, 10, sizeof(Zlomok), Zlomok::cmp);
    std::cout<<("Utriedene...");
    Zlomok::vypisPoleZlomkov(poleZlomkov, 10);
    delete[] poleZlomkov;
    return 0;
}
