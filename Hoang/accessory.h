#pragma once
#include "Product.h"

class Accessory : public Product
{
private:
    string loaiphukien;
    string chatlieu;

public:
    Accessory();
    Accessory(const string& ma, const string& ten, const string& thuonghieu,
              const string& mausac, const string& kichco, double gia, int soluong,
              const string& loaiphukien, const string& chatlieu);
    ~Accessory();

    string getloaiphukien() const;
    string getchatlieu() const;
    void setloaiphukien(const string& loaiphukien);
    void setchatlieu(const string& chatlieu);

    string gettheloai() const override;
    void xuatthongtin(ostream& o) const override;
    void nhapthongtin(istream& i) override;
    double getgiacuoi() const override;
};
