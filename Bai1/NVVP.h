#pragma once
#include"NV.h"
class NVVP : public NV
{
protected:
	int SoNgayLamViec;
public:
	~NVVP();
	NVVP(string = "", string = "", double = 0, int = 0);
	void Nhap();
	void Xuat();
	double GetLuong();
	string GetLoai();
	int GetTuoi();
};

