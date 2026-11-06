#pragma once
#include "Product.h"

class Clothes : public Product
{
private:
    string chatlieu;
    string kieudang;
    string gioitinh;

public:
    Clothes();
    Clothes(const string& ma, const string& ten, const string& thuonghieu,
            const string& mausac, const string& kichco, double gia, int soluong,
            const string& chatlieu, const string& kieudang, const string& gioitinh);
    ~Clothes();

    string getchatlieu() const;
    string getkieudang() const;
    string getgioitinh() const;
    void setchatlieu(const string& chatlieu);
    void setkieudang(const string& kieudang);
    void setgioitinh(const string& gioitinh);

    string gettheloai() const override;
    void xuatthongtin(ostream& o) const override;
    void nhapthongtin(istream& i) override;
    double getgiacuoi() const override;
};
