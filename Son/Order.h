#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <string>
#include <vector>

#include "CartItem.h"  // Order o-- "1..*" CartItem (chứa theo giá trị)
#include "Date.h"      // Order *-- "1" Date (composition)

// Order --> "1" Customer, Order --> "0..1" Voucher: chỉ giữ con trỏ => forward declaration
class Customer;
class Voucher;

class Order {
private:
    std::string ma;
    Customer* khachhang;                 // không sở hữu
    std::vector<CartItem> dssanpham;
    Voucher* voucher;                    // không sở hữu, nullptr nếu không dùng voucher
    Date ngay;
    std::string trangthai;

public:
    // ===== Constructor =====
    Order();
    Order(std::string ma,
          Customer* khachhang,
          const std::vector<CartItem>& dssanpham,
          const Date& ngay);

    // ===== Getter =====
    std::string getma() const;
    Customer* getkhachhang() const;
    const std::vector<CartItem>& getdanhsach() const;
    Voucher* getvoucher() const;
    Date getngay() const;
    std::string gettrangthai() const;

    // ===== Setter =====
    void setvoucher(Voucher* voucher);
    bool settrangthai(const std::string& ttmoi);   // false nếu chuyển trạng thái không hợp lệ

    // ===== Nghiệp vụ =====
    double tinhtongtien() const;                          // tổng tiền sau khi áp voucher (nếu có)
    bool ischuyenhople(const std::string& ttmoi) const;   // kiểm tra trạng thái mới có hợp lệ không

    // ===== Xuất thông tin =====
    friend std::ostream& operator<<(std::ostream& o, const Order& od);
};

#endif // ORDER_H