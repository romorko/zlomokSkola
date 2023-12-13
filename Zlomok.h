#ifndef ZLOMOK_SKOLA_ZLOMOK_H
#define ZLOMOK_SKOLA_ZLOMOK_H

class Zlomok
{
private:
    int cit;
    int men;
public:
    [[nodiscard]] int getCit() const;
    void setCit(int other);
    [[nodiscard]] int getMen() const;
    void setMen(int other);
    void nacitajZlomok(); //vypyta si citatel a menovatel a ulozi ich do objektu


};


#endif //ZLOMOK_SKOLA_ZLOMOK_H
