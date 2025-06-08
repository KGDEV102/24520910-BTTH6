#pragma once
#include<iostream>
using namespace std;
class NV
{
protected:
	string HoTen;
	string NgaySinh;
	double luong;
public:
	~NV();
	NV(string ="",string = "",double = 0);
	virtual void Nhap();
	virtual void Xuat();
	virtual double GetLuong() = 0;
	virtual string GetLoai() = 0;
	int GetTuoi();
};

