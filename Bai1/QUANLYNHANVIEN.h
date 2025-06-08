#pragma once
#include"NV.h"
#include"NVSX.h"
#include"NVVP.h"
class QUANLYNHANVIEN
{
private:
	int sl;
	NV** dsnv;
public:
	~QUANLYNHANVIEN();
	QUANLYNHANVIEN();
	void Nhap();
	void Xuat();
	double TongLuong();
	void NVSXCoLuongThapNhat();
	void NVVPCoTuoiCaoNhat();
};

