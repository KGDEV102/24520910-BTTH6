#pragma once
#include"SINHVIEN.h"
class SVCD :public SINHVIEN
{
public:
	double GetDTB();
	double GetDTN();
	string GetLoai();
	bool isTN();
};

