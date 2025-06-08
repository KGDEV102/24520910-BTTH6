#include "SVDH.h"
SVDH::~SVDH() {
	return;
}
SVDH::SVDH(string mssv, string ten, string dc, int tong, double dtb, double dtn, double dlv) :SINHVIEN(mssv, ten, dc, tong, dtb, dtn), DiemLuanVan(dlv) {

}
void SVDH::Nhap() {
	SINHVIEN::Nhap();
	cout << "Diem luan van: ";
	cin >> DiemLuanVan;
}
void SVDH::Xuat() {
	SINHVIEN::Xuat();
	cout << "\tDiem luan van: " << DiemLuanVan;
}

bool SVDH::isTN() {
	if (TongTC >= 170 && DTB >= 5 && DiemLuanVan >= 5) return true;
	return false;
}
double SVDH::GetDiemLuanVan() {
	return DiemLuanVan;
}
string SVDH::GetLoai() {
	return "SVDH";
}
