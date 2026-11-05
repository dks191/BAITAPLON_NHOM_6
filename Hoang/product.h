#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
using namespace std;

class Product
{
    protected:
     string maSP;
     string tenSP;
     string ThuongHieu;
     string Size;
     double gia;
     int soLuong;
    public:
     virtual string getTheloai() const = 0;
     virtual void XuatThongTin() const = 0;

     double getGia() const;
     bool operator==(const Product& other) const;

     friend istream& operator>>(istream& in, Product& p);
     friend ostream& operator<<(ostream& out, const Product& p);

     virtual ~Product() = default;
};

#endif