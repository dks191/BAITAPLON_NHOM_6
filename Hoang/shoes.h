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

    string getTheloai() const override;
    void XuatThongTin(ostream& o) const override;
    void NhapThongTin(istream& i) override;
    double getGiaCuoi() const override;
};
