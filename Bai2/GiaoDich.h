#pragma once
#include<iostream>
#include<string>
using namespace std;
class GiaoDich
{
protected:
	string MGD;
	string NgayGD;
	double DonGia;
	double DienTich;
	
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual double ThanhTien() = 0;
	virtual string GetLoai() = 0;
	virtual string GetNgay() = 0;
};


