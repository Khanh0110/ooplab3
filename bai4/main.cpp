
#include "NgayTN.h"



int main() {
    NgayThangNam ngay1;
    NgayThangNam ngay2;
    cout << "Nhap (ngay Thnag Nam)1:" ; cin>> ngay1 ;
    cout << "Nhap (ngay Thnag Nam)2:" ; cin>> ngay2 ;


    int themNgay = 10;
    NgayThangNam ngayCong = ngay1 + themNgay;
    cout << "\nNgay 1 cong " << themNgay << " ngay: " << ngayCong << endl;

    int truNgay = 5;
    NgayThangNam ngayTru = ngay2 - truNgay;
    cout << "Ngay 2 tru " << truNgay << " ngay: " << ngayTru << endl;

    cout << "\nNgay 1 sau khi ++ (tien to): " << ++ngay1 << endl;
    cout << "Ngay 2 sau khi -- (tien to): " << --ngay2 << endl;

    cout << "\nNgay 1++ (hau to): " << ngay1++ << " (Truoc khi thay doi)\n";
    cout << "Sau khi thay doi: " << ngay1 << endl;

    cout << "Ngay 2-- (hau to): " << ngay2-- << " (Truoc khi thay doi)\n";
    cout << "Sau khi thay doi: " << ngay2 << endl;

    cout << "\nSo sanh Ngay 1 va Ngay 2:\n";
    if (ngay1 == ngay2) {
        cout << "Ngay 1 == Ngay 2: True" << endl;
    } else {
        cout << "Ngay 1 == Ngay 2: False" << endl;
    }

    if (ngay1 != ngay2) {
        cout << "Ngay 1 != Ngay 2: True" << endl;
    } else {
        cout << "Ngay 1 != Ngay 2: False" << endl;
    }

    if (ngay1 >= ngay2) {
        cout << "Ngay 1 >= Ngay 2: True" << endl;
    } else {
        cout << "Ngay 1 >= Ngay 2: False" << endl;
    }

    if (ngay1 <= ngay2) {
        cout << "Ngay 1 <= Ngay 2: True" << endl;
    } else {
        cout << "Ngay 1 <= Ngay 2: False" << endl;
    }

    if (ngay1 > ngay2) {
        cout << "Ngay 1 > Ngay 2: True" << endl;
    } else {
        cout << "Ngay 1 > Ngay 2: False" << endl;
    }

    if (ngay1 < ngay2) {
        cout << "Ngay 1 < Ngay 2: True" << endl;
    } else {
        cout << "Ngay 1 < Ngay 2: False" << endl;
    }



    return 0;
}
