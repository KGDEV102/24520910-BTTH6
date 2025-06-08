#pragma once
#include"SINHVIEN.h"
class SVDH : public SINHVIEN
{
protected:
	double DiemLuanVan;
public:
	~SVDH();
	SVDH(string = "", string = "", string = "", int = 0, double = 0, double = 0, double = 0);
	void Nhap();
	void Xuat();
	string GetLoai();
	double GetDiemLuanVan();
	bool isTN();
};

