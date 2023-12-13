//
// Created by roman on 8.12.2023.
//
#include <iostream>
#include "Zlomok.h"

int Zlomok::getCit() const
{
    return cit;
}

void Zlomok::setCit(int other)
{
    //cit=other;
    this->cit=other;
}

int Zlomok::getMen() const
{
    return men;
}

void Zlomok::setMen(int other)
{
    men = other;
}

void Zlomok::nacitajZlomok()
{
    std::cout<<"Zadaj citatel:";
    std::cin>>cit;
    std::cout<<"Zadaj menovatel:";
    std::cin>>men;
}
