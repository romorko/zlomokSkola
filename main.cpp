#include <iostream>
#include "Zlomok.h"

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
//    Zlomok A {3,1};
//    Zlomok B {2,7};
//    std::cout<<(A<B)<<std::endl;
//    std::cout<<(A==B)<<std::endl;
//    std::cout<<A<<" + "<<B<<" = "<<(A+B)<<std::endl;
//    std::cout<<A<<" - "<<B<<" = "<<(A-B)<<std::endl;
//    std::cout<<A<<" * "<<B<<" = "<<(A*B)<<std::endl;
//    std::cout<<A<<" : "<<B<<" = "<<(A/B)<<std::endl;
/*    std::cin>>A;
    std::cout<<A;
    Zlomok B;
    std::cout<<B;*/
Zlomok *poleZlomkov = Zlomok::generujPoleZlomkov(3);

delete [] poleZlomkov;
    return 0;
}
