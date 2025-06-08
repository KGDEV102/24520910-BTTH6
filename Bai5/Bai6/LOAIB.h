#pragma once
#include"KHACHHANG.h"
class LOAIB : public KHACHHANG
{
protected:
	int SoNamThanThiet;
public:
	LOAIB(string = "", int = 0, double = 0, int = 0);
	double SoTienPhaiTra();
	string GetLoai();
};

