#include "clothes.h"

Clothes::Clothes():Product()
{
 chatlieu = "";
 kieudang = "";
 gioitinh = "";
}

Clothes::Clothes(const string& maSP, const string& tenSP, const string& ThuongHieu,
            const string& mauSac, const string& Size, double gia, int soLuong,
            const string& chatlieu, const string& kieudang, const string& gioitinh) 
            :Product(maSP,tenSP,ThuongHieu,mauSac,Size,gia,soLuong)
            {
                this -> chatlieu = chatlieu;
                this -> kieudang = kieudang;
                this -> gioitinh = gioitinh;
            }
Clothes::~Clothes() = default;


string Clothes::getchatlieu() const
{
    return chatlieu;
}

string Clothes::getkieudang() const
{
    return kieudang;
}

string Clothes::getgioitinh() const
{
    return gioitinh;
}

void Clothes::setchatlieu(const string& chatlieu)
{
    this -> chatlieu = chatlieu;
}

void Clothes::setkieudang(const string& kieudang)
{
    this -> kieudang = kieudang;
}

void Clothes::setgioitinh(const string& gioitinh)
{
    this -> gioitinh = gioitinh;
}

string Clothes::getTheloai() const
{
    return "Quan ao";
}

void Clothes::NhapThongTin(istream& i)
{
    i >> static_cast<Product&>(*this);

    getline(i,chatlieu);
    getline(i,kieudang);
    getline(i,gioitinh);

}


void Clothes::XuatThongTin(ostream& o) const
{
    o << "Chat lieu: " << chatlieu << endl;
    o << "Kieu dang: " << kieudang << endl;
    o << "Gioi tinh: " << gioitinh << endl;
}