#include "thoigian.h"
int main() {
    cout << "Nhap time1 (gio phut giay): ";
    Thoigian time1;
    cin >> time1;

    cout << "Nhap time2 (gio phut giay): ";
    Thoigian time2;
    cin >> time2;

   
    cout << "\nTong time1 va time2: " << time1 + time2 << endl;
    cout << "Hieu time1 va time2: " << time1 - time2 << endl;

    
    int Giaycong = 50;
    cout << "time1 + " << Giaycong << " giay: " << time1 + Giaycong << endl;

    int Giaytru = 30;
    cout << "time1 - " << Giaytru << " giay: " << time1 - Giaytru << endl;

   
    cout << "time1 sau khi ++: " << ++time1 << endl;
    cout << "time1 sau khi i++: " << time1++ << endl;
    cout << "time1 sau khi i++ lan 2: " << time1 << endl;

 
    if (time1 == time2) {
        cout << "time1 == time2: true" << endl;
    } else {
        cout << "time1 == time2: false" << endl;
    }

    if (time1 != time2) {
        cout << "time1 != time2: true" << endl;
    } else {
        cout << "time1 != time2: false" << endl;
    }

    if (time1 > time2) {
        cout << "time1 > time2: true" << endl;
    } else {
        cout << "time1 > time2: false" << endl;
    }

    if (time1 < time2) {
        cout << "time1 < time2: true" << endl;
    } else {
        cout << "time1 < time2: false" << endl;
    }

    if (time1 >= time2) {
        cout << "time1 >= time2: true" << endl;
    } else {
        cout << "time1 >= time2: false" << endl;
    }

    if (time1 <= time2) {
        cout << "time1 <= time2: true" << endl;
    } else {
        cout << "time1 <= time2: false" << endl;
    }

    return 0;
}