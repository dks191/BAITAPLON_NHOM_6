#pragma once
#include <vector>
#include <string>
#include "Product.h"
#include "Customer.h"
#include "Voucher.h"
#include "Order.h"

class FileManager
{
public:
    bool luusanpham(const vector<Product*>& ds, const string& tenfile) const;
    vector<Product*> docsanpham(const string& tenfile) const;     // new dung lop con theo loai

    bool luukhachhang(const vector<Customer>& ds, const string& tenfile) const;
    vector<Customer> dockhachhang(const string& tenfile) const;

    bool luuvoucher(const vector<Voucher>& ds, const string& tenfile) const;
    vector<Voucher> docvoucher(const string& tenfile) const;

    bool luudonhang(const vector<Order>& ds, const string& tenfile) const;   // chi luu ma, khong luu con tro
    vector<Order> docdonhang(const string& tenfile,
                             const vector<Product*>& dssp,
                             vector<Customer>& dskh,
                             vector<Voucher>& dsvc) const;        // tim lai con tro theo ma
};
