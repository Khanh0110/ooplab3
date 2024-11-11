#include "NgayTN.h"

NgayThangNam::NgayThangNam() : iNgay(1), iThang(1), iNam(1) {}

NgayThangNam::NgayThangNam(int Nam, int Thang, int Ngay)
    : iNgay(Ngay), iThang(Thang), iNam(Nam) {}

int NgayThangNam::TinhNgay() const {
    int days = iNgay;
    for (int month = 1; month < iThang; month++) {
        days += NTT(month, iNam);
    }
    days += (iNam - 1) * 365 + (iNam - 1) / 4 - (iNam - 1) / 100 + (iNam - 1) / 400;
    return days;
}

bool NgayThangNam::checkNN(int iNam) const {
    return (iNam % 4 == 0 && iNam % 100 != 0) || (iNam % 400 == 0);
}

int NgayThangNam::NTT(int thang, int nam) const {
    static int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (thang == 2 && checkNN(nam)) {
        return 29;
    }
    return days[thang - 1];
}

NgayThangNam NgayThangNam::operator+(int& ngay) {
    NgayThangNam result = *this;
    result.iNgay += ngay;

    while (result.iNgay > NTT(result.iThang, result.iNam)) {
        result.iNgay -= NTT(result.iThang, result.iNam);
        result.iThang++;
        if (result.iThang > 12) {
            result.iThang = 1;
            result.iNam++;
        }
    }
    return result;
}

NgayThangNam NgayThangNam::operator-(int& ngay) {
    NgayThangNam result = *this;
    result.iNgay -= ngay;

    while (result.iNgay <= 0) {
        result.iThang--;
        if (result.iThang < 1) {
            result.iThang = 12;
            result.iNam--;
        }
        result.iNgay += NTT(result.iThang, result.iNam);
    }
    return result;
}

NgayThangNam NgayThangNam::operator -(NgayThangNam& Ngay){
    
}

NgayThangNam NgayThangNam::operator++() {
    iNgay++;
    if (iNgay > NTT(iThang, iNam)) {
        iNgay = 1;
        iThang++;
        if (iThang > 12) {
            iThang = 1;
            iNam++;
        }
    }
    return *this;
}

NgayThangNam NgayThangNam::operator++(int) {
    NgayThangNam temp = *this;
    ++(*this);
    return temp;
}

NgayThangNam NgayThangNam::operator--() {
    iNgay--;
    if (iNgay < 1) {
        iThang--;
        if (iThang < 1) {
            iThang = 12;
            iNam--;
        }
        iNgay = NTT(iThang, iNam);
    }
    return *this;
}

NgayThangNam NgayThangNam::operator--(int) {
    NgayThangNam temp = *this;
    --(*this);
    return temp;
}

bool NgayThangNam::operator==(const NgayThangNam& ngay) const {
    return TinhNgay() == ngay.TinhNgay();
}

bool NgayThangNam::operator!=(const NgayThangNam& ngay) const {
    return TinhNgay() != ngay.TinhNgay();
}

bool NgayThangNam::operator>=(const NgayThangNam& ngay) const {
    return TinhNgay() >= ngay.TinhNgay();
}

bool NgayThangNam::operator<=(const NgayThangNam& ngay) const {
    return TinhNgay() <= ngay.TinhNgay();
}

bool NgayThangNam::operator>(const NgayThangNam& ngay) const {
    return TinhNgay() > ngay.TinhNgay();
}

bool NgayThangNam::operator<(const NgayThangNam& ngay) const {
    return TinhNgay() < ngay.TinhNgay();
}

istream &operator>>(istream &is, NgayThangNam &input) {
    is >> input.iNgay >> input.iThang >> input.iNam ;
    return is;
}

ostream &operator<<(ostream &os, const NgayThangNam &output) {
    os << output.iNgay << "/" << output.iThang << "/" << output.iNam;
    return os;
}
