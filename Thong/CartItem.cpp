#include "CartItem.h"

CartItem::CartItem(Product *sanpham,int soluong)
{
    this->sanpham = sanpham;
    this->soluong = soluong;
}

double CartItem:: gettamtinh() const
{
    return sanpham->getGia()*soluong;
}
