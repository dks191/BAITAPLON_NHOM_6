#pragma once
#include "product.h"

class Accessory : public Product
{
private:
    string loaiphukien;
    string chatlieu;
public:
    Accessory();
    Accessory(const string& maSP, const string& tenSP, const string& ThuongHieu,
              const string& mauSac, const string& Size, double gia, int soLuong,
              const string& loaiphukien, const string& chatlieu);
    ~Accessory();

    string getloaiphukien() const;
    string getchatlieu() const;
    void setloaiphukien(const string& loaiphukien);
    void setchatlieu(const string& chatlieu);

    string getTheloai() const override;
    void XuatThongTin(ostream& o) const override;
    void NhapThongTin(istream& i) override;
    double getGiaCuoi() const override;
};
