#include "phanso.h"
using namespace std;

int main() {
	Phanso a, b;
	while (a.KT()) {
		cout << "Nhap phan so a: "; cin >> a;
	}
	while (b.KT()) {
		cout << "Nhap phan so b: "; cin >> b;
	}
	
	cout << "Tong hai phan so a + b = " << a + b << '\n';
	cout << "Hieu hai phan so a - b = " << a - b << '\n';
	cout << "Tich hai phan so a x b = " << a * b << '\n';
	if (b.getiTu() == 0) {
		cout << "Khong thuc hien duoc phep chia.\n";
	}
	else {
		cout << "Thuong hai phan so a/b = " << a / b;
	}
	if (a == b) {
		cout << "\nHai phan so bang nhau" ;
	}
	else {
		cout << "\nHai phan so khong bang nhau";
	}
	if (a != b) {
		cout << "\nHai phan so khong bang nhau";
	}
	else {
		cout << "\nHai phan so bang nhau";
	}

	if (a > b) {
		cout << "\nPhan so a lon hon phan so b";
	}
	else {
		cout << "\nPhan so a khong lon hon phan so b";
	}

	if (a < b) {
		cout << "\nPhan so a nho hon phan so b";
	}
	else {
		cout << "\nPhan so a khong nho hon phan so b";
	}

	if (a >= b) {
		cout << "\nPhan so a lon hon hoac bang phan so b";
	}
	else {
		cout << "\nPhan so a nho hon phan so b";
	}

	if (a <= b) {
		cout << "\nPhan so a nho hon hoac bang phan so b";
	}
	else {
		cout << "\nPhan so a lon hon phan so b";
	}
	return 0;
}