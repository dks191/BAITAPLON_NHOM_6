#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>
using namespace std;

class Product
{
    protected:
     string maSP;
     string tenSP;
     string ThuongHieu;
     string mauSac;
     string Size;
     double gia;
     int soLuong;
    public:

    Product();
    Product(string maSP, string tenSP, string ThuongHieu,string mauSac, string Size, double gia, int soLuong);

     string getmaSP() const;//done
     double getGia() const;//done
     virtual double getGiaCuoi() const;
     virtual string getTheloai() const;

     virtual void NhapThongTin(istream& in);
     virtual void XuatThongTin(ostream& out);
     
     bool operator==(const Product& other) const;//done
     bool operator<(const Product& other) const;//done
     friend ostream& operator<<(ostream& out, const Product& p);//done
     

     virtual ~Product() = default;
};
/*
    tên hàm ghi đè đang còn sai 
    check lại 4 hàm này so với file Product.h 
    "string gettheloai() const override;
    void xuatthongtin(ostream& o) const override;
    void nhapthongtin(istream& i) override;
    double getgiacuoi() const override;"
    bo sung getMa
    "de lay ma sua san pham"
    bo sung ham thuan ao nhapthongtin
    "de nhap thong tin chung va rieng"
    bo sung ham Sua thong tin "virtual bool suaThongTin(istream& in) = 0;"
    sau đó ghi đè lại ở các file.h quần áo, giày dép, phụ kiện để sửa thông tin chung và riêng
    */

#endif