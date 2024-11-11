#include "phanso.h"

Phanso::Phanso() {
    iTu = 0;
    iMau = 0;
}
Phanso::Phanso(int tu, int mau) {
    set(tu, mau);
}
Phanso::Phanso(int tu) {
    set(tu, 1);
}
void Phanso::set(int t, int m) {
    iTu = t;
    iMau = m;
}

//rut gon phan so
void Phanso::rutgon() {
    int a = iTu, b = iMau;

    // Tính GCD
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    int divisor = a;

    // Rút gọn
    iTu /= divisor;
    iMau /= divisor;

    // Đảm bảo mẫu số luôn dương
    if (iMau < 0) {
        iTu = -iTu;
        iMau = -iMau;
    }
}

Phanso Phanso::operator + (Phanso& b) {
    Phanso kq;
    kq.iTu = this->iTu * b.iMau + this->iMau * b.iTu;
    kq.iMau = this->iMau * b.iMau;
    kq.rutgon();
    return kq;
}

Phanso Phanso::operator-(Phanso& b) {
    Phanso kq;
    kq.iTu = this->iTu * b.iMau - this->iMau * b.iTu;
    kq.iMau = this->iMau * b.iMau;
    kq.rutgon();
    return kq;
}

Phanso Phanso::operator*(Phanso& b) {
    Phanso kq;
    kq.iTu = this->iTu * b.iTu;
    kq.iMau = this->iMau * b.iMau;
    kq.rutgon();
    return kq;
}

Phanso Phanso::operator/(Phanso& b) {
    Phanso kq;
    kq.iTu = this->iTu * b.iMau;
    kq.iMau = this->iMau * b.iTu;
    kq.rutgon();
    return kq;
}

bool Phanso::operator==(Phanso& b) {
    return this->iTu * b.iMau == this->iMau * b.iTu;
}

bool Phanso::operator != (Phanso& b) {
    return this->iTu * b.iMau != this->iMau * b.iTu;
}

bool Phanso::operator >= (Phanso& b) {
    return this->iTu * b.iMau >= this->iMau * b.iTu;
}

bool Phanso::operator <= (Phanso& b) {
    return this->iTu * b.iMau <= this->iMau * b.iTu;
}

bool Phanso::operator > (Phanso& b) {
    return this->iTu * b.iMau > this->iMau * b.iTu;
}

bool Phanso::operator < (Phanso& b) {
    return this->iTu * b.iMau < this->iMau * b.iTu;
}

bool Phanso::KT() {
    if (iMau == 0) {
        return true;
    }
    else {
        return false; 
    }
}

int Phanso::getiTu() const {
    return iTu ;
}
int Phanso::getiMau() const {
    return iMau ;
}
istream& operator >> (istream& is, Phanso& ps) {
    is >> ps.iTu >> ps.iMau;
    return is;
}
ostream& operator << (ostream& os,const Phanso& ps) {
    os << ps.iTu << "/" << ps.iMau;
    return os;
}

