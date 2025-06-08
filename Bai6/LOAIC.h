#pragma once
#include"KHACHHANG.h"
class LOAIC : public KHACHHANG
{
public:
	LOAIC(string = "", int = 0, double = 0);
	double SoTienPhaiTra();
	string GetLoai();
};

