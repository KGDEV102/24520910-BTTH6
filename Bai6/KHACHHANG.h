#pragma once
#include<iostream>
using namespace std;
class KHACHHANG
{
protected:
	string ten;
	int SoLuong;
	double DonGia;
	
public:
	~KHACHHANG();
	KHACHHANG(string = "",int = 0, double = 0);
	virtual void Nhap();
	void Xuat();
	virtual double SoTienPhaiTra() = 0;
	virtual string GetLoai() = 0;
	string GetTen();
	int GetSoLuong();
	double GetDonGia();
};

