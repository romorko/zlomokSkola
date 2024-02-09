#ifndef ZLOMOK_SKOLA_ZLOMOK_H
#define ZLOMOK_SKOLA_ZLOMOK_H
#include <execution>
class Zlomok
{
    class ExNiejeCislo
            : public std::exception //trieda podla ktorej vytvorime objekt vynimky, odvodena od triedy exception
    {
    private:
        const char *sprava;
    public:
        explicit ExNiejeCislo(const char *text) : sprava(text)
        {}; //definicia metody je priamo sucastou prototypu, telo metody je prazdne {}
        [[nodiscard]] const char *dajSpravu() const
        { return sprava; }; //definicia je priamo sucastou deklaracie, telo definicie obsahuje len jeden prikaz
    };

    class ExMimoInterval : public std::exception
    {
    public:
        const char * what() const noexcept override   //noexcept = tato metoda nebude vyhadzovat vynimku
        {                                               //override = nasa definicia prepisuje definiciu z triedy exception
            return "Cislo je mimo stanoveneho intervalu!";
        }
    };

private:
    int cit;
    int men;
public:
    Zlomok(); //bezparametricky konstruktor
    explicit Zlomok(int otherCit); //pretazeny konstruktor s jednym parametrom
    Zlomok(int otherCit, int otherMen); //pretazeny konstruktor s dvoma parametrami
    [[nodiscard]] int getCit() const;
    void setCit(int other = 1);
    [[nodiscard]] int getMen() const;
    void setMen(int other = 1);
    friend std::ostream &operator<<(std::ostream &os, const Zlomok &other);
    friend std::istream &operator>>(std::istream &is, Zlomok &other);
    Zlomok operator+(const Zlomok &other) const;
    Zlomok operator+(int other) const;
    const Zlomok &operator++();
    Zlomok operator++(int nevyuzity);
    friend Zlomok operator+(int cislo, const Zlomok &other);
    Zlomok operator-(const Zlomok &other) const;
    Zlomok operator-(int other) const;
    friend Zlomok operator-(int cislo, const Zlomok &other);
    Zlomok operator/(const Zlomok &other) const;
    Zlomok operator*(const Zlomok &other) const;
    bool operator<(const Zlomok &other) const;
    bool operator==(const Zlomok &other) const;
    static Zlomok generujZlomok();
    static Zlomok * generujPoleZlomkov(int pocet); //vygeneruje pole s pocet zlomkami na hromade a vrati poiner nan
    static void vypisPoleZlomkov(const Zlomok *pole, int pocet);
    static int cmp(const void * p1, const void *p2);
private:
    void naZakladnyTvar();
    static int NSD(int a, int b);
    static int generujInt(int min=-20, int max=20, bool nulaPovolena= true);
    static int getInt(const char * text="Zadaj cele cislo:",bool nulaPovolena= true,int min=-100, int max=100);
};


#endif //ZLOMOK_SKOLA_ZLOMOK_H
