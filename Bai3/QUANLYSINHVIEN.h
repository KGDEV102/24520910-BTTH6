#pragma once
#include"SINHVIEN.h"
class QUANLYSINHVIEN
{
private:
	int sl;
	SINHVIEN** dssv;
public:
	~QUANLYSINHVIEN();
	QUANLYSINHVIEN();
	void Nhap();
	void Xuat();
	void SVDuDKTN();
	void SVKhongDuDKTN();
	void SVDHMax();
	void SVCDMax();
	void SLSVKhongDuDKTN();

};

