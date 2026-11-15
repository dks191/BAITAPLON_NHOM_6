#include "product.h"
template <typename GT>

static GT docso(istream& in , const string &loinhac)
{
  string s;
  while(1)
  {
  getline(in,s);
  stringstream tmp(s);
  GT v;
  string du;
  if((tmp>>v) && !(tmp>>du) && v >=0)
  {
    return v;
  }
  cout << loinhac;
}
}

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
  :maSP{move(maSP)}, tenSP{move(tenSP)}, ThuongHieu{move(ThuongHieu)} , mauSac{move(mauSac)}, Size{move(Size)}, gia{gia} , soLuong{soLuong}
  {
    if (gia < 0)
    {
      throw invalid_argument("Gia khong hop le");
    }
    if (soLuong < 0)
    {
      throw invalid_argument("So luong khong hop le");
    }
  }

string Product::getmaSP() const
{
  return maSP;
}
double Product::getGia() const
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

void Product::NhapThongTin(istream &in)
{
  cout << "Nhap ma san pham: ";
  getline(in,maSP);
  cout << "Nhap ten san pham: ";
  getline(in,tenSP);
  cout << "Nhap ten thuong hieu: ";
  getline(in,ThuongHieu);
  cout << "Nhap mau sac san pham: ";
  getline(in,mauSac);
  cout << "Nhap kich co san pham: ";
  getline(in,Size);
  cout << "Nhap gia san pham: ";
  gia = docso<double>(in,"Gia san pham khong hop le! Vui long nhap lai: ");
  cout << "Nhap so luong san pham: ";
  soLuong = docso<int>(in,"So luong san pham khong hop le! Vui long nhap lai: ");

}

void Product::XuatThongTin(ostream& out) const
{
  out << "Ma san pham: " << maSP << endl;
  out << "Ten san pham: " << tenSP << endl;
  out << "Ten thuong hieu: " << ThuongHieu << endl;
  out << "Mau sac san pham: " << mauSac << endl;
  out << "Kich co san pham: " <<  Size << endl;
  out << "Gia san pham: " << gia << endl;
  out << "So luong san pham: " << soLuong << endl;
}

ostream& operator<<(ostream& out, const Product& p)
{
  p.XuatThongTin(out);
  return out;
}

istream& operator>>(istream &in,Product &p)
{
  p.NhapThongTin(in);
  return in;
}

