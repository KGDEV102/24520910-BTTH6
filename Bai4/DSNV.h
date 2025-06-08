#pragma once
#include"NV.h"
class DSNV
{
private:
	int sl;
	NV** dsnv;
public:
	~DSNV();
	DSNV();
	void Nhap();
	void Xuat();
	void NVCoLuongThapHonTB();
	void NVCoLuongCaoNhat();
	void NVCoLuongThapNhat();
	void DevCoLuongCaoNhat();
	void TestCoLuongThapNhat();
};

