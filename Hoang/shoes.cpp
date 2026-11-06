#include "shoes.h"

Shoes::Shoes():Product()
{
 sizegiay = 0;
 loaigiay = "";
}

Shoes::Shoes(const string& maSP, const string& tenSP, const string& ThuongHieu,
          const string& mauSac, const string& Size, double gia, int soLuong,
          int sizegiay, const string& loaigiay)
          :Product(maSP,tenSP,ThuongHieu,mauSac,Size,gia,soLuong)
          {
            this -> sizegiay = sizegiay;
            this -> loaigiay = loaigiay;
          }

Shoes::~Shoes()= default;

int Shoes::getsizegiay() const
{
    return sizegiay;
}

string Shoes::getloaigiay() const
{
    return loaigiay;
}

void Shoes::setsizegiay(int sizegiay)
{
    this -> sizegiay = sizegiay;
}

void Shoes::setloaigiay(const string& loaigiay)
{
    this -> loaigiay = loaigiay;
}

string Shoes::getTheloai() const
{
    return "Giay";
}

void Shoes::NhapThongTin(istream& i)
{
    i >> static_cast<Product&>(*this);

    getline(i,loaigiay);
    i >> sizegiay;
}

void Shoes::XuatThongTin(ostream& o) const
{
    o << "Loai giay: " << loaigiay << endl;
    o << "Kich co giay: " << sizegiay << endl;
}

