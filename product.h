#include <bits/stdc++.h>
#pragma once;

class product
{
    std::string id;
    std::string name;
    int soluong;
    int giatien;
    public:
    product() = default;
    product(std::string id, std::string name, int soluong , int giatien)
    : id{std::move(id)} , name{std::move(name)}, soluong{soluong},giatien{giatien}{}
};