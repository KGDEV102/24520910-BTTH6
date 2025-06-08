#pragma once
#include<iostream>
using namespace std;

class NV
{
protected:
	string ms;
	string HoTen;
	int tuoi;
	string sdt;
	string email;
	double luong;
public:
	~NV();
	NV(string = "", string = "", int = 0, string = "", string = "", double = 0);
	virtual double GetLuong() = 0;
	virtual void Nhap();
	virtual void Xuat();
	virtual string GetLoai() = 0;
};

