#include "LOAIA.h"
double LOAIA::SoTienPhaiTra() {
	return (SoLuong * DonGia + 10 / 100 * SoLuong * DonGia);
}
string LOAIA::GetLoai() {
	return "LOAIA";
}
LOAIA::LOAIA(string ten, int sl, double dg):KHACHHANG(ten,sl,dg){ }
