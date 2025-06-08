#pragma once
#include"NV.h"
class NVSX : public NV
{
protected:
	int SoSP;
public:
	~NVSX();
	NVSX(string = "", string = "", double = 0, int = 0);
	void Nhap();
	void Xuat();
	double GetLuong();
	string GetLoai();
	int GetTuoi();
};

