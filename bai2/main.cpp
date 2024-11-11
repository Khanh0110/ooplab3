#include "sophuc.h"
int main() {
	SoPhuc z1 , z2 ;
	cout << "Nhap so phuc z1 (x1  y1 ): "; cin >> z1;
	cout << "Nhap so phuc z2 (x2  y2 ): "; cin >> z2;
	cout << "Tong 2 so phuc z1 + z2 = " << z1 + z2 << endl;
	cout << "Hieu 2 so phuc z1 - z2 = " << z1 - z2 << endl;
	cout << "Tich 2 so phuc z1 * z2 = " << z1 * z2 << endl;
	cout << "Thuong 2 so phuc z1 : z2 = " << z1 / z2 << endl;
	if (z1 == z2) {
		cout << "Hai so phuc bang nhau" << endl;

	}
	else {
		cout << "Khong bang nhau" << endl;
	}
	if (z1 != z2) {
		cout << "Hai so phuc Khac nhau" << endl;

	}
	else {
		cout << "Hai So Phuc bang nhau" << endl;
	}
	return 0;
}