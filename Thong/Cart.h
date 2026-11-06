#pragma once
#include <vector>
#include "CartItem.h"

class Cart
{
private:
    vector<CartItem> dssanpham;

public:
    Cart();

    bool themsanpham(Product* sp, int soluong);        // da co thi cong don
    bool xoasanpham(const string& ma);
    bool capnhatsoluong(const string& ma, int soluong);
    const CartItem* timsanpham(const string& ma) const;

    const vector<CartItem>& getdanhsach() const;
    int getsoluongdong() const;
    double gettongtien() const;
    bool isrong() const;
    void xoahet();

    Cart& operator+=(const CartItem& it);
    friend ostream& operator<<(ostream& o, const Cart& c);
};
