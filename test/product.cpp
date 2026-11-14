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
  while(!(in >> gia) || gia < 0)
  {
    cout << "Gia khong hop le! Vui long nhap lai";
    in.clear(); // xoa co loi
    in.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Nhap gia san pham: "; 
  }
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
 return out;
}

