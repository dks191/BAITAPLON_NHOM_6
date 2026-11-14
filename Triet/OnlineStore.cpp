#include"OnlineStore.h"
#include"clothes.h"
#include"shoes.h"
#include"accessory.h"
#include<iostream>
OnlineStore::OnlineStore(){}
OnlineStore::~OnlineStore(){
    for(Product* p: this->dssanpham){
        delete p;
    }
}
bool OnlineStore::themsanpham(){
    int chon;
    Product* p = nullptr;
    cout << "1. Quan ao" << endl;
    cout << "2. Giay dep" << endl;
    cout << "3. Phu kien" << endl;
    cout << "Chon loai san pham: ";
    if(!(cin>>chon)){
        return false;
    }
    if(chon==1){
        p = new Clothes();
    }
    else if(chon==2){
        p = new Shoes();
    }
    else if(chon==3){
        p = new Accessory();
    }
    else{
        cout << "Loai khong hop le!" << endl;
        return false;
    }
    p->nhapthongtin(cin>>ws);
    if (!cin){
        delete p;
        return false;
    }
    for (Product* sp : this->dssanpham){
        if (*sp==*p){
            cout << "Ma san pham da ton tai!" << endl;
            delete p;
            return false;
        }
    }
    this->dssanpham.push_back(p);
    cout << "Them san pham thanh cong!" << endl;
    return true;
}
Product* OnlineStore::timsanphamtheoma(const string& ma) const{
    for (Product* p : this->dssanpham){
        if (p->getMaSp()==ma){
            return p;
        }
    }
    return nullptr;
}
bool OnlineStore::suasanpham(const string& ma){
    Product* p = timsanphamtheoma(ma);
    if (p==nullptr){
        cout << "Khong tim thay san pham!" << endl;
        return false;
    }
        cout << "Nhap thong tin moi:" << endl;
        bool kq = p->SuaThongTin(cin);
        if (kq==false){
            cout << "Sua thong tin that bai!" << endl;
            return false;
        }
        cout << "Sua thong tin thanh cong!" << endl;
        return true;
}