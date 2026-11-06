#pragma once
#include "Product.h"

class Shoes : public Product
{
private:
    int sizegiay;
    string loaigiay;

public:
    Shoes();
    Shoes(const string& ma, const string& ten, const string& thuonghieu,
          const string& mausac, const string& kichco, double gia, int soluong,
          int sizegiay, const string& loaigiay);
    ~Shoes();

    int getsizegiay() const;
    string getloaigiay() const;
    void setsizegiay(int sizegiay);
    void setloaigiay(const string& loaigiay);

    string gettheloai() const override;
    void xuatthongtin(ostream& o) const override;
    void nhapthongtin(istream& i) override;
    double getgiacuoi() const override;
};
