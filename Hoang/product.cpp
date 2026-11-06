#include "product.h"

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

double Product::getGia() const
{
 return gia; 
}

double Product::getGiaCuoi() const
{
  return gia;
}

bool Product::operator==(const Product& other) const
{
  return maSP == other.maSP;
}

bool Product::operator<(const Product& other) const
{
  return gia < other.gia;
}

istream& operator>>(istream& in, Product& p)
{
  getline(in,p.maSP);
  getline(in,p.tenSP);
  getline(in,p.ThuongHieu);
  getline(in,p.mauSac);
  getline(in,p.Size);
  
  while(true)
  {
    in >> p.gia;
    in >> p.soLuong;
    if(p.gia > 0 && p.soLuong >= 0){
      break;
    }
    else {
      continue;
    }
  }

  in.ignore();
  p.NhapThongTin(in);
  return in;
}

ostream& operator<<(ostream& out, const Product& p)
{
 out << p.maSP << endl;
 out << p.tenSP << endl;
 out << p.ThuongHieu << endl;
 out << p.mauSac << endl;
 out << p.Size << endl;
 out << p.gia << endl;
 out << p.soLuong << endl;
 p.XuatThongTin(out);
 return out;
}

