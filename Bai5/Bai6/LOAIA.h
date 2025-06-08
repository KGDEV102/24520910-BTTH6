#pragma once
#include"KHACHHANG.h"
class LOAIA : public KHACHHANG
{
public:
	LOAIA(string = "", int = 0, double = 0);
	double SoTienPhaiTra();
	string GetLoai();
};

