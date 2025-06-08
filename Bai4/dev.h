#pragma once
#include"NV.h"
class dev : public NV
{
protected:
	int overtime;
public:
	~dev();
	dev(string = "",string = "", int = 0,string = "", string ="",double = 0,int =0);
	void Nhap();
	void Xuat();
	double GetLuong();
	string GetLoai();
};

