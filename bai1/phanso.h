#ifndef  PHANSO_H
#define  PHANSO_H
#include <iostream>
using namespace std;
class Phanso {
private:
    int iTu, iMau;
public:
    Phanso();
    Phanso(int tu);
    Phanso(int Tu, int Mau);
    void set(int x, int y);
    void rutgon();
    Phanso operator + (Phanso& b);
    Phanso operator - (Phanso& b);
    Phanso operator * (Phanso& b);
    Phanso operator / (Phanso& b);
    bool operator == (Phanso& b);
    bool operator != (Phanso& b);
    bool operator >= (Phanso& b);
    bool operator <= (Phanso& b);
    bool operator > (Phanso& b);
    bool operator < (Phanso& b);
    bool KT();
    int getiTu() const;
    int getiMau() const ;
    friend istream& operator >> (istream& is, Phanso& ps);
    friend ostream& operator << (ostream& os,const Phanso& ps);
};


#endif //PHANSO_H