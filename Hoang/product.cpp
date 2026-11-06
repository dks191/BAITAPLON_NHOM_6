#include "Product.h"

Product::Product()
{
  maSP = "";
  tenSP = "";
  ThuongHieu = "";
  mauSac = "";
  Size = "";
  gia = 0;
  soLuong = 0;
}

Product::Product(string maSP,string tenSP,string ThuongHieu,string mauSac,string Size,double gia,int soLuong)
{
  this -> maSP = maSP;
  this -> tenSP = tenSP;
  this -> ThuongHieu = ThuongHieu;
  this -> mauSac = mauSac;
  this -> Size = Size;
  this -> gia = gia;
  this -> soLuong = soLuong;
}

ostream& operator<<(ostream& out, const Product& p)
{
 out << p.maSP;
 out << p.tenSP;
 out << p.ThuongHieu;
 out << p.mauSac;
 out << p.Size;
 out << p.gia;
 out << p.soLuong;
 return out;
}

istream& operator>>(istream& in, Product& p)
{
  getline(in,p.maSP);
  getline(in,p.tenSP);
  getline(in,p.ThuongHieu);
  getline(in,p.mauSac);
  getline(in,p.Size);
  in >> p.gia;
  in >> p.soLuong;
  in.ignore();
  return in;
}

double Product::getGia() const
{
 return gia; 
}

bool Product::operator==(const Product& other) const
{
  return maSP == other.maSP;
}