#pragma once
#include <vector>
#include "Customer.h"
#include "Voucher.h"
#include "CartItem.h"
#include "Date.h"

class Order
{
private:
    string ma;
    Customer* khachhang;           // chi tro toi, khong delete
    vector<CartItem> dssanpham;
    Voucher* voucher;              // co the nullptr neu khong dung voucher
    Date ngay;
    string trangthai;              // Moi, DaThanhToan, DaGiao, Huy

    bool ischuyenhople(const string& ttmoi) const;

public:
    Order();
    Order(const string& ma, Customer* khachhang,
          const vector<CartItem>& dssanpham, const Date& ngay);

    string getma() const;
    Customer* getkhachhang() const;
    const vector<CartItem>& getdanhsach() const;
    Voucher* getvoucher() const;
    Date getngay() const;
    string gettrangthai() const;

    void setvoucher(Voucher* voucher);

    double tinhtongtien() const;                     // tong cac dong, sau do ap voucher
    bool settrangthai(const string& ttmoi);          // false neu chuyen khong hop le

    friend ostream& operator<<(ostream& o, const Order& od);
};
