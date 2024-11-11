
#include "sophuc.h"

SoPhuc::SoPhuc() {
	dThuc = 0;
	dAo = 0;
}

SoPhuc::SoPhuc(int thuc, int ao) {
	dThuc = thuc;
	dAo = ao;
}


SoPhuc operator+(SoPhuc& a, SoPhuc& b) {
	SoPhuc* kq = new SoPhuc();
	kq->dThuc = a.dThuc + b.dThuc;
	kq->dAo = a.dAo + b.dAo;
	return*kq;
}

SoPhuc operator-(SoPhuc& a, SoPhuc& b) {
	SoPhuc kq;
	kq.dThuc = a.dThuc - b.dThuc;
	kq.dAo = a.dAo - b.dAo;
	return kq;
}

SoPhuc operator*(SoPhuc& a, SoPhuc& b) {
	SoPhuc kq;
	kq.dThuc = a.dThuc * b.dThuc - a.dAo * b.dAo;
	kq.dAo = a.dThuc * b.dAo + a.dAo * b.dThuc;
	return kq;
}


SoPhuc operator/(SoPhuc& a, SoPhuc& b) {
	SoPhuc kq;
	float k = pow(b.dThuc, 2) + pow(b.dAo, 2);
	kq.dThuc = (a.dThuc * b.dThuc + a.dAo * b.dAo) / k;
	kq.dAo = (a.dAo * b.dThuc - a.dThuc * b.dAo) / k;
	return kq;
}

bool SoPhuc::operator ==(SoPhuc& a) {
	return (this->dThuc == a.dThuc) && (this->dAo == a.dAo);
}


bool SoPhuc::operator !=(SoPhuc& a) {
	return (this->dThuc != a.dThuc) || (this->dAo != a.dAo);
}
istream& operator >> (istream& is, SoPhuc& a) {
	is >> a.dThuc >> a.dAo;
	return is;
}


ostream& operator << (ostream& os, const SoPhuc& a) {
	os << a.dThuc << " + " << a.dAo << "i";
	return os;
}

