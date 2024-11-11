#ifndef THOIGIAN_H
#define THOIGIAN_H
#include<iostream>
#include <cmath>
using namespace std ;

class Thoigian{
    private:
        int iGio , iPhut , iGiay ;
    public: 
        Thoigian() ;
        Thoigian(int Gio , int Phu , int Giay) ;
        int TinhGiay() ;
        Thoigian TinhLaiGio(int& Giay) ;
        Thoigian operator + (int& Giay) ;
        Thoigian operator - (int& Giay) ;
        Thoigian operator + (Thoigian& a) ;
        Thoigian operator - (Thoigian& a) ;
        Thoigian operator ++ () ; // tien to ++i
        Thoigian operator ++ (int) ; //hau to i++
        bool operator == (Thoigian& a ) ;
        bool operator != (Thoigian & a ) ;
        bool operator >= (Thoigian & a ) ;
        bool operator <= (Thoigian & a ) ;
        bool operator > (Thoigian & a ) ;
        bool operator < (Thoigian & a ) ;
        friend istream& operator >> (istream& is , Thoigian& t) ;
        friend ostream& operator << (ostream& os ,const Thoigian& t) ;

};
#endif THOIGIAN_H