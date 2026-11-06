#pragma once
#include <vector>
#include <string>
#include <utility>
#include "Product.h"
#include "Customer.h"
#include "Order.h"
#include "Voucher.h"
#include "Date.h"

class OnlineStore
{
private:
    vector<Product*> dssanpham;    // OnlineStore la noi DUY NHAT delete Product*
    vector<Customer> dskhachhang;
    vector<Order> dsdonhang;
    vector<Voucher> dsvoucher;

public:
    OnlineStore();
    ~OnlineStore();                                    // delete cac Product*
    OnlineStore(const OnlineStore&) = delete;          // tranh delete 2 lan
    OnlineStore& operator=(const OnlineStore&) = delete;

    // san pham
    bool themsanpham();
    bool suasanpham(const string& ma);
    bool xoasanpham(const string& ma);
    Product* timsanphamtheoma(const string& ma) const;
    vector<Product*> timkiemsanpham(const string& loai, const string& size, const string& mau,
                                    double giatu, double giaden) const;

    // khach hang, voucher, don hang
    bool themkhachhang(const Customer& kh);
    Customer* timkhachhang(const string& ma);
    bool themvoucher(const Voucher& v);
    Order* taodonhang(Customer& kh, const string& mavoucher, const Date& homnay);

    // thong ke, loc, sap xep
    double doanhthutheongay(const Date& ngay) const;
    vector<pair<string, int>> topbanchay(int n) const;
    vector<Product*> saphethang(int nguong) const;
    void sapxeptheogia(bool tangdan);

    // file
    void docdulieu();
    void luudulieu() const;
};
