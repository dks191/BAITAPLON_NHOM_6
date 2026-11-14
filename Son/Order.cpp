#include <Order.h>

Order::Order(const string ma, Customer *khachhang,const vector<CartItem> dssanpham,const Date ngay)
{
    this->ma = ma;
    this->ngay = ngay;
}


string Order::getma() const
{
    return ma;
}

Customer* Order::getkhachhang() const{
    return khachhang;
}

Voucher* Order::getvoucher() const{
    return voucher;
}

Date Order::getngay() const
{
    return ngay;
}

string Order::gettrangthai() const{
    return trangthai;
}

void Order::setvoucher(Voucher * voucher)
{
    this->voucher = voucher;
}

double Order::tinhtongtien() const
{
    
}