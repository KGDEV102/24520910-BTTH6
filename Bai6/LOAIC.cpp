#include "LOAIC.h"
double LOAIC::SoTienPhaiTra() {
	return (SoLuong * DonGia * 50 / 100) + (SoLuong * DonGia * 50 / 100) * 10 / 100;
}
string LOAIC::GetLoai() {
	return "LOAIC";
}
LOAIC::LOAIC(string ten, int sl, double dg) :KHACHHANG(ten, sl, dg) { }
