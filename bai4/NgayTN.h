#ifndef NGAYTN_H
#define NGAYTN_H
#include <iostream>
using namespace std;

class NgayThangNam {
private:
    int iNgay, iThang, iNam;

public:
    NgayThangNam();
    NgayThangNam(int Nam, int Thang, int Ngay);
    int TinhNgay() const;
    bool checkNN(int iNam) const;
    int NTT(int thang, int nam) const;

    NgayThangNam operator+(int& ngay);
    NgayThangNam operator-(int& ngay);
    NgayThangNam operator - (NgayThangNam & Ngay) ;
    NgayThangNam operator++();    // Tăng trước
    NgayThangNam operator++(int); // Tăng sau
    NgayThangNam operator--();    // Giảm trước
    NgayThangNam operator--(int); // Giảm sau

    bool operator==(const NgayThangNam& ngay) const;
    bool operator!=(const NgayThangNam& ngay) const;
    bool operator>=(const NgayThangNam& ngay) const;
    bool operator<=(const NgayThangNam& ngay) const;
    bool operator>(const NgayThangNam& ngay) const;
    bool operator<(const NgayThangNam& ngay) const;

    friend istream &operator>>(istream &is, NgayThangNam &input);
    friend ostream &operator<<(ostream &os, const NgayThangNam &output);
};

#endif  