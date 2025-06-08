#pragma once
#include"NV.h"
class test :public NV
{
protected:
	int error;
public:
	~test();
	test(string = "", string = "", int = 0, string = "", string = "", double = 0, int = 0);
	void Nhap();
	void Xuat();
	double GetLuong();
	string GetLoai();
};

