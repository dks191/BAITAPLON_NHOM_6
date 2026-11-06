#pragma once
#include "Product.h"

class Shoes : public Product
{
private:
    int sizegiay;
    string loaigiay;

public:
    Shoes();
    Shoes(const string& maSP, const string& tenSP, const string& ThuongHieu,
          const string& mauSac, const string& Size, double gia, int soLuong,
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
