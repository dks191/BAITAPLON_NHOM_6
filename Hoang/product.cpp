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
  in >> p.gia;
  in >> p.soLuong;

  if(p.gia <= 0){
    throw invalid_argument("Gia phai lon hon 0");
  }

  if(p.soLuong < 0){
    throw invalid_argument("So luong khong duoc am");
  }

  in.ignore();
  p.NhapThongTin(in);
  return in;
}

ostream& operator<<(ostream& out, const Product& p)
{
 out << "Ma san pham: " << p.maSP << endl;
 out << "Ten san pham: " << p.tenSP << endl;
 out << "Ten thuong hieu: " << p.ThuongHieu << endl;
 out << "Mau sac san pham: " << p.mauSac << endl;
 out << "Kich co san pham: " <<  p.Size << endl;
 out << "Gia san pham: " << p.gia << endl;
 out << "So luong san pham: " << p.soLuong << endl;
 p.XuatThongTin(out);
 return out;
}

