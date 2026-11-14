#pragma once
#include "product.h"

class CartItem
{
private:
    Product* sanpham;      // chi tro toi, KHONG delete (OnlineStore so huu)
    int soluong;

public:
    CartItem();
    CartItem(Product* sanpham, int soluong);

    Product* getsanpham() const;
    int getsoluong() const;
    void setsoluong(int soluong);

    double gettamtinh() const;             // sanpham->getgiacuoi() * soluong

    bool operator==(const CartItem& it) const;    // cung ma san pham
    friend ostream& operator<<(ostream& o, const CartItem& it);
};
