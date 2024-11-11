#ifndef SOPHUC_H
#define SOPHUC_H
#include<iostream>
using namespace std;
class SoPhuc {
private:
	int dThuc, dAo;
public:
	SoPhuc();
	SoPhuc(int thuc, int ao);
	friend SoPhuc operator + ( SoPhuc& a , SoPhuc& b);
	friend SoPhuc operator - (SoPhuc& a , SoPhuc& b);
	friend SoPhuc operator* (SoPhuc& a , SoPhuc& b);
	friend SoPhuc operator /(SoPhuc& a , SoPhuc& b);
	bool operator == (SoPhuc& a);
	bool operator != (SoPhuc& a);
	friend istream& operator >> (istream& is, SoPhuc& a);
	friend ostream& operator << (ostream& os,const SoPhuc& a);

};
#endif SOPHUC_H
