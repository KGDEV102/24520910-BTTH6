#pragma once
#include"GiaoDich.h"
#include"GiaoDichDat.h"
#include"GiaoDichNhaPho.h"
#include"GiaoDichCanHoChungCu.h"
class QUANLYGIAODICH
{
private:
	int sl;
	GiaoDich** dsgd;
public:
	~QUANLYGIAODICH();
	QUANLYGIAODICH();
	void Nhap();
	void TongSo();
	double TBThanhTienGDCanHoChungCu();
	void GDNhaPhoMax();
	void CacGDThang12();

};

