#pragma once
#include "product.h"

class Clothes : public Product
{
private:
    string chatlieu;
    string kieudang;
    string gioitinh;

public:
    Clothes();
    Clothes(const string& maSP, const string& tenSP, const string& ThuongHieu,
            const string& mauSac, const string& Size, double gia, int soLuong,
            const string& chatlieu, const string& kieudang, const string& gioitinh);
    ~Clothes();

    bool checkngoaile(string i);
    
    string getchatlieu() const;
    string getkieudang() const;
    string getgioitinh() const;
    void setchatlieu(const string& chatlieu);
    void setkieudang(const string& kieudang);
    void setgioitinh(const string& gioitinh);

    string getTheloai() const override;
    void XuatThongTin(ostream& o) const override;
    void NhapThongTin(istream& i) override;
    double getGiaCuoi() const override;
};
