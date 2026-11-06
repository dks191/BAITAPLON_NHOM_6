#pragma once
#include "Cart.h"

class Customer
{
private:
    string ma;
    string ten;
    string sdt;
    string diachi;
    Cart giohang;          // composition: khach hang so huu gio hang

public:
    Customer();
    Customer(const string& ma, const string& ten, const string& sdt, const string& diachi);

    string getma() const;
    string getten() const;
    string getsdt() const;
    string getdiachi() const;
    void setten(const string& ten);
    void setsdt(const string& sdt);
    void setdiachi(const string& diachi);

    Cart& getgiohang();
    const Cart& getgiohang() const;

    bool kiemtrasdt() const;               // kiem tra so dien thoai hop le

    bool operator==(const Customer& c) const;
    friend ostream& operator<<(ostream& o, const Customer& c);
    friend istream& operator>>(istream& i, Customer& c);
};
