#include "accessory.h"

Accessory::Accessory()
{
    loaiphukien = "";
    chatlieu = "";
}

Accessory::Accessory(const string& maSP, const string& tenSP, const string& ThuongHieu,
              const string& mauSac, const string& Size, double gia, int soLuong,
              const string& loaiphukien, const string& chatlieu)
              :Product(maSP,tenSP,ThuongHieu,mauSac,Size,gia,soLuong)
              {
                this -> loaiphukien = loaiphukien;
                this -> chatlieu = chatlieu;
              }
Accessory::~Accessory() = default;

string Accessory::getloaiphukien() const
{
    return loaiphukien;
}

string Accessory::getchatlieu() const
{
return chatlieu;
}

void Accessory::setloaiphukien(const string& loaiphukien)
{
    this -> loaiphukien = loaiphukien;
}

void Accessory::setchatlieu(const string& chatlieu)
{
 this -> chatlieu = chatlieu;
}

string Accessory::getTheloai() const
{
    return "Phu kien";
}

void Accessory::NhapThongTin(istream& i)
{
 i >> static_cast<Product&>(*this);

 getline(i,loaiphukien);
 getline(i,chatlieu);
}

void Accessory::XuatThongTin(ostream& o) const
{
    o << "Loai phu kien: " << loaiphukien << endl;
    o << "Chat lieu phu kien: " << chatlieu << endl;
}