#pragma once
#include<iostream>
using namespace std;
class SINHVIEN
{
protected:
	string mssv;
	string HoTen;
	string DiaChi;
	int TongTC;
	double DTB;
	double DTN;
public:
	~SINHVIEN();
	SINHVIEN(string = "", string = "", string = "", int = 0, double = 0, double = 0);
	virtual void Nhap();
	virtual void Xuat();
	virtual string GetLoai() = 0;
	virtual bool isTN() = 0;
	double GetDTB();
	double GetDTN();
};

