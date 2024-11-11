#include "thoigian.h"

Thoigian::Thoigian() : iGio(0), iPhut(0), iGiay(0) {}

Thoigian::Thoigian(int Gio, int Phut, int Giay) {
    iGio = Gio % 24;
    iPhut = Phut % 60;
    iGiay = Giay % 60;
}

int Thoigian::TinhGiay() {
    return (this->iGio * 60 * 60) + (this->iPhut * 60) + this->iGiay;
}

Thoigian Thoigian::TinhLaiGio(int& Giay) {
    Thoigian time;
    Giay %= (24 * 60 * 60);  // Limit Giay to 24 hours
    time.iGio = Giay / (60 * 60);
    Giay %= (60 * 60);
    time.iPhut = Giay / 60;
    Giay %= 60;
    time.iGiay = Giay;
    return time;
}

Thoigian Thoigian::operator + (int& Giay) {
    Thoigian time;
    int obj1 = this->TinhGiay() + Giay;
    time = TinhLaiGio(obj1);
    return time;
}

Thoigian Thoigian::operator - (int& Giay) {
    Thoigian time;
    int obj1 = this->TinhGiay() - Giay;
    if (obj1 < 0) {
        obj1 += (24 * 60 * 60);  // Wrap around if negative
    }
    time = TinhLaiGio(obj1);
    return time;
}

Thoigian Thoigian::operator + (Thoigian& a) {
    int obj1 = this->TinhGiay() + a.TinhGiay();
    Thoigian time = TinhLaiGio(obj1);
    return time;
}

Thoigian Thoigian::operator - (Thoigian& a) {
    int obj1 = this->TinhGiay() - a.TinhGiay();
    if (obj1 < 0) {
        obj1 += (24 * 60 * 60);  // Wrap around if negative
    }
    Thoigian time = TinhLaiGio(obj1);
    return time;
}

// Tiền tố ++i
Thoigian Thoigian::operator ++ () {
    this->iGiay++;
    if (this->iGiay >= 60) {
        this->iGiay = 0;
        this->iPhut++;
        if (this->iPhut >= 60) {
            this->iPhut = 0;
            this->iGio++;
            if (this->iGio >= 24) {
                this->iGio = 0;
            }
        }
    }
    return *this;
}

// Hậu tố i++
Thoigian Thoigian::operator ++ (int) {
    Thoigian temp = *this;  // Lưu đối tượng hiện tại
    this->iGiay++;
    if (this->iGiay >= 60) {
        this->iGiay = 0;
        this->iPhut++;
        if (this->iPhut >= 60) {
            this->iPhut = 0;
            this->iGio++;
            if (this->iGio >= 24) {
                this->iGio = 0;
            }
        }
    }
    return temp;  // Trả về đối tượng trước khi tăng
}

bool Thoigian::operator == (Thoigian& a) {
    return this->iGio == a.iGio && this->iPhut == a.iPhut && this->iGiay == a.iGiay;
}

bool Thoigian::operator != (Thoigian& a) {
    return !(*this == a);
}

bool Thoigian::operator >= (Thoigian& a) {
    return this->TinhGiay() >= a.TinhGiay();
}

bool Thoigian::operator <= (Thoigian & a) {
    return this->TinhGiay() <= a.TinhGiay();
}

bool Thoigian::operator > (Thoigian& a) {
    return this->TinhGiay() > a.TinhGiay();
}

bool Thoigian::operator < (Thoigian& a) {
    return this->TinhGiay() < a.TinhGiay();
}

istream& operator >> (istream& is, Thoigian& t) {
    is >> t.iGio >> t.iPhut >> t.iGiay;
    t.iGio %= 24;
    t.iPhut %= 60;
    t.iGiay %= 60;
    return is;
}

ostream& operator << (ostream& os, const Thoigian& t) {
    os << t.iGio << "h" << t.iPhut << "p" << t.iGiay << "s";
    return os;
}
