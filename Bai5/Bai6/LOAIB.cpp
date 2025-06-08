#include "LOAIB.h"
LOAIB::LOAIB(string ten, int sl, double dg,int thanthiet):KHACHHANG(ten,sl,dg),SoNamThanThiet(thanthiet) {

}
double LOAIB::SoTienPhaiTra() {
	return ((SoLuong * DonGia * (100.0 / 100 - max(SoNamThanThiet * 5.0 / 100, 50.0 / 100))) +
		(SoLuong * DonGia * (100.0 / 100 - max(SoNamThanThiet * 5.0 / 100, 50.0 / 100)) * 10.0 / 100));
}

string LOAIB::GetLoai() {
	return "LOAIB";
}
